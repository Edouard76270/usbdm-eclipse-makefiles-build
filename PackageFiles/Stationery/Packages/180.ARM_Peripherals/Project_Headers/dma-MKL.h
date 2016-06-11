/*
 * dma.h (derived from dma-MKL.h)
 *
 *  Created on: 08/07/2014
 *      Author: podonoghue
 */

#ifndef INCLUDE_USBDM_DMA_H_
#define INCLUDE_USBDM_DMA_H_

#include "derivative.h"
#include "hardware.h"
 /*
 * *****************************
 * *** DO NOT EDIT THIS FILE ***
 * *****************************
 *
 * This file is generated automatically.
 * Any manual changes will be lost.
 */
namespace USBDM {

/**
* @addtogroup DMA_Group Direct Memory Access (DMA)
* @brief Support for DMA operations
* @{
*/
class DmaChannel {

protected:
   static constexpr volatile uint32_t *clockReg = Dmamux0Info::clockReg;

private:
   volatile DMA_Type    *dmac;
   volatile DMAMUX_Type *dmaMux;
   unsigned channel;

public:
   struct DMAInformation {
      uint32_t source;
      uint32_t destination;
      uint32_t byteCount;
      uint32_t control;
      uint16_t sourceDevice;
   };

   DmaChannel(volatile DMA_Type *dmac, volatile DMAMUX_Type *dmaMux, unsigned channel) {
      this->dmac    = dmac;
      this->dmaMux  = dmaMux;
      this->channel = channel;
   }

   void configure(DMAInformation *information) {
      *clockReg |= Dmamux0Info::clockMask;
      dmaMux->CHCFG[channel]      = 0;
      dmac->DMA[channel].DSR_BCR  = DMA_DSR_BCR_BCR(information->byteCount);
      dmac->DMA[channel].SAR      = information->source;
      dmac->DMA[channel].DAR      = information->destination;
      dmac->DMA[channel].DCR      = information->control;
      dmaMux->CHCFG[channel]      = DMAMUX_CHCFG_SOURCE(information->sourceDevice)|DMAMUX_CHCFG_ENBL_MASK;
   }

   void wait() {
      while ((dmac->DMA[channel].DSR & DMA_DSR_DONE_MASK) == 0) {
         __asm__("nop");
      }
      dmac->DMA[channel].DSR = DMA_DSR_DONE_MASK;
   }
};

class DmaChannel0 : public DmaChannel {
private:
   static DmaChannel0 *thisPtr;
   void handler(void);
   friend void DMA0_IRQHandler(void);

public:
   DmaChannel0() : DmaChannel(DMA0, DMAMUX0, 0) {
      thisPtr = this;
   }
};
class DmaChannel1 : public DmaChannel {
private:
   static DmaChannel1 *thisPtr;
   void handler(void);
   friend void DMA1_IRQHandler(void);

public:
   DmaChannel1() : DmaChannel(DMA0, DMAMUX0, 1) {
      thisPtr = this;
   }
};
class DmaChannel2 : public DmaChannel {
private:
   static DmaChannel2 *thisPtr;
   void handler(void);
   friend void DMA2_IRQHandler(void);

public:
   DmaChannel2() : DmaChannel(DMA0, DMAMUX0, 2) {
      thisPtr = this;
   }
};
class DmaChannel3 : public DmaChannel {
private:
   static DmaChannel3 *thisPtr;
   void handler(void);
   friend void DMA3_IRQHandler(void);

public:
   DmaChannel3() : DmaChannel(DMA0, DMAMUX0, 3) {
      thisPtr = this;
   }
};
/**
 * @}
 */
} // End namespace USBDM

#endif /* INCLUDE_USBDM_DMA_H_ */
