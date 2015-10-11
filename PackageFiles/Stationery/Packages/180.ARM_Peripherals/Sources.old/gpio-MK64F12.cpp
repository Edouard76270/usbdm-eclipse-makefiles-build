 /**
  * @file     gpio.cpp (from gpio-MK64F12.cpp)
  *
  * @brief   Pin declarations for MK64F12
  */

#include "utilities.h"
#include "gpio.h"
#include "pin_mapping.h"

/**
 * @brief Create Timer Clock register name from timer number
 *
 * @param number Timer number e.g. 1 => FTM1_CLOCK_REG
 */
#define FTM_CLOCK_REG(number)  CONCAT3_(FTM,number,_CLOCK_REG)

/**
 * @brief Create Timer Clock register mask from timer number
 *
 * @param number Timer number e.g. 1 => FTM1_CLOCK_MASK
 */
#define FTM_CLOCK_MASK(number)  CONCAT3_(FTM,number,_CLOCK_MASK)

/**
 * @brief Create ADC Clock register name from ADC number
 *
 * @param number Timer number e.g. 1 => ADC1_CLOCK_REG
 */
#define ADC_CLOCK_REG(number)  CONCAT3_(ADC,number,_CLOCK_REG)

/**
 * @brief Create ADC Clock register mask from ADC number
 *
 * @param number Timer number e.g. 1 => ADC1_CLOCK_MASK
 */
#define ADC_CLOCK_MASK(number)  CONCAT3_(ADC,number,_CLOCK_MASK)

#define ADC(num)             CONCAT2_(ADC,num)   
#define FTM(num)             CONCAT2_(FTM,num)   
#define TPM(num)             CONCAT2_(TPM,num)   

