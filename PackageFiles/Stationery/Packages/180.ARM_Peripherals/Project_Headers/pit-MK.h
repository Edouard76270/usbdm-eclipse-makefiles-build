/**
 * @file      pit.h (derived from pit-MK.h)
 *
 * @brief    Abstraction layer for PIT interface
 *
 * @version  V4.12.1.80
 * @date     13 April 2016
 */

#ifndef INCLUDE_USBDM_PIT_H_
#define INCLUDE_USBDM_PIT_H_
 /*
 * *****************************
 * *** DO NOT EDIT THIS FILE ***
 * *****************************
 *
 * This file is generated automatically.
 * Any manual changes will be lost.
 */
#include "derivative.h"
#include "system.h"
#include "hardware.h"

namespace USBDM {

/**
 * @addtogroup PIT_Group PIT, Programmable Interrupt Timer
 * @brief Abstraction for Programmable Interrupt Timer
 * @{
 */
/**
 * Type definition for PIT interrupt call back
 */
typedef void (*PITCallbackFunction)(void);

/**
 * @brief Class representing a Programmable Interrupt  Timer
 *
 * <b>Example</b>
 * @code
 *
 * @endcode
 */
template<class Info>
class Pit_T {
protected:
   /** Default TCTRL value for timer channel */
   static constexpr uint32_t PIT_TCTRL_DEFAULT_VALUE = (PIT_TCTRL_TEN_MASK);

   /** Callback functions for ISRs */
   static PITCallbackFunction callback[Info::irqCount];

public:
   /** PIT interrupt handler -  Calls PIT0 callback */
   static void irq0Handler() {
      // Clear interrupt flag
      PIT->CHANNEL[0].TFLG = PIT_TFLG_TIF_MASK;

      if (Pit_T::callback[0] != 0) {
         Pit_T::callback[0]();
      }
      else {
         setAndCheckErrorCode(E_NO_HANDLER);
      }
   }
   /** PIT interrupt handler -  Calls PIT1 callback */
   static void irq1Handler() {
      // Clear interrupt flag
      PIT->CHANNEL[1].TFLG = PIT_TFLG_TIF_MASK;

      if (Pit_T::callback[1] != 0) {
         Pit_T::callback[1]();
      }
      else {
         setAndCheckErrorCode(E_NO_HANDLER);
      }
   }
   /** PIT interrupt handler -  Calls PIT2 callback */
   static void irq2Handler() {
      // Clear interrupt flag
      PIT->CHANNEL[2].TFLG = PIT_TFLG_TIF_MASK;

      if (Pit_T::callback[2] != 0) {
         Pit_T::callback[2]();
      }
      else {
         setAndCheckErrorCode(E_NO_HANDLER);
      }
   }
   /** PIT interrupt handler -  Calls PIT3 callback */
   static void irq3Handler() {
      // Clear interrupt flag
      PIT->CHANNEL[3].TFLG = PIT_TFLG_TIF_MASK;

      if (Pit_T::callback[3] != 0) {
         Pit_T::callback[3]();
      }
      else {
         setAndCheckErrorCode(E_NO_HANDLER);
      }
   }

public:
   /**
    * Enable/disable channel interrupts
    *
    * @param channel Channel being modified
    * @param enable  True => enable, False => disable
    */
   static void enableInterrupts(unsigned channel, bool enable=true) {
      if (enable) {
         pit->CHANNEL[channel].TCTRL |= PIT_TCTRL_TIE_MASK;
      }
      else {
         pit->CHANNEL[channel].TCTRL &= ~PIT_TCTRL_TIE_MASK;
      }
   }

   /**
    * Set callback for ISR
    *
    * @param channel  The PIT channel to modify
    * @param callback The function to call from stub ISR
    */
   static void setCallback(unsigned channel, PITCallbackFunction callback) {
      Pit_T::callback[channel] = callback;
   }

protected:
   /** Pointer to hardware */
   static constexpr volatile PIT_Type *pit       = Info::pit;

   /** Pointer to clock register */
   static constexpr volatile uint32_t *clockReg  = Info::clockReg;

public:
   /**
    *  Enable the PIT with default settings
    *
    *  @param mcr       Module Control Register
    */
   static void enable(uint32_t mcr=Info::mcr) {
      // Enable clock
      *clockReg |= Info::clockMask;
      __DMB();

      // Enable timer
      pit->MCR = mcr;
      for (unsigned i=0; i<Info::irqCount; i++) {
         enableNvicInterrupts(i);
      }
   }
   /**
    *   Disable the PIT channel
    */
   static void finalise(uint8_t channel) {
      *clockReg &= ~Info::clockMask;
   }

