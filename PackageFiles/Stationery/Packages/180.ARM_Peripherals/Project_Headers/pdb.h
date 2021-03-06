/*
 * pdb.h
 *
 *  Created on: 25/10/2013
 *      Author: podonoghue
 */

#ifndef PDB_H_
#define PDB_H_
 /*
 * *****************************
 * *** DO NOT EDIT THIS FILE ***
 * *****************************
 *
 * This file is generated automatically.
 * Any manual changes will be lost.
 */
#include "hardware.h"

namespace USBDM {

/**
 * @addtogroup PDB_Group PDB, Programmable Dely Block
 * @brief Pins used for Programmable Delay Block
 * @{
 */
/**
 * Type definition for PDB interrupt call back
 *
 *  @param timeSinceEpoch - Time since the epoch in seconds
 */
typedef void (*PDBCallbackFunction)();

template <class Info>
class PdbBase_T {

protected:
   static constexpr volatile PDB_Type *pdb      = Info::pdb;
   static constexpr volatile uint32_t *clockReg = Info::clockReg;

public:
   /**
    * Initialise PDB to default settings\n
    * Configures all PDB pins
    */
   static void enable() {
      *clockReg |= Info::clockMask;
      __DMB();

      Info::initPCRs();

      pdb->SC           = Info::pdb_sc;
      pdb->MOD          = Info::pdb_mod;
      pdb->IDLY         = Info::pdb_idly;
      pdb->CH[0].C1     = Info::pdb_ch0_c1;
      pdb->CH[0].DLY[0] = Info::pdb_ch0_dly0;
      pdb->CH[0].DLY[1] = Info::pdb_ch0_dly1;
      pdb->POEN         = Info::pdb_poen;
      pdb->PODLY[0]     = Info::pdb_po0_dly;
      pdb->PODLY[1]     = Info::pdb_po1_dly;

      enableNvicInterrupts();
   }

   /**
    * Enable/disable interrupts in NVIC
    *
    * @param enable True => enable, False => disable
    */
   static void enableNvicInterrupts(bool enable=true) {
      if (enable) {
         // Enable interrupts
         NVIC_EnableIRQ(Info::irqNums[0]);

         // Set priority level
         NVIC_SetPriority(Info::irqNums[0], Info::irqLevel);
      }
      else {
         // Disable interrupts
         NVIC_DisableIRQ(Info::irqNums[0]);
      }
   }

   /**
    * Enable/disable sequence error interrupts
    *
    * @param enable True => enable, False => disable
    */
   static void enableErrorInterrupts(bool enable=true) {
      if (enable) {
         pdb->SC |= PDB_SC_PDBEIE_MASK;
      }
      else {
         pdb->SC &= ~PDB_SC_PDBEIE_MASK;
      }
   }
   /**
    * Enable/disable sequence complete interrupts
    *
    * @param enable True => enable, False => disable
    */
   static void enableSequenceInterrupts(bool enable=true) {
      if (enable) {
         pdb->SC |= PDB_SC_PDBIE_MASK;
      }
      else {
         pdb->SC &= ~PDB_SC_PDBIE_MASK;
      }
   }
};

/**
 * Template class to provide PDB callback
 */
template<class Info>
class PdbIrq_T : public PdbBase_T<Info> {

protected:
   /** Callback function for ISR */
   static PDBCallbackFunction callback;

public:
   /**
    * IRQ handler
    */
   static void irqHandler(void) {
      //TODO fix this
      if (callback != 0) {
         callback();
      }
      else {
         setAndCheckErrorCode(E_NO_HANDLER);
      }
      PdbBase_T<Info>::pdb->SC  &= ~PDB_SC_PDBIF_MASK;
   }

   /**
    * Set Callback function
    *
    *   @param theCallback - Callback function to be executed on PDB interrupt
    */
   static void setCallback(PDBCallbackFunction theCallback) {
      callback = theCallback;
   }
};

template<class Info> PDBCallbackFunction PdbIrq_T<Info>::callback = 0;

#ifdef USBDM_PDB_IS_DEFINED
/**
 * Class representing PDB
 */
using Pdb = PdbIrq_T<PdbInfo>;

#endif

#ifdef USBDM_PDB0_IS_DEFINED
/**
 * Class representing PDB
 */
using Pdb0 = PdbIrq_T<Pdb0Info>;

#endif

/**
 * End LPTMR_Group
 * @}
 */
} // End namespace USBDM

#endif /* PDB_H_ */