const DigitalIO digitalIO_PTA0     = {&PCR(PTA0_GPIO_NAME,PTA0_GPIO_BIT),GPIO(PTA0_GPIO_NAME),PORT_CLOCK_MASK(PTA0_GPIO_NAME),(1UL<<PTA0_GPIO_BIT)};
const DigitalIO digitalIO_PTA1     = {&PCR(PTA1_GPIO_NAME,PTA1_GPIO_BIT),GPIO(PTA1_GPIO_NAME),PORT_CLOCK_MASK(PTA1_GPIO_NAME),(1UL<<PTA1_GPIO_BIT)};
const DigitalIO digitalIO_PTA2     = {&PCR(PTA2_GPIO_NAME,PTA2_GPIO_BIT),GPIO(PTA2_GPIO_NAME),PORT_CLOCK_MASK(PTA2_GPIO_NAME),(1UL<<PTA2_GPIO_BIT)};
const DigitalIO digitalIO_PTA3     = {&PCR(PTA3_GPIO_NAME,PTA3_GPIO_BIT),GPIO(PTA3_GPIO_NAME),PORT_CLOCK_MASK(PTA3_GPIO_NAME),(1UL<<PTA3_GPIO_BIT)};
const DigitalIO digitalIO_PTA4     = {&PCR(PTA4_GPIO_NAME,PTA4_GPIO_BIT),GPIO(PTA4_GPIO_NAME),PORT_CLOCK_MASK(PTA4_GPIO_NAME),(1UL<<PTA4_GPIO_BIT)};
const DigitalIO digitalIO_PTA5     = {&PCR(PTA5_GPIO_NAME,PTA5_GPIO_BIT),GPIO(PTA5_GPIO_NAME),PORT_CLOCK_MASK(PTA5_GPIO_NAME),(1UL<<PTA5_GPIO_BIT)};
const DigitalIO digitalIO_PTA6     = {&PCR(PTA6_GPIO_NAME,PTA6_GPIO_BIT),GPIO(PTA6_GPIO_NAME),PORT_CLOCK_MASK(PTA6_GPIO_NAME),(1UL<<PTA6_GPIO_BIT)};
const DigitalIO digitalIO_PTA7     = {&PCR(PTA7_GPIO_NAME,PTA7_GPIO_BIT),GPIO(PTA7_GPIO_NAME),PORT_CLOCK_MASK(PTA7_GPIO_NAME),(1UL<<PTA7_GPIO_BIT)};
const DigitalIO digitalIO_PTA8     = {&PCR(PTA8_GPIO_NAME,PTA8_GPIO_BIT),GPIO(PTA8_GPIO_NAME),PORT_CLOCK_MASK(PTA8_GPIO_NAME),(1UL<<PTA8_GPIO_BIT)};
const DigitalIO digitalIO_PTA9     = {&PCR(PTA9_GPIO_NAME,PTA9_GPIO_BIT),GPIO(PTA9_GPIO_NAME),PORT_CLOCK_MASK(PTA9_GPIO_NAME),(1UL<<PTA9_GPIO_BIT)};
const DigitalIO digitalIO_PTA10    = {&PCR(PTA10_GPIO_NAME,PTA10_GPIO_BIT),GPIO(PTA10_GPIO_NAME),PORT_CLOCK_MASK(PTA10_GPIO_NAME),(1UL<<PTA10_GPIO_BIT)};
const DigitalIO digitalIO_PTA11    = {&PCR(PTA11_GPIO_NAME,PTA11_GPIO_BIT),GPIO(PTA11_GPIO_NAME),PORT_CLOCK_MASK(PTA11_GPIO_NAME),(1UL<<PTA11_GPIO_BIT)};
const DigitalIO digitalIO_PTA12    = {&PCR(PTA12_GPIO_NAME,PTA12_GPIO_BIT),GPIO(PTA12_GPIO_NAME),PORT_CLOCK_MASK(PTA12_GPIO_NAME),(1UL<<PTA12_GPIO_BIT)};
const DigitalIO digitalIO_PTA13    = {&PCR(PTA13_GPIO_NAME,PTA13_GPIO_BIT),GPIO(PTA13_GPIO_NAME),PORT_CLOCK_MASK(PTA13_GPIO_NAME),(1UL<<PTA13_GPIO_BIT)};
const DigitalIO digitalIO_PTA14    = {&PCR(PTA14_GPIO_NAME,PTA14_GPIO_BIT),GPIO(PTA14_GPIO_NAME),PORT_CLOCK_MASK(PTA14_GPIO_NAME),(1UL<<PTA14_GPIO_BIT)};
const DigitalIO digitalIO_PTA15    = {&PCR(PTA15_GPIO_NAME,PTA15_GPIO_BIT),GPIO(PTA15_GPIO_NAME),PORT_CLOCK_MASK(PTA15_GPIO_NAME),(1UL<<PTA15_GPIO_BIT)};
const DigitalIO digitalIO_PTA16    = {&PCR(PTA16_GPIO_NAME,PTA16_GPIO_BIT),GPIO(PTA16_GPIO_NAME),PORT_CLOCK_MASK(PTA16_GPIO_NAME),(1UL<<PTA16_GPIO_BIT)};
const DigitalIO digitalIO_PTA17    = {&PCR(PTA17_GPIO_NAME,PTA17_GPIO_BIT),GPIO(PTA17_GPIO_NAME),PORT_CLOCK_MASK(PTA17_GPIO_NAME),(1UL<<PTA17_GPIO_BIT)};
const DigitalIO digitalIO_PTA18    = {&PCR(PTA18_GPIO_NAME,PTA18_GPIO_BIT),GPIO(PTA18_GPIO_NAME),PORT_CLOCK_MASK(PTA18_GPIO_NAME),(1UL<<PTA18_GPIO_BIT)};
const DigitalIO digitalIO_PTA19    = {&PCR(PTA19_GPIO_NAME,PTA19_GPIO_BIT),GPIO(PTA19_GPIO_NAME),PORT_CLOCK_MASK(PTA19_GPIO_NAME),(1UL<<PTA19_GPIO_BIT)};
const DigitalIO digitalIO_PTA24    = {&PCR(PTA24_GPIO_NAME,PTA24_GPIO_BIT),GPIO(PTA24_GPIO_NAME),PORT_CLOCK_MASK(PTA24_GPIO_NAME),(1UL<<PTA24_GPIO_BIT)};
const DigitalIO digitalIO_PTA25    = {&PCR(PTA25_GPIO_NAME,PTA25_GPIO_BIT),GPIO(PTA25_GPIO_NAME),PORT_CLOCK_MASK(PTA25_GPIO_NAME),(1UL<<PTA25_GPIO_BIT)};
const DigitalIO digitalIO_PTA26    = {&PCR(PTA26_GPIO_NAME,PTA26_GPIO_BIT),GPIO(PTA26_GPIO_NAME),PORT_CLOCK_MASK(PTA26_GPIO_NAME),(1UL<<PTA26_GPIO_BIT)};
const DigitalIO digitalIO_PTA27    = {&PCR(PTA27_GPIO_NAME,PTA27_GPIO_BIT),GPIO(PTA27_GPIO_NAME),PORT_CLOCK_MASK(PTA27_GPIO_NAME),(1UL<<PTA27_GPIO_BIT)};
const DigitalIO digitalIO_PTA28    = {&PCR(PTA28_GPIO_NAME,PTA28_GPIO_BIT),GPIO(PTA28_GPIO_NAME),PORT_CLOCK_MASK(PTA28_GPIO_NAME),(1UL<<PTA28_GPIO_BIT)};
const DigitalIO digitalIO_PTA29    = {&PCR(PTA29_GPIO_NAME,PTA29_GPIO_BIT),GPIO(PTA29_GPIO_NAME),PORT_CLOCK_MASK(PTA29_GPIO_NAME),(1UL<<PTA29_GPIO_BIT)};
const DigitalIO digitalIO_PTB0     = {&PCR(PTB0_GPIO_NAME,PTB0_GPIO_BIT),GPIO(PTB0_GPIO_NAME),PORT_CLOCK_MASK(PTB0_GPIO_NAME),(1UL<<PTB0_GPIO_BIT)};
const DigitalIO digitalIO_PTB1     = {&PCR(PTB1_GPIO_NAME,PTB1_GPIO_BIT),GPIO(PTB1_GPIO_NAME),PORT_CLOCK_MASK(PTB1_GPIO_NAME),(1UL<<PTB1_GPIO_BIT)};
const DigitalIO digitalIO_PTB2     = {&PCR(PTB2_GPIO_NAME,PTB2_GPIO_BIT),GPIO(PTB2_GPIO_NAME),PORT_CLOCK_MASK(PTB2_GPIO_NAME),(1UL<<PTB2_GPIO_BIT)};
const DigitalIO digitalIO_PTB3     = {&PCR(PTB3_GPIO_NAME,PTB3_GPIO_BIT),GPIO(PTB3_GPIO_NAME),PORT_CLOCK_MASK(PTB3_GPIO_NAME),(1UL<<PTB3_GPIO_BIT)};
const DigitalIO digitalIO_PTB4     = {&PCR(PTB4_GPIO_NAME,PTB4_GPIO_BIT),GPIO(PTB4_GPIO_NAME),PORT_CLOCK_MASK(PTB4_GPIO_NAME),(1UL<<PTB4_GPIO_BIT)};
const DigitalIO digitalIO_PTB5     = {&PCR(PTB5_GPIO_NAME,PTB5_GPIO_BIT),GPIO(PTB5_GPIO_NAME),PORT_CLOCK_MASK(PTB5_GPIO_NAME),(1UL<<PTB5_GPIO_BIT)};
const DigitalIO digitalIO_PTB6     = {&PCR(PTB6_GPIO_NAME,PTB6_GPIO_BIT),GPIO(PTB6_GPIO_NAME),PORT_CLOCK_MASK(PTB6_GPIO_NAME),(1UL<<PTB6_GPIO_BIT)};
const DigitalIO digitalIO_PTB7     = {&PCR(PTB7_GPIO_NAME,PTB7_GPIO_BIT),GPIO(PTB7_GPIO_NAME),PORT_CLOCK_MASK(PTB7_GPIO_NAME),(1UL<<PTB7_GPIO_BIT)};
const DigitalIO digitalIO_PTB8     = {&PCR(PTB8_GPIO_NAME,PTB8_GPIO_BIT),GPIO(PTB8_GPIO_NAME),PORT_CLOCK_MASK(PTB8_GPIO_NAME),(1UL<<PTB8_GPIO_BIT)};
const DigitalIO digitalIO_PTB9     = {&PCR(PTB9_GPIO_NAME,PTB9_GPIO_BIT),GPIO(PTB9_GPIO_NAME),PORT_CLOCK_MASK(PTB9_GPIO_NAME),(1UL<<PTB9_GPIO_BIT)};
const DigitalIO digitalIO_PTB10    = {&PCR(PTB10_GPIO_NAME,PTB10_GPIO_BIT),GPIO(PTB10_GPIO_NAME),PORT_CLOCK_MASK(PTB10_GPIO_NAME),(1UL<<PTB10_GPIO_BIT)};
const DigitalIO digitalIO_PTB11    = {&PCR(PTB11_GPIO_NAME,PTB11_GPIO_BIT),GPIO(PTB11_GPIO_NAME),PORT_CLOCK_MASK(PTB11_GPIO_NAME),(1UL<<PTB11_GPIO_BIT)};
const DigitalIO digitalIO_PTB12    = {&PCR(PTB12_GPIO_NAME,PTB12_GPIO_BIT),GPIO(PTB12_GPIO_NAME),PORT_CLOCK_MASK(PTB12_GPIO_NAME),(1UL<<PTB12_GPIO_BIT)};
const DigitalIO digitalIO_PTB13    = {&PCR(PTB13_GPIO_NAME,PTB13_GPIO_BIT),GPIO(PTB13_GPIO_NAME),PORT_CLOCK_MASK(PTB13_GPIO_NAME),(1UL<<PTB13_GPIO_BIT)};
const DigitalIO digitalIO_PTB16    = {&PCR(PTB16_GPIO_NAME,PTB16_GPIO_BIT),GPIO(PTB16_GPIO_NAME),PORT_CLOCK_MASK(PTB16_GPIO_NAME),(1UL<<PTB16_GPIO_BIT)};
const DigitalIO digitalIO_PTB17    = {&PCR(PTB17_GPIO_NAME,PTB17_GPIO_BIT),GPIO(PTB17_GPIO_NAME),PORT_CLOCK_MASK(PTB17_GPIO_NAME),(1UL<<PTB17_GPIO_BIT)};
const DigitalIO digitalIO_PTB18    = {&PCR(PTB18_GPIO_NAME,PTB18_GPIO_BIT),GPIO(PTB18_GPIO_NAME),PORT_CLOCK_MASK(PTB18_GPIO_NAME),(1UL<<PTB18_GPIO_BIT)};
const DigitalIO digitalIO_PTB19    = {&PCR(PTB19_GPIO_NAME,PTB19_GPIO_BIT),GPIO(PTB19_GPIO_NAME),PORT_CLOCK_MASK(PTB19_GPIO_NAME),(1UL<<PTB19_GPIO_BIT)};
const DigitalIO digitalIO_PTB20    = {&PCR(PTB20_GPIO_NAME,PTB20_GPIO_BIT),GPIO(PTB20_GPIO_NAME),PORT_CLOCK_MASK(PTB20_GPIO_NAME),(1UL<<PTB20_GPIO_BIT)};
const DigitalIO digitalIO_PTB21    = {&PCR(PTB21_GPIO_NAME,PTB21_GPIO_BIT),GPIO(PTB21_GPIO_NAME),PORT_CLOCK_MASK(PTB21_GPIO_NAME),(1UL<<PTB21_GPIO_BIT)};
const DigitalIO digitalIO_PTB22    = {&PCR(PTB22_GPIO_NAME,PTB22_GPIO_BIT),GPIO(PTB22_GPIO_NAME),PORT_CLOCK_MASK(PTB22_GPIO_NAME),(1UL<<PTB22_GPIO_BIT)};
const DigitalIO digitalIO_PTB23    = {&PCR(PTB23_GPIO_NAME,PTB23_GPIO_BIT),GPIO(PTB23_GPIO_NAME),PORT_CLOCK_MASK(PTB23_GPIO_NAME),(1UL<<PTB23_GPIO_BIT)};
const DigitalIO digitalIO_PTC0     = {&PCR(PTC0_GPIO_NAME,PTC0_GPIO_BIT),GPIO(PTC0_GPIO_NAME),PORT_CLOCK_MASK(PTC0_GPIO_NAME),(1UL<<PTC0_GPIO_BIT)};
const DigitalIO digitalIO_PTC1     = {&PCR(PTC1_GPIO_NAME,PTC1_GPIO_BIT),GPIO(PTC1_GPIO_NAME),PORT_CLOCK_MASK(PTC1_GPIO_NAME),(1UL<<PTC1_GPIO_BIT)};
const DigitalIO digitalIO_PTC2     = {&PCR(PTC2_GPIO_NAME,PTC2_GPIO_BIT),GPIO(PTC2_GPIO_NAME),PORT_CLOCK_MASK(PTC2_GPIO_NAME),(1UL<<PTC2_GPIO_BIT)};
const DigitalIO digitalIO_PTC3     = {&PCR(PTC3_GPIO_NAME,PTC3_GPIO_BIT),GPIO(PTC3_GPIO_NAME),PORT_CLOCK_MASK(PTC3_GPIO_NAME),(1UL<<PTC3_GPIO_BIT)};
const DigitalIO digitalIO_PTC4     = {&PCR(PTC4_GPIO_NAME,PTC4_GPIO_BIT),GPIO(PTC4_GPIO_NAME),PORT_CLOCK_MASK(PTC4_GPIO_NAME),(1UL<<PTC4_GPIO_BIT)};
const DigitalIO digitalIO_PTC5     = {&PCR(PTC5_GPIO_NAME,PTC5_GPIO_BIT),GPIO(PTC5_GPIO_NAME),PORT_CLOCK_MASK(PTC5_GPIO_NAME),(1UL<<PTC5_GPIO_BIT)};
const DigitalIO digitalIO_PTC6     = {&PCR(PTC6_GPIO_NAME,PTC6_GPIO_BIT),GPIO(PTC6_GPIO_NAME),PORT_CLOCK_MASK(PTC6_GPIO_NAME),(1UL<<PTC6_GPIO_BIT)};
const DigitalIO digitalIO_PTC7     = {&PCR(PTC7_GPIO_NAME,PTC7_GPIO_BIT),GPIO(PTC7_GPIO_NAME),PORT_CLOCK_MASK(PTC7_GPIO_NAME),(1UL<<PTC7_GPIO_BIT)};
const DigitalIO digitalIO_PTC8     = {&PCR(PTC8_GPIO_NAME,PTC8_GPIO_BIT),GPIO(PTC8_GPIO_NAME),PORT_CLOCK_MASK(PTC8_GPIO_NAME),(1UL<<PTC8_GPIO_BIT)};
const DigitalIO digitalIO_PTC9     = {&PCR(PTC9_GPIO_NAME,PTC9_GPIO_BIT),GPIO(PTC9_GPIO_NAME),PORT_CLOCK_MASK(PTC9_GPIO_NAME),(1UL<<PTC9_GPIO_BIT)};
const DigitalIO digitalIO_PTC10    = {&PCR(PTC10_GPIO_NAME,PTC10_GPIO_BIT),GPIO(PTC10_GPIO_NAME),PORT_CLOCK_MASK(PTC10_GPIO_NAME),(1UL<<PTC10_GPIO_BIT)};
const DigitalIO digitalIO_PTC11    = {&PCR(PTC11_GPIO_NAME,PTC11_GPIO_BIT),GPIO(PTC11_GPIO_NAME),PORT_CLOCK_MASK(PTC11_GPIO_NAME),(1UL<<PTC11_GPIO_BIT)};
const DigitalIO digitalIO_PTC12    = {&PCR(PTC12_GPIO_NAME,PTC12_GPIO_BIT),GPIO(PTC12_GPIO_NAME),PORT_CLOCK_MASK(PTC12_GPIO_NAME),(1UL<<PTC12_GPIO_BIT)};
const DigitalIO digitalIO_PTC13    = {&PCR(PTC13_GPIO_NAME,PTC13_GPIO_BIT),GPIO(PTC13_GPIO_NAME),PORT_CLOCK_MASK(PTC13_GPIO_NAME),(1UL<<PTC13_GPIO_BIT)};
const DigitalIO digitalIO_PTC14    = {&PCR(PTC14_GPIO_NAME,PTC14_GPIO_BIT),GPIO(PTC14_GPIO_NAME),PORT_CLOCK_MASK(PTC14_GPIO_NAME),(1UL<<PTC14_GPIO_BIT)};
const DigitalIO digitalIO_PTC15    = {&PCR(PTC15_GPIO_NAME,PTC15_GPIO_BIT),GPIO(PTC15_GPIO_NAME),PORT_CLOCK_MASK(PTC15_GPIO_NAME),(1UL<<PTC15_GPIO_BIT)};
const DigitalIO digitalIO_PTC16    = {&PCR(PTC16_GPIO_NAME,PTC16_GPIO_BIT),GPIO(PTC16_GPIO_NAME),PORT_CLOCK_MASK(PTC16_GPIO_NAME),(1UL<<PTC16_GPIO_BIT)};
const DigitalIO digitalIO_PTC17    = {&PCR(PTC17_GPIO_NAME,PTC17_GPIO_BIT),GPIO(PTC17_GPIO_NAME),PORT_CLOCK_MASK(PTC17_GPIO_NAME),(1UL<<PTC17_GPIO_BIT)};
const DigitalIO digitalIO_PTC18    = {&PCR(PTC18_GPIO_NAME,PTC18_GPIO_BIT),GPIO(PTC18_GPIO_NAME),PORT_CLOCK_MASK(PTC18_GPIO_NAME),(1UL<<PTC18_GPIO_BIT)};
const DigitalIO digitalIO_PTC19    = {&PCR(PTC19_GPIO_NAME,PTC19_GPIO_BIT),GPIO(PTC19_GPIO_NAME),PORT_CLOCK_MASK(PTC19_GPIO_NAME),(1UL<<PTC19_GPIO_BIT)};
const DigitalIO digitalIO_PTD0     = {&PCR(PTD0_GPIO_NAME,PTD0_GPIO_BIT),GPIO(PTD0_GPIO_NAME),PORT_CLOCK_MASK(PTD0_GPIO_NAME),(1UL<<PTD0_GPIO_BIT)};
const DigitalIO digitalIO_PTD1     = {&PCR(PTD1_GPIO_NAME,PTD1_GPIO_BIT),GPIO(PTD1_GPIO_NAME),PORT_CLOCK_MASK(PTD1_GPIO_NAME),(1UL<<PTD1_GPIO_BIT)};
const DigitalIO digitalIO_PTD2     = {&PCR(PTD2_GPIO_NAME,PTD2_GPIO_BIT),GPIO(PTD2_GPIO_NAME),PORT_CLOCK_MASK(PTD2_GPIO_NAME),(1UL<<PTD2_GPIO_BIT)};
const DigitalIO digitalIO_PTD3     = {&PCR(PTD3_GPIO_NAME,PTD3_GPIO_BIT),GPIO(PTD3_GPIO_NAME),PORT_CLOCK_MASK(PTD3_GPIO_NAME),(1UL<<PTD3_GPIO_BIT)};
const DigitalIO digitalIO_PTD4     = {&PCR(PTD4_GPIO_NAME,PTD4_GPIO_BIT),GPIO(PTD4_GPIO_NAME),PORT_CLOCK_MASK(PTD4_GPIO_NAME),(1UL<<PTD4_GPIO_BIT)};
const DigitalIO digitalIO_PTD5     = {&PCR(PTD5_GPIO_NAME,PTD5_GPIO_BIT),GPIO(PTD5_GPIO_NAME),PORT_CLOCK_MASK(PTD5_GPIO_NAME),(1UL<<PTD5_GPIO_BIT)};
const DigitalIO digitalIO_PTD6     = {&PCR(PTD6_GPIO_NAME,PTD6_GPIO_BIT),GPIO(PTD6_GPIO_NAME),PORT_CLOCK_MASK(PTD6_GPIO_NAME),(1UL<<PTD6_GPIO_BIT)};
const DigitalIO digitalIO_PTD7     = {&PCR(PTD7_GPIO_NAME,PTD7_GPIO_BIT),GPIO(PTD7_GPIO_NAME),PORT_CLOCK_MASK(PTD7_GPIO_NAME),(1UL<<PTD7_GPIO_BIT)};
const DigitalIO digitalIO_PTD8     = {&PCR(PTD8_GPIO_NAME,PTD8_GPIO_BIT),GPIO(PTD8_GPIO_NAME),PORT_CLOCK_MASK(PTD8_GPIO_NAME),(1UL<<PTD8_GPIO_BIT)};
const DigitalIO digitalIO_PTD9     = {&PCR(PTD9_GPIO_NAME,PTD9_GPIO_BIT),GPIO(PTD9_GPIO_NAME),PORT_CLOCK_MASK(PTD9_GPIO_NAME),(1UL<<PTD9_GPIO_BIT)};
const DigitalIO digitalIO_PTD10    = {&PCR(PTD10_GPIO_NAME,PTD10_GPIO_BIT),GPIO(PTD10_GPIO_NAME),PORT_CLOCK_MASK(PTD10_GPIO_NAME),(1UL<<PTD10_GPIO_BIT)};
const DigitalIO digitalIO_PTD11    = {&PCR(PTD11_GPIO_NAME,PTD11_GPIO_BIT),GPIO(PTD11_GPIO_NAME),PORT_CLOCK_MASK(PTD11_GPIO_NAME),(1UL<<PTD11_GPIO_BIT)};
const DigitalIO digitalIO_PTD12    = {&PCR(PTD12_GPIO_NAME,PTD12_GPIO_BIT),GPIO(PTD12_GPIO_NAME),PORT_CLOCK_MASK(PTD12_GPIO_NAME),(1UL<<PTD12_GPIO_BIT)};
const DigitalIO digitalIO_PTD13    = {&PCR(PTD13_GPIO_NAME,PTD13_GPIO_BIT),GPIO(PTD13_GPIO_NAME),PORT_CLOCK_MASK(PTD13_GPIO_NAME),(1UL<<PTD13_GPIO_BIT)};
const DigitalIO digitalIO_PTD14    = {&PCR(PTD14_GPIO_NAME,PTD14_GPIO_BIT),GPIO(PTD14_GPIO_NAME),PORT_CLOCK_MASK(PTD14_GPIO_NAME),(1UL<<PTD14_GPIO_BIT)};
const DigitalIO digitalIO_PTD15    = {&PCR(PTD15_GPIO_NAME,PTD15_GPIO_BIT),GPIO(PTD15_GPIO_NAME),PORT_CLOCK_MASK(PTD15_GPIO_NAME),(1UL<<PTD15_GPIO_BIT)};
const DigitalIO digitalIO_PTE0     = {&PCR(PTE0_GPIO_NAME,PTE0_GPIO_BIT),GPIO(PTE0_GPIO_NAME),PORT_CLOCK_MASK(PTE0_GPIO_NAME),(1UL<<PTE0_GPIO_BIT)};
const DigitalIO digitalIO_PTE1     = {&PCR(PTE1_GPIO_NAME,PTE1_GPIO_BIT),GPIO(PTE1_GPIO_NAME),PORT_CLOCK_MASK(PTE1_GPIO_NAME),(1UL<<PTE1_GPIO_BIT)};
const DigitalIO digitalIO_PTE2     = {&PCR(PTE2_GPIO_NAME,PTE2_GPIO_BIT),GPIO(PTE2_GPIO_NAME),PORT_CLOCK_MASK(PTE2_GPIO_NAME),(1UL<<PTE2_GPIO_BIT)};
const DigitalIO digitalIO_PTE3     = {&PCR(PTE3_GPIO_NAME,PTE3_GPIO_BIT),GPIO(PTE3_GPIO_NAME),PORT_CLOCK_MASK(PTE3_GPIO_NAME),(1UL<<PTE3_GPIO_BIT)};
const DigitalIO digitalIO_PTE4     = {&PCR(PTE4_GPIO_NAME,PTE4_GPIO_BIT),GPIO(PTE4_GPIO_NAME),PORT_CLOCK_MASK(PTE4_GPIO_NAME),(1UL<<PTE4_GPIO_BIT)};
const DigitalIO digitalIO_PTE5     = {&PCR(PTE5_GPIO_NAME,PTE5_GPIO_BIT),GPIO(PTE5_GPIO_NAME),PORT_CLOCK_MASK(PTE5_GPIO_NAME),(1UL<<PTE5_GPIO_BIT)};
const DigitalIO digitalIO_PTE6     = {&PCR(PTE6_GPIO_NAME,PTE6_GPIO_BIT),GPIO(PTE6_GPIO_NAME),PORT_CLOCK_MASK(PTE6_GPIO_NAME),(1UL<<PTE6_GPIO_BIT)};
const DigitalIO digitalIO_PTE7     = {&PCR(PTE7_GPIO_NAME,PTE7_GPIO_BIT),GPIO(PTE7_GPIO_NAME),PORT_CLOCK_MASK(PTE7_GPIO_NAME),(1UL<<PTE7_GPIO_BIT)};
const DigitalIO digitalIO_PTE8     = {&PCR(PTE8_GPIO_NAME,PTE8_GPIO_BIT),GPIO(PTE8_GPIO_NAME),PORT_CLOCK_MASK(PTE8_GPIO_NAME),(1UL<<PTE8_GPIO_BIT)};
const DigitalIO digitalIO_PTE9     = {&PCR(PTE9_GPIO_NAME,PTE9_GPIO_BIT),GPIO(PTE9_GPIO_NAME),PORT_CLOCK_MASK(PTE9_GPIO_NAME),(1UL<<PTE9_GPIO_BIT)};
const DigitalIO digitalIO_PTE10    = {&PCR(PTE10_GPIO_NAME,PTE10_GPIO_BIT),GPIO(PTE10_GPIO_NAME),PORT_CLOCK_MASK(PTE10_GPIO_NAME),(1UL<<PTE10_GPIO_BIT)};
const DigitalIO digitalIO_PTE11    = {&PCR(PTE11_GPIO_NAME,PTE11_GPIO_BIT),GPIO(PTE11_GPIO_NAME),PORT_CLOCK_MASK(PTE11_GPIO_NAME),(1UL<<PTE11_GPIO_BIT)};
const DigitalIO digitalIO_PTE12    = {&PCR(PTE12_GPIO_NAME,PTE12_GPIO_BIT),GPIO(PTE12_GPIO_NAME),PORT_CLOCK_MASK(PTE12_GPIO_NAME),(1UL<<PTE12_GPIO_BIT)};
const DigitalIO digitalIO_PTE24    = {&PCR(PTE24_GPIO_NAME,PTE24_GPIO_BIT),GPIO(PTE24_GPIO_NAME),PORT_CLOCK_MASK(PTE24_GPIO_NAME),(1UL<<PTE24_GPIO_BIT)};
const DigitalIO digitalIO_PTE25    = {&PCR(PTE25_GPIO_NAME,PTE25_GPIO_BIT),GPIO(PTE25_GPIO_NAME),PORT_CLOCK_MASK(PTE25_GPIO_NAME),(1UL<<PTE25_GPIO_BIT)};
const DigitalIO digitalIO_PTE26    = {&PCR(PTE26_GPIO_NAME,PTE26_GPIO_BIT),GPIO(PTE26_GPIO_NAME),PORT_CLOCK_MASK(PTE26_GPIO_NAME),(1UL<<PTE26_GPIO_BIT)};
const DigitalIO digitalIO_PTE27    = {&PCR(PTE27_GPIO_NAME,PTE27_GPIO_BIT),GPIO(PTE27_GPIO_NAME),PORT_CLOCK_MASK(PTE27_GPIO_NAME),(1UL<<PTE27_GPIO_BIT)};
const DigitalIO digitalIO_PTE28    = {&PCR(PTE28_GPIO_NAME,PTE28_GPIO_BIT),GPIO(PTE28_GPIO_NAME),PORT_CLOCK_MASK(PTE28_GPIO_NAME),(1UL<<PTE28_GPIO_BIT)};
const AnalogueIO analogueIO_ADC0_SE16   = {0,                ADC(ADC0_SE16_ADC_NUM),&ADC_CLOCK_REG(ADC0_SE16_ADC_NUM),ADC_CLOCK_MASK(ADC0_SE16_ADC_NUM),ADC0_SE16_ADC_CH};
const AnalogueIO analogueIO_ADC0_SE23   = {0,                ADC(ADC0_SE23_ADC_NUM),&ADC_CLOCK_REG(ADC0_SE23_ADC_NUM),ADC_CLOCK_MASK(ADC0_SE23_ADC_NUM),ADC0_SE23_ADC_CH};
const AnalogueIO analogueIO_ADC1_SE16   = {0,                ADC(ADC1_SE16_ADC_NUM),&ADC_CLOCK_REG(ADC1_SE16_ADC_NUM),ADC_CLOCK_MASK(ADC1_SE16_ADC_NUM),ADC1_SE16_ADC_CH};
const AnalogueIO analogueIO_ADC1_SE18   = {0,                ADC(ADC1_SE18_ADC_NUM),&ADC_CLOCK_REG(ADC1_SE18_ADC_NUM),ADC_CLOCK_MASK(ADC1_SE18_ADC_NUM),ADC1_SE18_ADC_CH};
const AnalogueIO analogueIO_ADC1_SE23   = {0,                ADC(ADC1_SE23_ADC_NUM),&ADC_CLOCK_REG(ADC1_SE23_ADC_NUM),ADC_CLOCK_MASK(ADC1_SE23_ADC_NUM),ADC1_SE23_ADC_CH};
const AnalogueIO analogueIO_PTA7        = {&digitalIO_PTA7,  ADC(PTA7_ADC_NUM),  &ADC_CLOCK_REG(PTA7_ADC_NUM),  ADC_CLOCK_MASK(PTA7_ADC_NUM),  PTA7_ADC_CH};
const AnalogueIO analogueIO_PTA8        = {&digitalIO_PTA8,  ADC(PTA8_ADC_NUM),  &ADC_CLOCK_REG(PTA8_ADC_NUM),  ADC_CLOCK_MASK(PTA8_ADC_NUM),  PTA8_ADC_CH};
const AnalogueIO analogueIO_PTA17       = {&digitalIO_PTA17, ADC(PTA17_ADC_NUM), &ADC_CLOCK_REG(PTA17_ADC_NUM), ADC_CLOCK_MASK(PTA17_ADC_NUM), PTA17_ADC_CH};
const AnalogueIO analogueIO_PTB0        = {&digitalIO_PTB0,  ADC(PTB0_ADC_NUM),  &ADC_CLOCK_REG(PTB0_ADC_NUM),  ADC_CLOCK_MASK(PTB0_ADC_NUM),  PTB0_ADC_CH};
const AnalogueIO analogueIO_PTB1        = {&digitalIO_PTB1,  ADC(PTB1_ADC_NUM),  &ADC_CLOCK_REG(PTB1_ADC_NUM),  ADC_CLOCK_MASK(PTB1_ADC_NUM),  PTB1_ADC_CH};
const AnalogueIO analogueIO_PTB2        = {&digitalIO_PTB2,  ADC(PTB2_ADC_NUM),  &ADC_CLOCK_REG(PTB2_ADC_NUM),  ADC_CLOCK_MASK(PTB2_ADC_NUM),  PTB2_ADC_CH};
const AnalogueIO analogueIO_PTB3        = {&digitalIO_PTB3,  ADC(PTB3_ADC_NUM),  &ADC_CLOCK_REG(PTB3_ADC_NUM),  ADC_CLOCK_MASK(PTB3_ADC_NUM),  PTB3_ADC_CH};
const AnalogueIO analogueIO_PTB4        = {&digitalIO_PTB4,  ADC(PTB4_ADC_NUM),  &ADC_CLOCK_REG(PTB4_ADC_NUM),  ADC_CLOCK_MASK(PTB4_ADC_NUM),  PTB4_ADC_CH};
const AnalogueIO analogueIO_PTB5        = {&digitalIO_PTB5,  ADC(PTB5_ADC_NUM),  &ADC_CLOCK_REG(PTB5_ADC_NUM),  ADC_CLOCK_MASK(PTB5_ADC_NUM),  PTB5_ADC_CH};
const AnalogueIO analogueIO_PTB6        = {&digitalIO_PTB6,  ADC(PTB6_ADC_NUM),  &ADC_CLOCK_REG(PTB6_ADC_NUM),  ADC_CLOCK_MASK(PTB6_ADC_NUM),  PTB6_ADC_CH};
const AnalogueIO analogueIO_PTB7        = {&digitalIO_PTB7,  ADC(PTB7_ADC_NUM),  &ADC_CLOCK_REG(PTB7_ADC_NUM),  ADC_CLOCK_MASK(PTB7_ADC_NUM),  PTB7_ADC_CH};
const AnalogueIO analogueIO_PTB10       = {&digitalIO_PTB10, ADC(PTB10_ADC_NUM), &ADC_CLOCK_REG(PTB10_ADC_NUM), ADC_CLOCK_MASK(PTB10_ADC_NUM), PTB10_ADC_CH};
const AnalogueIO analogueIO_PTB11       = {&digitalIO_PTB11, ADC(PTB11_ADC_NUM), &ADC_CLOCK_REG(PTB11_ADC_NUM), ADC_CLOCK_MASK(PTB11_ADC_NUM), PTB11_ADC_CH};
const AnalogueIO analogueIO_PTC0        = {&digitalIO_PTC0,  ADC(PTC0_ADC_NUM),  &ADC_CLOCK_REG(PTC0_ADC_NUM),  ADC_CLOCK_MASK(PTC0_ADC_NUM),  PTC0_ADC_CH};
const AnalogueIO analogueIO_PTC1        = {&digitalIO_PTC1,  ADC(PTC1_ADC_NUM),  &ADC_CLOCK_REG(PTC1_ADC_NUM),  ADC_CLOCK_MASK(PTC1_ADC_NUM),  PTC1_ADC_CH};
const AnalogueIO analogueIO_PTC2        = {&digitalIO_PTC2,  ADC(PTC2_ADC_NUM),  &ADC_CLOCK_REG(PTC2_ADC_NUM),  ADC_CLOCK_MASK(PTC2_ADC_NUM),  PTC2_ADC_CH};
const AnalogueIO analogueIO_PTC8        = {&digitalIO_PTC8,  ADC(PTC8_ADC_NUM),  &ADC_CLOCK_REG(PTC8_ADC_NUM),  ADC_CLOCK_MASK(PTC8_ADC_NUM),  PTC8_ADC_CH};
const AnalogueIO analogueIO_PTC9        = {&digitalIO_PTC9,  ADC(PTC9_ADC_NUM),  &ADC_CLOCK_REG(PTC9_ADC_NUM),  ADC_CLOCK_MASK(PTC9_ADC_NUM),  PTC9_ADC_CH};
const AnalogueIO analogueIO_PTC10       = {&digitalIO_PTC10, ADC(PTC10_ADC_NUM), &ADC_CLOCK_REG(PTC10_ADC_NUM), ADC_CLOCK_MASK(PTC10_ADC_NUM), PTC10_ADC_CH};
const AnalogueIO analogueIO_PTC11       = {&digitalIO_PTC11, ADC(PTC11_ADC_NUM), &ADC_CLOCK_REG(PTC11_ADC_NUM), ADC_CLOCK_MASK(PTC11_ADC_NUM), PTC11_ADC_CH};
const AnalogueIO analogueIO_PTD1        = {&digitalIO_PTD1,  ADC(PTD1_ADC_NUM),  &ADC_CLOCK_REG(PTD1_ADC_NUM),  ADC_CLOCK_MASK(PTD1_ADC_NUM),  PTD1_ADC_CH};
const AnalogueIO analogueIO_PTD5        = {&digitalIO_PTD5,  ADC(PTD5_ADC_NUM),  &ADC_CLOCK_REG(PTD5_ADC_NUM),  ADC_CLOCK_MASK(PTD5_ADC_NUM),  PTD5_ADC_CH};
const AnalogueIO analogueIO_PTD6        = {&digitalIO_PTD6,  ADC(PTD6_ADC_NUM),  &ADC_CLOCK_REG(PTD6_ADC_NUM),  ADC_CLOCK_MASK(PTD6_ADC_NUM),  PTD6_ADC_CH};
const AnalogueIO analogueIO_PTE24       = {&digitalIO_PTE24, ADC(PTE24_ADC_NUM), &ADC_CLOCK_REG(PTE24_ADC_NUM), ADC_CLOCK_MASK(PTE24_ADC_NUM), PTE24_ADC_CH};
const AnalogueIO analogueIO_PTE25       = {&digitalIO_PTE25, ADC(PTE25_ADC_NUM), &ADC_CLOCK_REG(PTE25_ADC_NUM), ADC_CLOCK_MASK(PTE25_ADC_NUM), PTE25_ADC_CH};
#if FTM0_5_SEL == 1
const PwmIO  pwmIO_PTA0      = {&digitalIO_PTA0,   (volatile FTM_Type*)FTM(PTA0_FTM_NUM),  PTA0_FTM_CH,   PORT_PCR_MUX(PTA0_FTM_FN),  &FTM_CLOCK_REG(PTA0_FTM_NUM),  FTM_CLOCK_MASK(PTA0_FTM_NUM)};
#endif
#if FTM0_6_SEL == 1
const PwmIO  pwmIO_PTA1      = {&digitalIO_PTA1,   (volatile FTM_Type*)FTM(PTA1_FTM_NUM),  PTA1_FTM_CH,   PORT_PCR_MUX(PTA1_FTM_FN),  &FTM_CLOCK_REG(PTA1_FTM_NUM),  FTM_CLOCK_MASK(PTA1_FTM_NUM)};
#endif
#if FTM0_7_SEL == 1
const PwmIO  pwmIO_PTA2      = {&digitalIO_PTA2,   (volatile FTM_Type*)FTM(PTA2_FTM_NUM),  PTA2_FTM_CH,   PORT_PCR_MUX(PTA2_FTM_FN),  &FTM_CLOCK_REG(PTA2_FTM_NUM),  FTM_CLOCK_MASK(PTA2_FTM_NUM)};
#endif
#if FTM0_0_SEL == 1
const PwmIO  pwmIO_PTA3      = {&digitalIO_PTA3,   (volatile FTM_Type*)FTM(PTA3_FTM_NUM),  PTA3_FTM_CH,   PORT_PCR_MUX(PTA3_FTM_FN),  &FTM_CLOCK_REG(PTA3_FTM_NUM),  FTM_CLOCK_MASK(PTA3_FTM_NUM)};
#endif
#if FTM0_1_SEL == 1
const PwmIO  pwmIO_PTA4      = {&digitalIO_PTA4,   (volatile FTM_Type*)FTM(PTA4_FTM_NUM),  PTA4_FTM_CH,   PORT_PCR_MUX(PTA4_FTM_FN),  &FTM_CLOCK_REG(PTA4_FTM_NUM),  FTM_CLOCK_MASK(PTA4_FTM_NUM)};
#endif
#if FTM0_2_SEL == 1
const PwmIO  pwmIO_PTA5      = {&digitalIO_PTA5,   (volatile FTM_Type*)FTM(PTA5_FTM_NUM),  PTA5_FTM_CH,   PORT_PCR_MUX(PTA5_FTM_FN),  &FTM_CLOCK_REG(PTA5_FTM_NUM),  FTM_CLOCK_MASK(PTA5_FTM_NUM)};
#endif
#if FTM0_3_SEL == 1
const PwmIO  pwmIO_PTA6      = {&digitalIO_PTA6,   (volatile FTM_Type*)FTM(PTA6_FTM_NUM),  PTA6_FTM_CH,   PORT_PCR_MUX(PTA6_FTM_FN),  &FTM_CLOCK_REG(PTA6_FTM_NUM),  FTM_CLOCK_MASK(PTA6_FTM_NUM)};
#endif
#if FTM0_4_SEL == 1
const PwmIO  pwmIO_PTA7      = {&digitalIO_PTA7,   (volatile FTM_Type*)FTM(PTA7_FTM_NUM),  PTA7_FTM_CH,   PORT_PCR_MUX(PTA7_FTM_FN),  &FTM_CLOCK_REG(PTA7_FTM_NUM),  FTM_CLOCK_MASK(PTA7_FTM_NUM)};
#endif
#if FTM1_0_SEL == 1
const PwmIO  pwmIO_PTA8      = {&digitalIO_PTA8,   (volatile FTM_Type*)FTM(PTA8_FTM_NUM),  PTA8_FTM_CH,   PORT_PCR_MUX(PTA8_FTM_FN),  &FTM_CLOCK_REG(PTA8_FTM_NUM),  FTM_CLOCK_MASK(PTA8_FTM_NUM)};
#endif
#if FTM1_1_SEL == 1
const PwmIO  pwmIO_PTA9      = {&digitalIO_PTA9,   (volatile FTM_Type*)FTM(PTA9_FTM_NUM),  PTA9_FTM_CH,   PORT_PCR_MUX(PTA9_FTM_FN),  &FTM_CLOCK_REG(PTA9_FTM_NUM),  FTM_CLOCK_MASK(PTA9_FTM_NUM)};
#endif
#if FTM2_0_SEL == 1
const PwmIO  pwmIO_PTA10     = {&digitalIO_PTA10,  (volatile FTM_Type*)FTM(PTA10_FTM_NUM), PTA10_FTM_CH,  PORT_PCR_MUX(PTA10_FTM_FN), &FTM_CLOCK_REG(PTA10_FTM_NUM), FTM_CLOCK_MASK(PTA10_FTM_NUM)};
#endif
#if FTM2_1_SEL == 1
const PwmIO  pwmIO_PTA11     = {&digitalIO_PTA11,  (volatile FTM_Type*)FTM(PTA11_FTM_NUM), PTA11_FTM_CH,  PORT_PCR_MUX(PTA11_FTM_FN), &FTM_CLOCK_REG(PTA11_FTM_NUM), FTM_CLOCK_MASK(PTA11_FTM_NUM)};
#endif
#if FTM1_0_SEL == 2
const PwmIO  pwmIO_PTA12     = {&digitalIO_PTA12,  (volatile FTM_Type*)FTM(PTA12_FTM_NUM), PTA12_FTM_CH,  PORT_PCR_MUX(PTA12_FTM_FN), &FTM_CLOCK_REG(PTA12_FTM_NUM), FTM_CLOCK_MASK(PTA12_FTM_NUM)};
#endif
#if FTM1_1_SEL == 2
const PwmIO  pwmIO_PTA13     = {&digitalIO_PTA13,  (volatile FTM_Type*)FTM(PTA13_FTM_NUM), PTA13_FTM_CH,  PORT_PCR_MUX(PTA13_FTM_FN), &FTM_CLOCK_REG(PTA13_FTM_NUM), FTM_CLOCK_MASK(PTA13_FTM_NUM)};
#endif
#if FTM1_0_SEL == 3
const PwmIO  pwmIO_PTB0      = {&digitalIO_PTB0,   (volatile FTM_Type*)FTM(PTB0_FTM_NUM),  PTB0_FTM_CH,   PORT_PCR_MUX(PTB0_FTM_FN),  &FTM_CLOCK_REG(PTB0_FTM_NUM),  FTM_CLOCK_MASK(PTB0_FTM_NUM)};
#endif
#if FTM1_1_SEL == 3
const PwmIO  pwmIO_PTB1      = {&digitalIO_PTB1,   (volatile FTM_Type*)FTM(PTB1_FTM_NUM),  PTB1_FTM_CH,   PORT_PCR_MUX(PTB1_FTM_FN),  &FTM_CLOCK_REG(PTB1_FTM_NUM),  FTM_CLOCK_MASK(PTB1_FTM_NUM)};
#endif
#if FTM1_0_SEL == 4
const PwmIO  pwmIO_PTB12     = {&digitalIO_PTB12,  (volatile FTM_Type*)FTM(PTB12_FTM_NUM), PTB12_FTM_CH,  PORT_PCR_MUX(PTB12_FTM_FN), &FTM_CLOCK_REG(PTB12_FTM_NUM), FTM_CLOCK_MASK(PTB12_FTM_NUM)};
#endif
#if FTM0_4_SEL == 2
const PwmIO  pwmIO_PTB12     = {&digitalIO_PTB12,  (volatile FTM_Type*)FTM(PTB12_FTM_NUM), PTB12_FTM_CH,  PORT_PCR_MUX(PTB12_FTM_FN), &FTM_CLOCK_REG(PTB12_FTM_NUM), FTM_CLOCK_MASK(PTB12_FTM_NUM)};
#endif
#if FTM1_1_SEL == 4
const PwmIO  pwmIO_PTB13     = {&digitalIO_PTB13,  (volatile FTM_Type*)FTM(PTB13_FTM_NUM), PTB13_FTM_CH,  PORT_PCR_MUX(PTB13_FTM_FN), &FTM_CLOCK_REG(PTB13_FTM_NUM), FTM_CLOCK_MASK(PTB13_FTM_NUM)};
#endif
#if FTM0_5_SEL == 2
const PwmIO  pwmIO_PTB13     = {&digitalIO_PTB13,  (volatile FTM_Type*)FTM(PTB13_FTM_NUM), PTB13_FTM_CH,  PORT_PCR_MUX(PTB13_FTM_FN), &FTM_CLOCK_REG(PTB13_FTM_NUM), FTM_CLOCK_MASK(PTB13_FTM_NUM)};
#endif
#if FTM2_0_SEL == 2
const PwmIO  pwmIO_PTB18     = {&digitalIO_PTB18,  (volatile FTM_Type*)FTM(PTB18_FTM_NUM), PTB18_FTM_CH,  PORT_PCR_MUX(PTB18_FTM_FN), &FTM_CLOCK_REG(PTB18_FTM_NUM), FTM_CLOCK_MASK(PTB18_FTM_NUM)};
#endif
#if FTM2_1_SEL == 2
const PwmIO  pwmIO_PTB19     = {&digitalIO_PTB19,  (volatile FTM_Type*)FTM(PTB19_FTM_NUM), PTB19_FTM_CH,  PORT_PCR_MUX(PTB19_FTM_FN), &FTM_CLOCK_REG(PTB19_FTM_NUM), FTM_CLOCK_MASK(PTB19_FTM_NUM)};
#endif
#if FTM0_0_SEL == 2
const PwmIO  pwmIO_PTC1      = {&digitalIO_PTC1,   (volatile FTM_Type*)FTM(PTC1_FTM_NUM),  PTC1_FTM_CH,   PORT_PCR_MUX(PTC1_FTM_FN),  &FTM_CLOCK_REG(PTC1_FTM_NUM),  FTM_CLOCK_MASK(PTC1_FTM_NUM)};
#endif
#if FTM0_1_SEL == 2
const PwmIO  pwmIO_PTC2      = {&digitalIO_PTC2,   (volatile FTM_Type*)FTM(PTC2_FTM_NUM),  PTC2_FTM_CH,   PORT_PCR_MUX(PTC2_FTM_FN),  &FTM_CLOCK_REG(PTC2_FTM_NUM),  FTM_CLOCK_MASK(PTC2_FTM_NUM)};
#endif
#if FTM0_2_SEL == 2
const PwmIO  pwmIO_PTC3      = {&digitalIO_PTC3,   (volatile FTM_Type*)FTM(PTC3_FTM_NUM),  PTC3_FTM_CH,   PORT_PCR_MUX(PTC3_FTM_FN),  &FTM_CLOCK_REG(PTC3_FTM_NUM),  FTM_CLOCK_MASK(PTC3_FTM_NUM)};
#endif
#if FTM0_3_SEL == 2
const PwmIO  pwmIO_PTC4      = {&digitalIO_PTC4,   (volatile FTM_Type*)FTM(PTC4_FTM_NUM),  PTC4_FTM_CH,   PORT_PCR_MUX(PTC4_FTM_FN),  &FTM_CLOCK_REG(PTC4_FTM_NUM),  FTM_CLOCK_MASK(PTC4_FTM_NUM)};
#endif
#if FTM0_2_SEL == 3
const PwmIO  pwmIO_PTC5      = {&digitalIO_PTC5,   (volatile FTM_Type*)FTM(PTC5_FTM_NUM),  PTC5_FTM_CH,   PORT_PCR_MUX(PTC5_FTM_FN),  &FTM_CLOCK_REG(PTC5_FTM_NUM),  FTM_CLOCK_MASK(PTC5_FTM_NUM)};
#endif
#if FTM3_4_SEL == 1
const PwmIO  pwmIO_PTC8      = {&digitalIO_PTC8,   (volatile FTM_Type*)FTM(PTC8_FTM_NUM),  PTC8_FTM_CH,   PORT_PCR_MUX(PTC8_FTM_FN),  &FTM_CLOCK_REG(PTC8_FTM_NUM),  FTM_CLOCK_MASK(PTC8_FTM_NUM)};
#endif
#if FTM3_5_SEL == 1
const PwmIO  pwmIO_PTC9      = {&digitalIO_PTC9,   (volatile FTM_Type*)FTM(PTC9_FTM_NUM),  PTC9_FTM_CH,   PORT_PCR_MUX(PTC9_FTM_FN),  &FTM_CLOCK_REG(PTC9_FTM_NUM),  FTM_CLOCK_MASK(PTC9_FTM_NUM)};
#endif
#if FTM3_6_SEL == 1
const PwmIO  pwmIO_PTC10     = {&digitalIO_PTC10,  (volatile FTM_Type*)FTM(PTC10_FTM_NUM), PTC10_FTM_CH,  PORT_PCR_MUX(PTC10_FTM_FN), &FTM_CLOCK_REG(PTC10_FTM_NUM), FTM_CLOCK_MASK(PTC10_FTM_NUM)};
#endif
#if FTM3_7_SEL == 1
const PwmIO  pwmIO_PTC11     = {&digitalIO_PTC11,  (volatile FTM_Type*)FTM(PTC11_FTM_NUM), PTC11_FTM_CH,  PORT_PCR_MUX(PTC11_FTM_FN), &FTM_CLOCK_REG(PTC11_FTM_NUM), FTM_CLOCK_MASK(PTC11_FTM_NUM)};
#endif
#if FTM3_0_SEL == 1
const PwmIO  pwmIO_PTD0      = {&digitalIO_PTD0,   (volatile FTM_Type*)FTM(PTD0_FTM_NUM),  PTD0_FTM_CH,   PORT_PCR_MUX(PTD0_FTM_FN),  &FTM_CLOCK_REG(PTD0_FTM_NUM),  FTM_CLOCK_MASK(PTD0_FTM_NUM)};
#endif
#if FTM3_1_SEL == 1
const PwmIO  pwmIO_PTD1      = {&digitalIO_PTD1,   (volatile FTM_Type*)FTM(PTD1_FTM_NUM),  PTD1_FTM_CH,   PORT_PCR_MUX(PTD1_FTM_FN),  &FTM_CLOCK_REG(PTD1_FTM_NUM),  FTM_CLOCK_MASK(PTD1_FTM_NUM)};
#endif
#if FTM3_2_SEL == 1
const PwmIO  pwmIO_PTD2      = {&digitalIO_PTD2,   (volatile FTM_Type*)FTM(PTD2_FTM_NUM),  PTD2_FTM_CH,   PORT_PCR_MUX(PTD2_FTM_FN),  &FTM_CLOCK_REG(PTD2_FTM_NUM),  FTM_CLOCK_MASK(PTD2_FTM_NUM)};
#endif
#if FTM3_3_SEL == 1
const PwmIO  pwmIO_PTD3      = {&digitalIO_PTD3,   (volatile FTM_Type*)FTM(PTD3_FTM_NUM),  PTD3_FTM_CH,   PORT_PCR_MUX(PTD3_FTM_FN),  &FTM_CLOCK_REG(PTD3_FTM_NUM),  FTM_CLOCK_MASK(PTD3_FTM_NUM)};
#endif
#if FTM0_4_SEL == 3
const PwmIO  pwmIO_PTD4      = {&digitalIO_PTD4,   (volatile FTM_Type*)FTM(PTD4_FTM_NUM),  PTD4_FTM_CH,   PORT_PCR_MUX(PTD4_FTM_FN),  &FTM_CLOCK_REG(PTD4_FTM_NUM),  FTM_CLOCK_MASK(PTD4_FTM_NUM)};
#endif
#if FTM0_5_SEL == 3
const PwmIO  pwmIO_PTD5      = {&digitalIO_PTD5,   (volatile FTM_Type*)FTM(PTD5_FTM_NUM),  PTD5_FTM_CH,   PORT_PCR_MUX(PTD5_FTM_FN),  &FTM_CLOCK_REG(PTD5_FTM_NUM),  FTM_CLOCK_MASK(PTD5_FTM_NUM)};
#endif
#if FTM0_6_SEL == 2
const PwmIO  pwmIO_PTD6      = {&digitalIO_PTD6,   (volatile FTM_Type*)FTM(PTD6_FTM_NUM),  PTD6_FTM_CH,   PORT_PCR_MUX(PTD6_FTM_FN),  &FTM_CLOCK_REG(PTD6_FTM_NUM),  FTM_CLOCK_MASK(PTD6_FTM_NUM)};
#endif
#if FTM0_7_SEL == 2
const PwmIO  pwmIO_PTD7      = {&digitalIO_PTD7,   (volatile FTM_Type*)FTM(PTD7_FTM_NUM),  PTD7_FTM_CH,   PORT_PCR_MUX(PTD7_FTM_FN),  &FTM_CLOCK_REG(PTD7_FTM_NUM),  FTM_CLOCK_MASK(PTD7_FTM_NUM)};
#endif
#if FTM3_0_SEL == 2
const PwmIO  pwmIO_PTE5      = {&digitalIO_PTE5,   (volatile FTM_Type*)FTM(PTE5_FTM_NUM),  PTE5_FTM_CH,   PORT_PCR_MUX(PTE5_FTM_FN),  &FTM_CLOCK_REG(PTE5_FTM_NUM),  FTM_CLOCK_MASK(PTE5_FTM_NUM)};
#endif
#if FTM3_1_SEL == 2
const PwmIO  pwmIO_PTE6      = {&digitalIO_PTE6,   (volatile FTM_Type*)FTM(PTE6_FTM_NUM),  PTE6_FTM_CH,   PORT_PCR_MUX(PTE6_FTM_FN),  &FTM_CLOCK_REG(PTE6_FTM_NUM),  FTM_CLOCK_MASK(PTE6_FTM_NUM)};
#endif
#if FTM3_2_SEL == 2
const PwmIO  pwmIO_PTE7      = {&digitalIO_PTE7,   (volatile FTM_Type*)FTM(PTE7_FTM_NUM),  PTE7_FTM_CH,   PORT_PCR_MUX(PTE7_FTM_FN),  &FTM_CLOCK_REG(PTE7_FTM_NUM),  FTM_CLOCK_MASK(PTE7_FTM_NUM)};
#endif
#if FTM3_3_SEL == 2
const PwmIO  pwmIO_PTE8      = {&digitalIO_PTE8,   (volatile FTM_Type*)FTM(PTE8_FTM_NUM),  PTE8_FTM_CH,   PORT_PCR_MUX(PTE8_FTM_FN),  &FTM_CLOCK_REG(PTE8_FTM_NUM),  FTM_CLOCK_MASK(PTE8_FTM_NUM)};
#endif
#if FTM3_4_SEL == 2
const PwmIO  pwmIO_PTE9      = {&digitalIO_PTE9,   (volatile FTM_Type*)FTM(PTE9_FTM_NUM),  PTE9_FTM_CH,   PORT_PCR_MUX(PTE9_FTM_FN),  &FTM_CLOCK_REG(PTE9_FTM_NUM),  FTM_CLOCK_MASK(PTE9_FTM_NUM)};
#endif
#if FTM3_5_SEL == 2
const PwmIO  pwmIO_PTE10     = {&digitalIO_PTE10,  (volatile FTM_Type*)FTM(PTE10_FTM_NUM), PTE10_FTM_CH,  PORT_PCR_MUX(PTE10_FTM_FN), &FTM_CLOCK_REG(PTE10_FTM_NUM), FTM_CLOCK_MASK(PTE10_FTM_NUM)};
#endif
#if FTM3_6_SEL == 2
const PwmIO  pwmIO_PTE11     = {&digitalIO_PTE11,  (volatile FTM_Type*)FTM(PTE11_FTM_NUM), PTE11_FTM_CH,  PORT_PCR_MUX(PTE11_FTM_FN), &FTM_CLOCK_REG(PTE11_FTM_NUM), FTM_CLOCK_MASK(PTE11_FTM_NUM)};
#endif
#if FTM3_7_SEL == 2
const PwmIO  pwmIO_PTE12     = {&digitalIO_PTE12,  (volatile FTM_Type*)FTM(PTE12_FTM_NUM), PTE12_FTM_CH,  PORT_PCR_MUX(PTE12_FTM_FN), &FTM_CLOCK_REG(PTE12_FTM_NUM), FTM_CLOCK_MASK(PTE12_FTM_NUM)};
#endif