   /**
    * Enable/disable interrupts in NVIC
    *
    * @param channel Channel being modified
    * @param enable True => enable, False => disable
    */
   static ErrorCode enableNvicInterrupts(unsigned channel, bool enable=true) {
      if (channel>=Info::irqCount) {
         setAndCheckErrorCode(E_ILLEGAL_PARAM);
      }
      IRQn_Type irqNum;
      switch(channel) {
      case 0: irqNum = Info::irqNums[0]; break;
      case 1: irqNum = Info::irqNums[1]; break;
      case 2: irqNum = Info::irqNums[2]; break;
      case 3: irqNum = Info::irqNums[3]; break;
      default:
         return setErrorCode(E_ILLEGAL_PARAM);
      }
      if (enable) {
         // Enable interrupts
         NVIC_EnableIRQ(irqNum);

         // Set priority level
         NVIC_SetPriority(irqNum, Info::irqLevel);
      }
      else {
         // Disable interrupts
         NVIC_DisableIRQ(irqNum);
      }
      return E_NO_ERROR;
   }
   /**
    *  Enable/Disable the PIT channel
    *
    *  @param channel   Channel to enable
    */
   static void enableChannel(const uint8_t channel, bool enable=true) {
      if (enable) {
         pit->CHANNEL[channel].TCTRL |= PIT_TCTRL_TEN_MASK;
      }
      else {
         pit->CHANNEL[channel].TCTRL &= PIT_TCTRL_TEN_MASK;
      }
      enableNvicInterrupts(channel, enable);
   }
   /**
    *  Configure the PIT channel
    *
    *  @param channel   Channel to configure
    *  @param interval  Interval in timer ticks (usually bus clock period)
    *  @param tctrl     Timer Control Register value
    */
   static void configureChannel(const uint8_t channel, int interval, uint32_t tctrl=PIT_TCTRL_DEFAULT_VALUE) {
      pit->CHANNEL[channel].LDVAL = interval;
      pit->CHANNEL[channel].TCTRL = tctrl;
      pit->CHANNEL[channel].TFLG  = PIT_TFLG_TIF_MASK;

      enableNvicInterrupts(channel);
   }
   /**
    *  Configure the PIT channel
    *
    *  @param channel   Channel to configure
    *  @param interval  Interval in seconds
    *  @param tctrl     Timer Control Register value
    */
   static void configureChannel(const uint8_t channel, float interval, uint32_t tctrl=PIT_TCTRL_DEFAULT_VALUE) {
      configureChannel(channel, (int)round(interval*PitInfo::getClockFrequency()), tctrl);
   }
   /**
    * Set period in seconds
    *
    * @param channel Channel being modified
    * @param interval Interval in seconds
    */
   static void setPeriod(unsigned channel, float interval) {
      pit->CHANNEL[channel].LDVAL = round(interval*PitInfo::getClockFrequency());
   }
   /**
    *   Disable the PIT channel
    */
   static void finaliseChannel(uint8_t channel) {

      // Disable timer channel
      pit->CHANNEL[channel].TCTRL = 0;

      // Disable timer interrupts
      enableNvicInterrupts(channel, false);
   }
   /**
    *  Use a PIT channel to implement a busy-wait delay
    *
    *  @param channel   Channel to use
    *  @param interval  Interval to wait in timer ticks (usually bus clock period)
    *
    *  @note Function doesn't return until interval has expired
    */
   static void delay(uint8_t channel, uint32_t interval) {
      configureChannel(channel, interval, PIT_TCTRL_TEN_MASK);
      while (pit->CHANNEL[channel].TFLG == 0) {
         __NOP();
      }
      configureChannel(channel, 0, 0);
   }

};

/**
 * Callback table for programmatically set handlers
 */
template<class Info> PITCallbackFunction Pit_T<Info>::callback[] = {0};

#ifdef PIT
/**
 * @brief class representing the PIT
 */
using Pit = Pit_T<PitInfo>;
#endif

/**
 * @}
 */

} // End namespace USBDM

#endif /* INCLUDE_USBDM_PIT_H_ */
