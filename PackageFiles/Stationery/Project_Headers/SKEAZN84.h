/****************************************************************************************************//**
 * @file     SKEAZN84.h
 *
 * @brief    CMSIS Cortex-M Peripheral Access Layer Header File for SKEAZN84.
 *           Equivalent: 
 *
 * @version  V1.6
 * @date     2016/10
 *
 *******************************************************************************************************/

#ifndef MCU_SKEAZN84
#define MCU_SKEAZN84

#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif

/**
* @addtogroup Interrupt_vector_numbers_GROUP Interrupt vector numbers
* @brief Vector numbers required for NVIC functions
* @{
*/
/* -------------------------  Interrupt Number Definition  ------------------------ */

/**
 * Interrupt vector numbers
 */
typedef enum {
/* ------------------------  Processor Exceptions Numbers  ------------------------- */
  Reset_IRQn                    = -15,   /**<   1 Reset Vector, invoked on Power up and warm reset                                 */
  NonMaskableInt_IRQn           = -14,   /**<   2 Non maskable Interrupt, cannot be stopped or preempted                           */
  HardFault_IRQn                = -13,   /**<   3 Hard Fault, all classes of Fault                                                 */
  SVCall_IRQn                   =  -5,   /**<  11 System Service Call via SVC instruction                                          */
  PendSV_IRQn                   =  -2,   /**<  14 Pendable request for system service                                              */
  SysTick_IRQn                  =  -1,   /**<  15 System Tick Timer                                                                */
/* ----------------------   MKE04Z4 VectorTable                      ---------------------- */
  FTMRE_IRQn                    =   5,   /**<  21 Flash Memory                                                                     */
  PMC_IRQn                      =   6,   /**<  22 Power Management Controller                                                      */
  IRQ_IRQn                      =   7,   /**<  23 External Interrupt                                                               */
  I2C0_IRQn                     =   8,   /**<  24 Inter-Integrated Circuit                                                         */
  SPI0_IRQn                     =  10,   /**<  26 Serial Peripheral Interface                                                      */
  UART0_IRQn                    =  12,   /**<  28 Serial Communication Interface                                                   */
  ADC0_IRQn                     =  15,   /**<  31 Analogue to Digital Converter                                                    */
  ACMP0_IRQn                    =  16,   /**<  32 Analogue comparator                                                              */
  FTM0_IRQn                     =  17,   /**<  33 FlexTimer Module                                                                 */
  FTM2_IRQn                     =  19,   /**<  35 FlexTimer Module                                                                 */
  RTC_Alarm_IRQn                =  20,   /**<  36 Real Time Clock                                                                  */
  ACMP1_IRQn                    =  21,   /**<  37 Analogue comparator                                                              */
  PIT0_IRQn                     =  22,   /**<  38 Periodic Interrupt Timer                                                         */
  PIT1_IRQn                     =  23,   /**<  39 Periodic Interrupt Timer                                                         */
  KBI0_IRQn                     =  24,   /**<  40 Keyboard Interrupt                                                               */
  KBI1_IRQn                     =  25,   /**<  41 Keyboard Interrupt                                                               */
  ICS_IRQn                      =  27,   /**<  43 Clock Management                                                                 */
  WDOG_IRQn                     =  28,   /**<  44 Watchdog Timer                                                                   */
  PWT_IRQn                      =  29,   /**<  45 Pulse Width Timer                                                                */
} IRQn_Type;

/**
 * @} */ /* End group Interrupt_vector_numbers_GROUP 
 */
/**
* @addtogroup Interrupt_handler_prototypes_GROUP Interrupt handler prototypes
* @brief Prototypes for interrupt handlers
* @{
*/
/* -------------------------  Exception Handlers  ------------------------ */
extern void NMI_Handler(void);                 /**< Non maskable Interrupt, cannot be stopped or preempted                           */
extern void HardFault_Handler(void);           /**< Hard Fault, all classes of Fault                                                 */
extern void SVC_Handler(void);                 /**< System Service Call via SVC instruction                                          */
extern void PendSV_Handler(void);              /**< Pendable request for system service                                              */
extern void SysTick_Handler(void);             /**< System Tick Timer                                                                */
extern void FTMRE_IRQHandler(void);            /**< Flash Memory                                                                     */
extern void PMC_IRQHandler(void);              /**< Power Management Controller                                                      */
extern void IRQ_IRQHandler(void);              /**< External Interrupt                                                               */
extern void I2C0_IRQHandler(void);             /**< Inter-Integrated Circuit                                                         */
extern void SPI0_IRQHandler(void);             /**< Serial Peripheral Interface                                                      */
extern void UART0_IRQHandler(void);            /**< Serial Communication Interface                                                   */
extern void ADC0_IRQHandler(void);             /**< Analogue to Digital Converter                                                    */
extern void ACMP0_IRQHandler(void);            /**< Analogue comparator                                                              */
extern void FTM0_IRQHandler(void);             /**< FlexTimer Module                                                                 */
extern void FTM2_IRQHandler(void);             /**< FlexTimer Module                                                                 */
extern void RTC_Alarm_IRQHandler(void);        /**< Real Time Clock                                                                  */
extern void ACMP1_IRQHandler(void);            /**< Analogue comparator                                                              */
extern void PIT0_IRQHandler(void);             /**< Periodic Interrupt Timer                                                         */
extern void PIT1_IRQHandler(void);             /**< Periodic Interrupt Timer                                                         */
extern void KBI0_IRQHandler(void);             /**< Keyboard Interrupt                                                               */
extern void KBI1_IRQHandler(void);             /**< Keyboard Interrupt                                                               */
extern void ICS_IRQHandler(void);              /**< Clock Management                                                                 */
extern void WDOG_IRQHandler(void);             /**< Watchdog Timer                                                                   */
extern void PWT_IRQHandler(void);              /**< Pulse Width Timer                                                                */

/**
 * @} */ /* End group Interrupt_handler_prototypes_GROUP 
 */
/* ================================================================================ */
/* ================      Processor and Core Peripheral Section     ================ */
/* ================================================================================ */

/**
* @addtogroup Cortex_Core_Configuration_GROUP Cortex Core Configuration
* @brief Configuration of the cm4 Processor and Core Peripherals
* @{
*/
#define __CM0PLUS_REV             0x0100     /**< CPU Revision                                        */
#define __MPU_PRESENT             0          /**< Whether MPU is present                              */
#define __NVIC_PRIO_BITS          2          /**< Number of implemented bits in NVIC PRIO register    */
#define __Vendor_SysTickConfig    0          /**< Whether Vendor implemented SYSTICK timer is present */
#define __FPU_PRESENT             0          /**< Whether FPU is present                              */
#define __VTOR_PRESENT            1          /**< Whether VTOR register is present                    */

/**
 * @} */ /* End group Cortex_Core_Configuration_GROUP 
 */
#include "core_cm0plus.h"       /* Processor and core peripherals     */
#include "system.h"             /* Device specific configuration file */

#ifndef __IO
#define __IO volatile 
#endif

#ifndef __I
#define __I volatile const
#endif

#ifndef __O
#define __O volatile
#endif


/* ================================================================================ */
/* ================       Device Specific Peripheral Section       ================ */
/* ================================================================================ */



/* -------------------  Start of section using anonymous unions  ------------------ */
#if defined(__CC_ARM)
  #pragma push
  #pragma anon_unions
#elif defined(__ICCARM__)
  #pragma language=extended
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
/* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning 586
#else
  #warning Not supported compiler type
#endif
/**
* @addtogroup Peripheral_access_layer_GROUP Device Peripheral Access Layer
* @brief C structs allowing access to peripheral registers
* @{
*/
/**
* @addtogroup ACMP_Peripheral_access_layer_GROUP ACMP Peripheral Access Layer
* @brief C Struct for ACMP
* @{
*/

/* ================================================================================ */
/* ================           ACMP0 (file:ACMP0_MKE)               ================ */
/* ================================================================================ */

/**
 * @brief Analog comparator
 */
/**
* @addtogroup ACMP_structs_GROUP ACMP struct
* @brief Struct for ACMP
* @{
*/
typedef struct {                                /*       ACMP0 Structure                                              */
   __IO uint8_t   CS;                           /**< 0000: ACMP Control and Status Register                             */
   __IO uint8_t   C0;                           /**< 0001: ACMP Control Register 0                                      */
   __IO uint8_t   C1;                           /**< 0002: ACMP Control Register 1                                      */
   __IO uint8_t   C2;                           /**< 0003: ACMP Control Register 2                                      */
} ACMP_Type;

/**
 * @} */ /* End group ACMP_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'ACMP0' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup ACMP_Register_Masks_GROUP ACMP Register Masks
* @brief Register Masks for ACMP
* @{
*/
/* ------- CS Bit Fields                            ------ */
#define ACMP_CS_ACMOD_MASK                       (0x03UL << ACMP_CS_ACMOD_SHIFT)                     /*!< ACMP0_CS: ACMOD Mask                    */
#define ACMP_CS_ACMOD_SHIFT                      0                                                   /*!< ACMP0_CS: ACMOD Position                */
#define ACMP_CS_ACMOD(x)                         (((uint8_t)(((uint8_t)(x))<<ACMP_CS_ACMOD_SHIFT))&ACMP_CS_ACMOD_MASK) /*!< ACMP0_CS                                */
#define ACMP_CS_ACOPE_MASK                       (0x01UL << ACMP_CS_ACOPE_SHIFT)                     /*!< ACMP0_CS: ACOPE Mask                    */
#define ACMP_CS_ACOPE_SHIFT                      2                                                   /*!< ACMP0_CS: ACOPE Position                */
#define ACMP_CS_ACOPE(x)                         (((uint8_t)(((uint8_t)(x))<<ACMP_CS_ACOPE_SHIFT))&ACMP_CS_ACOPE_MASK) /*!< ACMP0_CS                                */
#define ACMP_CS_ACO_MASK                         (0x01UL << ACMP_CS_ACO_SHIFT)                       /*!< ACMP0_CS: ACO Mask                      */
#define ACMP_CS_ACO_SHIFT                        3                                                   /*!< ACMP0_CS: ACO Position                  */
#define ACMP_CS_ACO(x)                           (((uint8_t)(((uint8_t)(x))<<ACMP_CS_ACO_SHIFT))&ACMP_CS_ACO_MASK) /*!< ACMP0_CS                                */
#define ACMP_CS_ACIE_MASK                        (0x01UL << ACMP_CS_ACIE_SHIFT)                      /*!< ACMP0_CS: ACIE Mask                     */
#define ACMP_CS_ACIE_SHIFT                       4                                                   /*!< ACMP0_CS: ACIE Position                 */
#define ACMP_CS_ACIE(x)                          (((uint8_t)(((uint8_t)(x))<<ACMP_CS_ACIE_SHIFT))&ACMP_CS_ACIE_MASK) /*!< ACMP0_CS                                */
#define ACMP_CS_ACF_MASK                         (0x01UL << ACMP_CS_ACF_SHIFT)                       /*!< ACMP0_CS: ACF Mask                      */
#define ACMP_CS_ACF_SHIFT                        5                                                   /*!< ACMP0_CS: ACF Position                  */
#define ACMP_CS_ACF(x)                           (((uint8_t)(((uint8_t)(x))<<ACMP_CS_ACF_SHIFT))&ACMP_CS_ACF_MASK) /*!< ACMP0_CS                                */
#define ACMP_CS_HYST_MASK                        (0x01UL << ACMP_CS_HYST_SHIFT)                      /*!< ACMP0_CS: HYST Mask                     */
#define ACMP_CS_HYST_SHIFT                       6                                                   /*!< ACMP0_CS: HYST Position                 */
#define ACMP_CS_HYST(x)                          (((uint8_t)(((uint8_t)(x))<<ACMP_CS_HYST_SHIFT))&ACMP_CS_HYST_MASK) /*!< ACMP0_CS                                */
#define ACMP_CS_ACE_MASK                         (0x01UL << ACMP_CS_ACE_SHIFT)                       /*!< ACMP0_CS: ACE Mask                      */
#define ACMP_CS_ACE_SHIFT                        7                                                   /*!< ACMP0_CS: ACE Position                  */
#define ACMP_CS_ACE(x)                           (((uint8_t)(((uint8_t)(x))<<ACMP_CS_ACE_SHIFT))&ACMP_CS_ACE_MASK) /*!< ACMP0_CS                                */
/* ------- C0 Bit Fields                            ------ */
#define ACMP_C0_ACNSEL_MASK                      (0x03UL << ACMP_C0_ACNSEL_SHIFT)                    /*!< ACMP0_C0: ACNSEL Mask                   */
#define ACMP_C0_ACNSEL_SHIFT                     0                                                   /*!< ACMP0_C0: ACNSEL Position               */
#define ACMP_C0_ACNSEL(x)                        (((uint8_t)(((uint8_t)(x))<<ACMP_C0_ACNSEL_SHIFT))&ACMP_C0_ACNSEL_MASK) /*!< ACMP0_C0                                */
#define ACMP_C0_ACPSEL_MASK                      (0x03UL << ACMP_C0_ACPSEL_SHIFT)                    /*!< ACMP0_C0: ACPSEL Mask                   */
#define ACMP_C0_ACPSEL_SHIFT                     4                                                   /*!< ACMP0_C0: ACPSEL Position               */
#define ACMP_C0_ACPSEL(x)                        (((uint8_t)(((uint8_t)(x))<<ACMP_C0_ACPSEL_SHIFT))&ACMP_C0_ACPSEL_MASK) /*!< ACMP0_C0                                */
/* ------- C1 Bit Fields                            ------ */
#define ACMP_C1_DACVAL_MASK                      (0x3FUL << ACMP_C1_DACVAL_SHIFT)                    /*!< ACMP0_C1: DACVAL Mask                   */
#define ACMP_C1_DACVAL_SHIFT                     0                                                   /*!< ACMP0_C1: DACVAL Position               */
#define ACMP_C1_DACVAL(x)                        (((uint8_t)(((uint8_t)(x))<<ACMP_C1_DACVAL_SHIFT))&ACMP_C1_DACVAL_MASK) /*!< ACMP0_C1                                */
#define ACMP_C1_DACREF_MASK                      (0x01UL << ACMP_C1_DACREF_SHIFT)                    /*!< ACMP0_C1: DACREF Mask                   */
#define ACMP_C1_DACREF_SHIFT                     6                                                   /*!< ACMP0_C1: DACREF Position               */
#define ACMP_C1_DACREF(x)                        (((uint8_t)(((uint8_t)(x))<<ACMP_C1_DACREF_SHIFT))&ACMP_C1_DACREF_MASK) /*!< ACMP0_C1                                */
#define ACMP_C1_DACEN_MASK                       (0x01UL << ACMP_C1_DACEN_SHIFT)                     /*!< ACMP0_C1: DACEN Mask                    */
#define ACMP_C1_DACEN_SHIFT                      7                                                   /*!< ACMP0_C1: DACEN Position                */
#define ACMP_C1_DACEN(x)                         (((uint8_t)(((uint8_t)(x))<<ACMP_C1_DACEN_SHIFT))&ACMP_C1_DACEN_MASK) /*!< ACMP0_C1                                */
/* ------- C2 Bit Fields                            ------ */
#define ACMP_C2_ACIPE_MASK                       (0x07UL << ACMP_C2_ACIPE_SHIFT)                     /*!< ACMP0_C2: ACIPE Mask                    */
#define ACMP_C2_ACIPE_SHIFT                      0                                                   /*!< ACMP0_C2: ACIPE Position                */
#define ACMP_C2_ACIPE(x)                         (((uint8_t)(((uint8_t)(x))<<ACMP_C2_ACIPE_SHIFT))&ACMP_C2_ACIPE_MASK) /*!< ACMP0_C2                                */
/**
 * @} */ /* End group ACMP_Register_Masks_GROUP 
 */

/* ACMP0 - Peripheral instance base addresses */
#define ACMP0_BasePtr                  0x40073000UL //!< Peripheral base address
#define ACMP0                          ((ACMP_Type *) ACMP0_BasePtr) //!< Freescale base pointer
#define ACMP0_BASE_PTR                 (ACMP0) //!< Freescale style base pointer
/**
 * @} */ /* End group ACMP_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup ACMP_Peripheral_access_layer_GROUP ACMP Peripheral Access Layer
* @brief C Struct for ACMP
* @{
*/

/* ================================================================================ */
/* ================           ACMP1 (derived from ACMP0)           ================ */
/* ================================================================================ */

/**
 * @brief Analog comparator
 */

/* ACMP1 - Peripheral instance base addresses */
#define ACMP1_BasePtr                  0x40074000UL //!< Peripheral base address
#define ACMP1                          ((ACMP_Type *) ACMP1_BasePtr) //!< Freescale base pointer
#define ACMP1_BASE_PTR                 (ACMP1) //!< Freescale style base pointer
/**
 * @} */ /* End group ACMP_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup ADC_Peripheral_access_layer_GROUP ADC Peripheral Access Layer
* @brief C Struct for ADC
* @{
*/

/* ================================================================================ */
/* ================           ADC0 (file:ADC0_MKE04)               ================ */
/* ================================================================================ */

/**
 * @brief Analog-to-Digital Converter
 */
/**
* @addtogroup ADC_structs_GROUP ADC struct
* @brief Struct for ADC
* @{
*/
typedef struct {                                /*       ADC0 Structure                                               */
   __IO uint32_t  SC1;                          /**< 0000: Status and Control Register 1                                */
   __IO uint32_t  SC2;                          /**< 0004: Status and Control Register 2                                */
   __IO uint32_t  SC3;                          /**< 0008: Status and Control Register 3                                */
   __IO uint32_t  SC4;                          /**< 000C: Status and Control Register 4                                */
   __I  uint32_t  R;                            /**< 0010: Conversion Result Register                                   */
   __IO uint32_t  CV;                           /**< 0014: Compare Value Register                                       */
   __IO uint32_t  APCTL1;                       /**< 0018: Pin Control 1 Register                                       */
   __IO uint32_t  SC5;                          /**< 001C: Status and Control Register 5                                */
} ADC_Type;

/**
 * @} */ /* End group ADC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'ADC0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup ADC_Register_Masks_GROUP ADC Register Masks
* @brief Register Masks for ADC
* @{
*/
/* ------- SC1 Bit Fields                           ------ */
#define ADC_SC1_ADCH_MASK                        (0x1FUL << ADC_SC1_ADCH_SHIFT)                      /*!< ADC0_SC1: ADCH Mask                     */
#define ADC_SC1_ADCH_SHIFT                       0                                                   /*!< ADC0_SC1: ADCH Position                 */
#define ADC_SC1_ADCH(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_ADCH_SHIFT))&ADC_SC1_ADCH_MASK) /*!< ADC0_SC1                                */
#define ADC_SC1_ADCO_MASK                        (0x01UL << ADC_SC1_ADCO_SHIFT)                      /*!< ADC0_SC1: ADCO Mask                     */
#define ADC_SC1_ADCO_SHIFT                       5                                                   /*!< ADC0_SC1: ADCO Position                 */
#define ADC_SC1_ADCO(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_ADCO_SHIFT))&ADC_SC1_ADCO_MASK) /*!< ADC0_SC1                                */
#define ADC_SC1_AIEN_MASK                        (0x01UL << ADC_SC1_AIEN_SHIFT)                      /*!< ADC0_SC1: AIEN Mask                     */
#define ADC_SC1_AIEN_SHIFT                       6                                                   /*!< ADC0_SC1: AIEN Position                 */
#define ADC_SC1_AIEN(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_AIEN_SHIFT))&ADC_SC1_AIEN_MASK) /*!< ADC0_SC1                                */
#define ADC_SC1_COCO_MASK                        (0x01UL << ADC_SC1_COCO_SHIFT)                      /*!< ADC0_SC1: COCO Mask                     */
#define ADC_SC1_COCO_SHIFT                       7                                                   /*!< ADC0_SC1: COCO Position                 */
#define ADC_SC1_COCO(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC1_COCO_SHIFT))&ADC_SC1_COCO_MASK) /*!< ADC0_SC1                                */
/* ------- SC2 Bit Fields                           ------ */
#define ADC_SC2_REFSEL_MASK                      (0x03UL << ADC_SC2_REFSEL_SHIFT)                    /*!< ADC0_SC2: REFSEL Mask                   */
#define ADC_SC2_REFSEL_SHIFT                     0                                                   /*!< ADC0_SC2: REFSEL Position               */
#define ADC_SC2_REFSEL(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC2_REFSEL_SHIFT))&ADC_SC2_REFSEL_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_FFULL_MASK                       (0x01UL << ADC_SC2_FFULL_SHIFT)                     /*!< ADC0_SC2: FFULL Mask                    */
#define ADC_SC2_FFULL_SHIFT                      2                                                   /*!< ADC0_SC2: FFULL Position                */
#define ADC_SC2_FFULL(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_FFULL_SHIFT))&ADC_SC2_FFULL_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_FEMPTY_MASK                      (0x01UL << ADC_SC2_FEMPTY_SHIFT)                    /*!< ADC0_SC2: FEMPTY Mask                   */
#define ADC_SC2_FEMPTY_SHIFT                     3                                                   /*!< ADC0_SC2: FEMPTY Position               */
#define ADC_SC2_FEMPTY(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC2_FEMPTY_SHIFT))&ADC_SC2_FEMPTY_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ACFGT_MASK                       (0x01UL << ADC_SC2_ACFGT_SHIFT)                     /*!< ADC0_SC2: ACFGT Mask                    */
#define ADC_SC2_ACFGT_SHIFT                      4                                                   /*!< ADC0_SC2: ACFGT Position                */
#define ADC_SC2_ACFGT(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ACFGT_SHIFT))&ADC_SC2_ACFGT_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ACFE_MASK                        (0x01UL << ADC_SC2_ACFE_SHIFT)                      /*!< ADC0_SC2: ACFE Mask                     */
#define ADC_SC2_ACFE_SHIFT                       5                                                   /*!< ADC0_SC2: ACFE Position                 */
#define ADC_SC2_ACFE(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ACFE_SHIFT))&ADC_SC2_ACFE_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ADTRG_MASK                       (0x01UL << ADC_SC2_ADTRG_SHIFT)                     /*!< ADC0_SC2: ADTRG Mask                    */
#define ADC_SC2_ADTRG_SHIFT                      6                                                   /*!< ADC0_SC2: ADTRG Position                */
#define ADC_SC2_ADTRG(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ADTRG_SHIFT))&ADC_SC2_ADTRG_MASK) /*!< ADC0_SC2                                */
#define ADC_SC2_ADACT_MASK                       (0x01UL << ADC_SC2_ADACT_SHIFT)                     /*!< ADC0_SC2: ADACT Mask                    */
#define ADC_SC2_ADACT_SHIFT                      7                                                   /*!< ADC0_SC2: ADACT Position                */
#define ADC_SC2_ADACT(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC2_ADACT_SHIFT))&ADC_SC2_ADACT_MASK) /*!< ADC0_SC2                                */
/* ------- SC3 Bit Fields                           ------ */
#define ADC_SC3_ADICLK_MASK                      (0x03UL << ADC_SC3_ADICLK_SHIFT)                    /*!< ADC0_SC3: ADICLK Mask                   */
#define ADC_SC3_ADICLK_SHIFT                     0                                                   /*!< ADC0_SC3: ADICLK Position               */
#define ADC_SC3_ADICLK(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC3_ADICLK_SHIFT))&ADC_SC3_ADICLK_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_MODE_MASK                        (0x03UL << ADC_SC3_MODE_SHIFT)                      /*!< ADC0_SC3: MODE Mask                     */
#define ADC_SC3_MODE_SHIFT                       2                                                   /*!< ADC0_SC3: MODE Position                 */
#define ADC_SC3_MODE(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC3_MODE_SHIFT))&ADC_SC3_MODE_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_ADLSMP_MASK                      (0x01UL << ADC_SC3_ADLSMP_SHIFT)                    /*!< ADC0_SC3: ADLSMP Mask                   */
#define ADC_SC3_ADLSMP_SHIFT                     4                                                   /*!< ADC0_SC3: ADLSMP Position               */
#define ADC_SC3_ADLSMP(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC3_ADLSMP_SHIFT))&ADC_SC3_ADLSMP_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_ADIV_MASK                        (0x03UL << ADC_SC3_ADIV_SHIFT)                      /*!< ADC0_SC3: ADIV Mask                     */
#define ADC_SC3_ADIV_SHIFT                       5                                                   /*!< ADC0_SC3: ADIV Position                 */
#define ADC_SC3_ADIV(x)                          (((uint32_t)(((uint32_t)(x))<<ADC_SC3_ADIV_SHIFT))&ADC_SC3_ADIV_MASK) /*!< ADC0_SC3                                */
#define ADC_SC3_ADLPC_MASK                       (0x01UL << ADC_SC3_ADLPC_SHIFT)                     /*!< ADC0_SC3: ADLPC Mask                    */
#define ADC_SC3_ADLPC_SHIFT                      7                                                   /*!< ADC0_SC3: ADLPC Position                */
#define ADC_SC3_ADLPC(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC3_ADLPC_SHIFT))&ADC_SC3_ADLPC_MASK) /*!< ADC0_SC3                                */
/* ------- SC4 Bit Fields                           ------ */
#define ADC_SC4_AFDEP_MASK                       (0x07UL << ADC_SC4_AFDEP_SHIFT)                     /*!< ADC0_SC4: AFDEP Mask                    */
#define ADC_SC4_AFDEP_SHIFT                      0                                                   /*!< ADC0_SC4: AFDEP Position                */
#define ADC_SC4_AFDEP(x)                         (((uint32_t)(((uint32_t)(x))<<ADC_SC4_AFDEP_SHIFT))&ADC_SC4_AFDEP_MASK) /*!< ADC0_SC4                                */
#define ADC_SC4_ACFSEL_MASK                      (0x01UL << ADC_SC4_ACFSEL_SHIFT)                    /*!< ADC0_SC4: ACFSEL Mask                   */
#define ADC_SC4_ACFSEL_SHIFT                     5                                                   /*!< ADC0_SC4: ACFSEL Position               */
#define ADC_SC4_ACFSEL(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC4_ACFSEL_SHIFT))&ADC_SC4_ACFSEL_MASK) /*!< ADC0_SC4                                */
#define ADC_SC4_ASCANE_MASK                      (0x01UL << ADC_SC4_ASCANE_SHIFT)                    /*!< ADC0_SC4: ASCANE Mask                   */
#define ADC_SC4_ASCANE_SHIFT                     6                                                   /*!< ADC0_SC4: ASCANE Position               */
#define ADC_SC4_ASCANE(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC4_ASCANE_SHIFT))&ADC_SC4_ASCANE_MASK) /*!< ADC0_SC4                                */
#define ADC_SC4_HTRGME_MASK                      (0x01UL << ADC_SC4_HTRGME_SHIFT)                    /*!< ADC0_SC4: HTRGME Mask                   */
#define ADC_SC4_HTRGME_SHIFT                     8                                                   /*!< ADC0_SC4: HTRGME Position               */
#define ADC_SC4_HTRGME(x)                        (((uint32_t)(((uint32_t)(x))<<ADC_SC4_HTRGME_SHIFT))&ADC_SC4_HTRGME_MASK) /*!< ADC0_SC4                                */
/* ------- R Bit Fields                             ------ */
#define ADC_R_ADR_MASK                           (0xFFFUL << ADC_R_ADR_SHIFT)                        /*!< ADC0_R: ADR Mask                        */
#define ADC_R_ADR_SHIFT                          0                                                   /*!< ADC0_R: ADR Position                    */
#define ADC_R_ADR(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_R_ADR_SHIFT))&ADC_R_ADR_MASK) /*!< ADC0_R                                  */
/* ------- CV Bit Fields                            ------ */
#define ADC_CV_CV_MASK                           (0xFFFUL << ADC_CV_CV_SHIFT)                        /*!< ADC0_CV: CV Mask                        */
#define ADC_CV_CV_SHIFT                          0                                                   /*!< ADC0_CV: CV Position                    */
#define ADC_CV_CV(x)                             (((uint32_t)(((uint32_t)(x))<<ADC_CV_CV_SHIFT))&ADC_CV_CV_MASK) /*!< ADC0_CV                                 */
/* ------- APCTL1 Bit Fields                        ------ */
#define ADC_APCTL1_ADPC_MASK                     (0xFFFFUL << ADC_APCTL1_ADPC_SHIFT)                 /*!< ADC0_APCTL1: ADPC Mask                  */
#define ADC_APCTL1_ADPC_SHIFT                    0                                                   /*!< ADC0_APCTL1: ADPC Position              */
#define ADC_APCTL1_ADPC(x)                       (((uint32_t)(((uint32_t)(x))<<ADC_APCTL1_ADPC_SHIFT))&ADC_APCTL1_ADPC_MASK) /*!< ADC0_APCTL1                             */
/* ------- SC5 Bit Fields                           ------ */
#define ADC_SC5_HTRGMASKSEL_MASK                 (0x01UL << ADC_SC5_HTRGMASKSEL_SHIFT)               /*!< ADC0_SC5: HTRGMASKSEL Mask              */
#define ADC_SC5_HTRGMASKSEL_SHIFT                0                                                   /*!< ADC0_SC5: HTRGMASKSEL Position          */
#define ADC_SC5_HTRGMASKSEL(x)                   (((uint32_t)(((uint32_t)(x))<<ADC_SC5_HTRGMASKSEL_SHIFT))&ADC_SC5_HTRGMASKSEL_MASK) /*!< ADC0_SC5                                */
#define ADC_SC5_HTRGMASKE_MASK                   (0x01UL << ADC_SC5_HTRGMASKE_SHIFT)                 /*!< ADC0_SC5: HTRGMASKE Mask                */
#define ADC_SC5_HTRGMASKE_SHIFT                  1                                                   /*!< ADC0_SC5: HTRGMASKE Position            */
#define ADC_SC5_HTRGMASKE(x)                     (((uint32_t)(((uint32_t)(x))<<ADC_SC5_HTRGMASKE_SHIFT))&ADC_SC5_HTRGMASKE_MASK) /*!< ADC0_SC5                                */
/**
 * @} */ /* End group ADC_Register_Masks_GROUP 
 */

/* ADC0 - Peripheral instance base addresses */
#define ADC0_BasePtr                   0x4003B000UL //!< Peripheral base address
#define ADC0                           ((ADC_Type *) ADC0_BasePtr) //!< Freescale base pointer
#define ADC0_BASE_PTR                  (ADC0) //!< Freescale style base pointer
/**
 * @} */ /* End group ADC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup BP_Peripheral_access_layer_GROUP BP Peripheral Access Layer
* @brief C Struct for BP
* @{
*/

/* ================================================================================ */
/* ================           BP (file:BP_CM0)                     ================ */
/* ================================================================================ */

/**
 * @brief Breakpoint Unit
 */
/**
* @addtogroup BP_structs_GROUP BP struct
* @brief Struct for BP
* @{
*/
typedef struct {                                /*       BP Structure                                                 */
   __IO uint32_t  CTRL;                         /**< 0000: FlashPatch Control Register                                  */
   __I  uint32_t  RESERVED0;                   
   __IO uint32_t  COMP[2];                      /**< 0008: FlashPatch Comparator Register                               */
   __I  uint32_t  RESERVED1[1008];             
   __I  uint32_t  PID4;                         /**< 0FD0: Peripheral Identification Register 4                         */
   __I  uint32_t  PID5;                         /**< 0FD4: Peripheral Identification Register 5                         */
   __I  uint32_t  PID6;                         /**< 0FD8: Peripheral Identification Register 6                         */
   __I  uint32_t  PID7;                         /**< 0FDC: Peripheral Identification Register 7                         */
   __I  uint32_t  PID0;                         /**< 0FE0: Peripheral Identification Register 0                         */
   __I  uint32_t  PID1;                         /**< 0FE4: Peripheral Identification Register 1                         */
   __I  uint32_t  PID2;                         /**< 0FE8: Peripheral Identification Register 2                         */
   __I  uint32_t  PID3;                         /**< 0FEC: Peripheral Identification Register 3                         */
   __I  uint32_t  CID[4];                       /**< 0FF0: Component Identification Register 0                          */
} BP_Type;

/**
 * @} */ /* End group BP_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'BP' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup BP_Register_Masks_GROUP BP Register Masks
* @brief Register Masks for BP
* @{
*/
/* ------- CTRL Bit Fields                          ------ */
#define BP_CTRL_ENABLE_MASK                      (0x01UL << BP_CTRL_ENABLE_SHIFT)                    /*!< BP_CTRL: ENABLE Mask                    */
#define BP_CTRL_ENABLE_SHIFT                     0                                                   /*!< BP_CTRL: ENABLE Position                */
#define BP_CTRL_ENABLE(x)                        (((uint32_t)(((uint32_t)(x))<<BP_CTRL_ENABLE_SHIFT))&BP_CTRL_ENABLE_MASK) /*!< BP_CTRL                                 */
#define BP_CTRL_KEY_MASK                         (0x01UL << BP_CTRL_KEY_SHIFT)                       /*!< BP_CTRL: KEY Mask                       */
#define BP_CTRL_KEY_SHIFT                        1                                                   /*!< BP_CTRL: KEY Position                   */
#define BP_CTRL_KEY(x)                           (((uint32_t)(((uint32_t)(x))<<BP_CTRL_KEY_SHIFT))&BP_CTRL_KEY_MASK) /*!< BP_CTRL                                 */
#define BP_CTRL_NUM_CODE_MASK                    (0x0FUL << BP_CTRL_NUM_CODE_SHIFT)                  /*!< BP_CTRL: NUM_CODE Mask                  */
#define BP_CTRL_NUM_CODE_SHIFT                   4                                                   /*!< BP_CTRL: NUM_CODE Position              */
#define BP_CTRL_NUM_CODE(x)                      (((uint32_t)(((uint32_t)(x))<<BP_CTRL_NUM_CODE_SHIFT))&BP_CTRL_NUM_CODE_MASK) /*!< BP_CTRL                                 */
/* ------- COMP Bit Fields                          ------ */
#define BP_COMP_ENABLE_MASK                      (0x01UL << BP_COMP_ENABLE_SHIFT)                    /*!< BP_COMP: ENABLE Mask                    */
#define BP_COMP_ENABLE_SHIFT                     0                                                   /*!< BP_COMP: ENABLE Position                */
#define BP_COMP_ENABLE(x)                        (((uint32_t)(((uint32_t)(x))<<BP_COMP_ENABLE_SHIFT))&BP_COMP_ENABLE_MASK) /*!< BP_COMP                                 */
#define BP_COMP_COMP_MASK                        (0x7FFFFFFUL << BP_COMP_COMP_SHIFT)                 /*!< BP_COMP: COMP Mask                      */
#define BP_COMP_COMP_SHIFT                       2                                                   /*!< BP_COMP: COMP Position                  */
#define BP_COMP_COMP(x)                          (((uint32_t)(((uint32_t)(x))<<BP_COMP_COMP_SHIFT))&BP_COMP_COMP_MASK) /*!< BP_COMP                                 */
#define BP_COMP_BP_MATCH_MASK                    (0x03UL << BP_COMP_BP_MATCH_SHIFT)                  /*!< BP_COMP: BP_MATCH Mask                  */
#define BP_COMP_BP_MATCH_SHIFT                   30                                                  /*!< BP_COMP: BP_MATCH Position              */
#define BP_COMP_BP_MATCH(x)                      (((uint32_t)(((uint32_t)(x))<<BP_COMP_BP_MATCH_SHIFT))&BP_COMP_BP_MATCH_MASK) /*!< BP_COMP                                 */
/* ------- PID Bit Fields                           ------ */
/* ------- CID Bit Fields                           ------ */
/**
 * @} */ /* End group BP_Register_Masks_GROUP 
 */

/* BP - Peripheral instance base addresses */
#define BP_BasePtr                     0xE0002000UL //!< Peripheral base address
#define BP                             ((BP_Type *) BP_BasePtr) //!< Freescale base pointer
#define BP_BASE_PTR                    (BP) //!< Freescale style base pointer
/**
 * @} */ /* End group BP_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup CRC_Peripheral_access_layer_GROUP CRC Peripheral Access Layer
* @brief C Struct for CRC
* @{
*/

/* ================================================================================ */
/* ================           CRC (file:CRC_0x40032000)            ================ */
/* ================================================================================ */

/**
 * @brief Cyclic Redundancy Check
 */
/**
* @addtogroup CRC_structs_GROUP CRC struct
* @brief Struct for CRC
* @{
*/
typedef struct {                                /*       CRC Structure                                                */
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  CRC;                       /**< 0000: Data register                                                */
      struct {                                  /**< 0000: (size=0004)                                                  */
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  CRCL;                /**< 0000: CRCL register                                                */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   CRCLL;            /**< 0000: CRCLL register                                               */
               __IO uint8_t   CRCLU;            /**< 0001: CRCLU register                                               */
            };
         };
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  CRCH;                /**< 0002: CRCH register                                                */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   CRCHL;            /**< 0002: CRCHL register                                               */
               __IO uint8_t   CRCHU;            /**< 0003: CRCHU register                                               */
            };
         };
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  GPOLY;                     /**< 0004: Polynomial register                                          */
      struct {                                  /**< 0000: (size=0004)                                                  */
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYL;              /**< 0004: GPOLYL register                                              */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYLL;          /**< 0004: GPOLYLL register                                             */
               __IO uint8_t   GPOLYLU;          /**< 0005: GPOLYLU register                                             */
            };
         };
         union {                                /**< 0000: (size=0002)                                                  */
            __IO uint16_t  GPOLYH;              /**< 0006: GPOLYH register                                              */
            struct {                            /**< 0000: (size=0002)                                                  */
               __IO uint8_t   GPOLYHL;          /**< 0006: GPOLYHL register                                             */
               __IO uint8_t   GPOLYHU;          /**< 0007: GPOLYHU register                                             */
            };
         };
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  CTRL;                      /**< 0008: Control register                                             */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __I  uint8_t   RESERVED0[3];          
         __IO uint8_t   CTRLHU;                 /**< 000B: Control register (byte access)                               */
      };
   };
} CRC_Type;

/**
 * @} */ /* End group CRC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'CRC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup CRC_Register_Masks_GROUP CRC Register Masks
* @brief Register Masks for CRC
* @{
*/
/* ------- CRC Bit Fields                           ------ */
#define CRC_CRC_LL_MASK                          (0xFFUL << CRC_CRC_LL_SHIFT)                        /*!< CRC_CRC: LL Mask                        */
#define CRC_CRC_LL_SHIFT                         0                                                   /*!< CRC_CRC: LL Position                    */
#define CRC_CRC_LL(x)                            (((uint32_t)(((uint32_t)(x))<<CRC_CRC_LL_SHIFT))&CRC_CRC_LL_MASK) /*!< CRC_CRC                                 */
#define CRC_CRC_LU_MASK                          (0xFFUL << CRC_CRC_LU_SHIFT)                        /*!< CRC_CRC: LU Mask                        */
#define CRC_CRC_LU_SHIFT                         8                                                   /*!< CRC_CRC: LU Position                    */
#define CRC_CRC_LU(x)                            (((uint32_t)(((uint32_t)(x))<<CRC_CRC_LU_SHIFT))&CRC_CRC_LU_MASK) /*!< CRC_CRC                                 */
#define CRC_CRC_HL_MASK                          (0xFFUL << CRC_CRC_HL_SHIFT)                        /*!< CRC_CRC: HL Mask                        */
#define CRC_CRC_HL_SHIFT                         16                                                  /*!< CRC_CRC: HL Position                    */
#define CRC_CRC_HL(x)                            (((uint32_t)(((uint32_t)(x))<<CRC_CRC_HL_SHIFT))&CRC_CRC_HL_MASK) /*!< CRC_CRC                                 */
#define CRC_CRC_HU_MASK                          (0xFFUL << CRC_CRC_HU_SHIFT)                        /*!< CRC_CRC: HU Mask                        */
#define CRC_CRC_HU_SHIFT                         24                                                  /*!< CRC_CRC: HU Position                    */
#define CRC_CRC_HU(x)                            (((uint32_t)(((uint32_t)(x))<<CRC_CRC_HU_SHIFT))&CRC_CRC_HU_MASK) /*!< CRC_CRC                                 */
/* ------- CRCL Bit Fields                          ------ */
#define CRC_CRCL_CRCL_MASK                       (0xFFFFUL << CRC_CRCL_CRCL_SHIFT)                   /*!< CRC_CRCL: CRCL Mask                     */
#define CRC_CRCL_CRCL_SHIFT                      0                                                   /*!< CRC_CRCL: CRCL Position                 */
#define CRC_CRCL_CRCL(x)                         (((uint16_t)(((uint16_t)(x))<<CRC_CRCL_CRCL_SHIFT))&CRC_CRCL_CRCL_MASK) /*!< CRC_CRCL                                */
/* ------- CRCLL Bit Fields                         ------ */
#define CRC_CRCLL_CRCLL_MASK                     (0xFFUL << CRC_CRCLL_CRCLL_SHIFT)                   /*!< CRC_CRCLL: CRCLL Mask                   */
#define CRC_CRCLL_CRCLL_SHIFT                    0                                                   /*!< CRC_CRCLL: CRCLL Position               */
#define CRC_CRCLL_CRCLL(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CRCLL_CRCLL_SHIFT))&CRC_CRCLL_CRCLL_MASK) /*!< CRC_CRCLL                               */
/* ------- CRCLU Bit Fields                         ------ */
#define CRC_CRCLU_CRCLU_MASK                     (0xFFUL << CRC_CRCLU_CRCLU_SHIFT)                   /*!< CRC_CRCLU: CRCLU Mask                   */
#define CRC_CRCLU_CRCLU_SHIFT                    0                                                   /*!< CRC_CRCLU: CRCLU Position               */
#define CRC_CRCLU_CRCLU(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CRCLU_CRCLU_SHIFT))&CRC_CRCLU_CRCLU_MASK) /*!< CRC_CRCLU                               */
/* ------- CRCH Bit Fields                          ------ */
#define CRC_CRCH_CRCH_MASK                       (0xFFFFUL << CRC_CRCH_CRCH_SHIFT)                   /*!< CRC_CRCH: CRCH Mask                     */
#define CRC_CRCH_CRCH_SHIFT                      0                                                   /*!< CRC_CRCH: CRCH Position                 */
#define CRC_CRCH_CRCH(x)                         (((uint16_t)(((uint16_t)(x))<<CRC_CRCH_CRCH_SHIFT))&CRC_CRCH_CRCH_MASK) /*!< CRC_CRCH                                */
/* ------- CRCHL Bit Fields                         ------ */
#define CRC_CRCHL_CRCHL_MASK                     (0xFFUL << CRC_CRCHL_CRCHL_SHIFT)                   /*!< CRC_CRCHL: CRCHL Mask                   */
#define CRC_CRCHL_CRCHL_SHIFT                    0                                                   /*!< CRC_CRCHL: CRCHL Position               */
#define CRC_CRCHL_CRCHL(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CRCHL_CRCHL_SHIFT))&CRC_CRCHL_CRCHL_MASK) /*!< CRC_CRCHL                               */
/* ------- CRCHU Bit Fields                         ------ */
#define CRC_CRCHU_CRCHU_MASK                     (0xFFUL << CRC_CRCHU_CRCHU_SHIFT)                   /*!< CRC_CRCHU: CRCHU Mask                   */
#define CRC_CRCHU_CRCHU_SHIFT                    0                                                   /*!< CRC_CRCHU: CRCHU Position               */
#define CRC_CRCHU_CRCHU(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CRCHU_CRCHU_SHIFT))&CRC_CRCHU_CRCHU_MASK) /*!< CRC_CRCHU                               */
/* ------- GPOLY Bit Fields                         ------ */
#define CRC_GPOLY_LOW_MASK                       (0xFFFFUL << CRC_GPOLY_LOW_SHIFT)                   /*!< CRC_GPOLY: LOW Mask                     */
#define CRC_GPOLY_LOW_SHIFT                      0                                                   /*!< CRC_GPOLY: LOW Position                 */
#define CRC_GPOLY_LOW(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_LOW_SHIFT))&CRC_GPOLY_LOW_MASK) /*!< CRC_GPOLY                               */
#define CRC_GPOLY_HIGH_MASK                      (0xFFFFUL << CRC_GPOLY_HIGH_SHIFT)                  /*!< CRC_GPOLY: HIGH Mask                    */
#define CRC_GPOLY_HIGH_SHIFT                     16                                                  /*!< CRC_GPOLY: HIGH Position                */
#define CRC_GPOLY_HIGH(x)                        (((uint32_t)(((uint32_t)(x))<<CRC_GPOLY_HIGH_SHIFT))&CRC_GPOLY_HIGH_MASK) /*!< CRC_GPOLY                               */
/* ------- GPOLYL Bit Fields                        ------ */
#define CRC_GPOLYL_GPOLYL_MASK                   (0xFFFFUL << CRC_GPOLYL_GPOLYL_SHIFT)               /*!< CRC_GPOLYL: GPOLYL Mask                 */
#define CRC_GPOLYL_GPOLYL_SHIFT                  0                                                   /*!< CRC_GPOLYL: GPOLYL Position             */
#define CRC_GPOLYL_GPOLYL(x)                     (((uint16_t)(((uint16_t)(x))<<CRC_GPOLYL_GPOLYL_SHIFT))&CRC_GPOLYL_GPOLYL_MASK) /*!< CRC_GPOLYL                              */
/* ------- GPOLYLL Bit Fields                       ------ */
#define CRC_GPOLYLL_GPOLYLL_MASK                 (0xFFUL << CRC_GPOLYLL_GPOLYLL_SHIFT)               /*!< CRC_GPOLYLL: GPOLYLL Mask               */
#define CRC_GPOLYLL_GPOLYLL_SHIFT                0                                                   /*!< CRC_GPOLYLL: GPOLYLL Position           */
#define CRC_GPOLYLL_GPOLYLL(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYLL_GPOLYLL_SHIFT))&CRC_GPOLYLL_GPOLYLL_MASK) /*!< CRC_GPOLYLL                             */
/* ------- GPOLYLU Bit Fields                       ------ */
#define CRC_GPOLYLU_GPOLYLU_MASK                 (0xFFUL << CRC_GPOLYLU_GPOLYLU_SHIFT)               /*!< CRC_GPOLYLU: GPOLYLU Mask               */
#define CRC_GPOLYLU_GPOLYLU_SHIFT                0                                                   /*!< CRC_GPOLYLU: GPOLYLU Position           */
#define CRC_GPOLYLU_GPOLYLU(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYLU_GPOLYLU_SHIFT))&CRC_GPOLYLU_GPOLYLU_MASK) /*!< CRC_GPOLYLU                             */
/* ------- GPOLYH Bit Fields                        ------ */
#define CRC_GPOLYH_GPOLYH_MASK                   (0xFFFFUL << CRC_GPOLYH_GPOLYH_SHIFT)               /*!< CRC_GPOLYH: GPOLYH Mask                 */
#define CRC_GPOLYH_GPOLYH_SHIFT                  0                                                   /*!< CRC_GPOLYH: GPOLYH Position             */
#define CRC_GPOLYH_GPOLYH(x)                     (((uint16_t)(((uint16_t)(x))<<CRC_GPOLYH_GPOLYH_SHIFT))&CRC_GPOLYH_GPOLYH_MASK) /*!< CRC_GPOLYH                              */
/* ------- GPOLYHL Bit Fields                       ------ */
#define CRC_GPOLYHL_GPOLYHL_MASK                 (0xFFUL << CRC_GPOLYHL_GPOLYHL_SHIFT)               /*!< CRC_GPOLYHL: GPOLYHL Mask               */
#define CRC_GPOLYHL_GPOLYHL_SHIFT                0                                                   /*!< CRC_GPOLYHL: GPOLYHL Position           */
#define CRC_GPOLYHL_GPOLYHL(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYHL_GPOLYHL_SHIFT))&CRC_GPOLYHL_GPOLYHL_MASK) /*!< CRC_GPOLYHL                             */
/* ------- GPOLYHU Bit Fields                       ------ */
#define CRC_GPOLYHU_GPOLYHU_MASK                 (0xFFUL << CRC_GPOLYHU_GPOLYHU_SHIFT)               /*!< CRC_GPOLYHU: GPOLYHU Mask               */
#define CRC_GPOLYHU_GPOLYHU_SHIFT                0                                                   /*!< CRC_GPOLYHU: GPOLYHU Position           */
#define CRC_GPOLYHU_GPOLYHU(x)                   (((uint8_t)(((uint8_t)(x))<<CRC_GPOLYHU_GPOLYHU_SHIFT))&CRC_GPOLYHU_GPOLYHU_MASK) /*!< CRC_GPOLYHU                             */
/* ------- CTRL Bit Fields                          ------ */
#define CRC_CTRL_TCRC_MASK                       (0x01UL << CRC_CTRL_TCRC_SHIFT)                     /*!< CRC_CTRL: TCRC Mask                     */
#define CRC_CTRL_TCRC_SHIFT                      24                                                  /*!< CRC_CTRL: TCRC Position                 */
#define CRC_CTRL_TCRC(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TCRC_SHIFT))&CRC_CTRL_TCRC_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_WAS_MASK                        (0x01UL << CRC_CTRL_WAS_SHIFT)                      /*!< CRC_CTRL: WAS Mask                      */
#define CRC_CTRL_WAS_SHIFT                       25                                                  /*!< CRC_CTRL: WAS Position                  */
#define CRC_CTRL_WAS(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_WAS_SHIFT))&CRC_CTRL_WAS_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_FXOR_MASK                       (0x01UL << CRC_CTRL_FXOR_SHIFT)                     /*!< CRC_CTRL: FXOR Mask                     */
#define CRC_CTRL_FXOR_SHIFT                      26                                                  /*!< CRC_CTRL: FXOR Position                 */
#define CRC_CTRL_FXOR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_FXOR_SHIFT))&CRC_CTRL_FXOR_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_TOTR_MASK                       (0x03UL << CRC_CTRL_TOTR_SHIFT)                     /*!< CRC_CTRL: TOTR Mask                     */
#define CRC_CTRL_TOTR_SHIFT                      28                                                  /*!< CRC_CTRL: TOTR Position                 */
#define CRC_CTRL_TOTR(x)                         (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOTR_SHIFT))&CRC_CTRL_TOTR_MASK) /*!< CRC_CTRL                                */
#define CRC_CTRL_TOT_MASK                        (0x03UL << CRC_CTRL_TOT_SHIFT)                      /*!< CRC_CTRL: TOT Mask                      */
#define CRC_CTRL_TOT_SHIFT                       30                                                  /*!< CRC_CTRL: TOT Position                  */
#define CRC_CTRL_TOT(x)                          (((uint32_t)(((uint32_t)(x))<<CRC_CTRL_TOT_SHIFT))&CRC_CTRL_TOT_MASK) /*!< CRC_CTRL                                */
/* ------- CTRLHU Bit Fields                        ------ */
#define CRC_CTRLHU_TCRC_MASK                     (0x01UL << CRC_CTRLHU_TCRC_SHIFT)                   /*!< CRC_CTRLHU: TCRC Mask                   */
#define CRC_CTRLHU_TCRC_SHIFT                    0                                                   /*!< CRC_CTRLHU: TCRC Position               */
#define CRC_CTRLHU_TCRC(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TCRC_SHIFT))&CRC_CTRLHU_TCRC_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_WAS_MASK                      (0x01UL << CRC_CTRLHU_WAS_SHIFT)                    /*!< CRC_CTRLHU: WAS Mask                    */
#define CRC_CTRLHU_WAS_SHIFT                     1                                                   /*!< CRC_CTRLHU: WAS Position                */
#define CRC_CTRLHU_WAS(x)                        (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_WAS_SHIFT))&CRC_CTRLHU_WAS_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_FXOR_MASK                     (0x01UL << CRC_CTRLHU_FXOR_SHIFT)                   /*!< CRC_CTRLHU: FXOR Mask                   */
#define CRC_CTRLHU_FXOR_SHIFT                    2                                                   /*!< CRC_CTRLHU: FXOR Position               */
#define CRC_CTRLHU_FXOR(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_FXOR_SHIFT))&CRC_CTRLHU_FXOR_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_TOTR_MASK                     (0x03UL << CRC_CTRLHU_TOTR_SHIFT)                   /*!< CRC_CTRLHU: TOTR Mask                   */
#define CRC_CTRLHU_TOTR_SHIFT                    4                                                   /*!< CRC_CTRLHU: TOTR Position               */
#define CRC_CTRLHU_TOTR(x)                       (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TOTR_SHIFT))&CRC_CTRLHU_TOTR_MASK) /*!< CRC_CTRLHU                              */
#define CRC_CTRLHU_TOT_MASK                      (0x03UL << CRC_CTRLHU_TOT_SHIFT)                    /*!< CRC_CTRLHU: TOT Mask                    */
#define CRC_CTRLHU_TOT_SHIFT                     6                                                   /*!< CRC_CTRLHU: TOT Position                */
#define CRC_CTRLHU_TOT(x)                        (((uint8_t)(((uint8_t)(x))<<CRC_CTRLHU_TOT_SHIFT))&CRC_CTRLHU_TOT_MASK) /*!< CRC_CTRLHU                              */
/**
 * @} */ /* End group CRC_Register_Masks_GROUP 
 */

/* CRC - Peripheral instance base addresses */
#define CRC_BasePtr                    0x40032000UL //!< Peripheral base address
#define CRC                            ((CRC_Type *) CRC_BasePtr) //!< Freescale base pointer
#define CRC_BASE_PTR                   (CRC) //!< Freescale style base pointer
/**
 * @} */ /* End group CRC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FGPIOA_Peripheral_access_layer_GROUP FGPIOA Peripheral Access Layer
* @brief C Struct for FGPIOA
* @{
*/

/* ================================================================================ */
/* ================           FGPIOA (file:FGPIOA_MKE)             ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */
/**
* @addtogroup FGPIOA_structs_GROUP FGPIOA struct
* @brief Struct for FGPIOA
* @{
*/
typedef struct {                                /*       FGPIOA Structure                                             */
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  PDOR;                      /**< 0000: Port Data Output Register                                    */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __IO uint8_t   PDORA;                  /**< 0000: Port Data Output Register                                    */
         __IO uint8_t   PDORB;                  /**< 0001: Port Data Output Register                                    */
         __IO uint8_t   PDORC;                  /**< 0002: Port Data Output Register                                    */
         __IO uint8_t   PDORD;                  /**< 0003: Port Data Output Register                                    */
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __O  uint32_t  PSOR;                      /**< 0004: Port Set Output Register                                     */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __O  uint8_t   PSORA;                  /**< 0004: Port Set Output Register                                     */
         __O  uint8_t   PSORB;                  /**< 0005: Port Set Output Register                                     */
         __O  uint8_t   PSORC;                  /**< 0006: Port Set Output Register                                     */
         __O  uint8_t   PSORD;                  /**< 0007: Port Set Output Register                                     */
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __O  uint32_t  PCOR;                      /**< 0008: Port Clear Output Register                                   */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __O  uint8_t   PCORA;                  /**< 0008: Port Clear Output Register                                   */
         __O  uint8_t   PCORB;                  /**< 0009: Port Clear Output Register                                   */
         __O  uint8_t   PCORC;                  /**< 000A: Port Clear Output Register                                   */
         __O  uint8_t   PCORD;                  /**< 000B: Port Clear Output Register                                   */
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __O  uint32_t  PTOR;                      /**< 000C: Port Toggle Output Register                                  */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __O  uint8_t   PTORA;                  /**< 000C: Port Toggle Output Register                                  */
         __O  uint8_t   PTORB;                  /**< 000D: Port Toggle Output Register                                  */
         __O  uint8_t   PTORC;                  /**< 000E: Port Toggle Output Register                                  */
         __O  uint8_t   PTORD;                  /**< 000F: Port Toggle Output Register                                  */
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __I  uint32_t  PDIR;                      /**< 0010: Port Data Input Register                                     */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __I  uint8_t   PDIRA;                  /**< 0010: Port Data Input Register                                     */
         __I  uint8_t   PDIRB;                  /**< 0011: Port Data Input Register                                     */
         __I  uint8_t   PDIRC;                  /**< 0012: Port Data Input Register                                     */
         __I  uint8_t   PDIRD;                  /**< 0013: Port Data Input Register                                     */
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  PDDR;                      /**< 0014: Port Data Direction Register                                 */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __IO uint8_t   PDDRA;                  /**< 0014: Port Data Direction Register                                 */
         __IO uint8_t   PDDRB;                  /**< 0015: Port Data Direction Register                                 */
         __IO uint8_t   PDDRC;                  /**< 0016: Port Data Direction Register                                 */
         __IO uint8_t   PDDRD;                  /**< 0017: Port Data Direction Register                                 */
      };
   };
   union {                                      /**< 0000: (size=0004)                                                  */
      __IO uint32_t  PIDR;                      /**< 0018: Port Input Disable Register                                  */
      struct {                                  /**< 0000: (size=0004)                                                  */
         __IO uint8_t   PIDRA;                  /**< 0018: Port Input Disable Register                                  */
         __IO uint8_t   PIDRB;                  /**< 0019: Port Input Disable Register                                  */
         __IO uint8_t   PIDRC;                  /**< 001A: Port Input Disable Register                                  */
         __IO uint8_t   PIDRD;                  /**< 001B: Port Input Disable Register                                  */
      };
   };
} GPIO_Type;

/**
 * @} */ /* End group FGPIOA_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FGPIOA' Position & Mask macros                      ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FGPIOA_Register_Masks_GROUP FGPIOA Register Masks
* @brief Register Masks for FGPIOA
* @{
*/
/* ------- PDOR Bit Fields                          ------ */
/* ------- PDORA Bit Fields                         ------ */
/* ------- PSOR Bit Fields                          ------ */
/* ------- PSORA Bit Fields                         ------ */
/* ------- PCOR Bit Fields                          ------ */
/* ------- PCORA Bit Fields                         ------ */
/* ------- PTOR Bit Fields                          ------ */
/* ------- PTORA Bit Fields                         ------ */
/* ------- PDIR Bit Fields                          ------ */
/* ------- PDIRA Bit Fields                         ------ */
/* ------- PDDR Bit Fields                          ------ */
/* ------- PDDRA Bit Fields                         ------ */
/* ------- PIDR Bit Fields                          ------ */
/* ------- PIDRA Bit Fields                         ------ */
/**
 * @} */ /* End group FGPIOA_Register_Masks_GROUP 
 */

/* FGPIOA - Peripheral instance base addresses */
#define FGPIOA_BasePtr                 0xF8000000UL //!< Peripheral base address
#define FGPIOA                         ((GPIO_Type *) FGPIOA_BasePtr) //!< Freescale base pointer
#define FGPIOA_BASE_PTR                (FGPIOA) //!< Freescale style base pointer
/**
 * @} */ /* End group FGPIOA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTM_Peripheral_access_layer_GROUP FTM Peripheral Access Layer
* @brief C Struct for FTM
* @{
*/

/* ================================================================================ */
/* ================           FTM0 (file:FTM0_2CH_MKE)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (2 channels)
 */
/**
* @addtogroup FTM_structs_GROUP FTM struct
* @brief Struct for FTM
* @{
*/
typedef struct {                                /*       FTM0 Structure                                               */
   __IO uint32_t  SC;                           /**< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /**< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /**< 0008: Modulo                                                       */
   struct {
      __IO uint32_t  CnSC;                      /**< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /**< 0010: Channel  Value                                               */
   } CONTROLS[2];                               /**< 000C: (cluster: size=0x0010, 16)                                   */
   __I  uint32_t  RESERVED0[12];               
   __IO uint32_t  CNTIN;                        /**< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /**< 0050: Capture and Compare Status                                   */
   __IO uint32_t  MODE;                         /**< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /**< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /**< 005C: Initial State for Channels Output                            */
   __IO uint32_t  OUTMASK;                      /**< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /**< 0064: Function for Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /**< 0068: Deadtime Insertion Control                                   */
   __IO uint32_t  EXTTRIG;                      /**< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /**< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /**< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /**< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /**< 007C: Fault Control                                                */
   __I  uint32_t  RESERVED1;                   
   __IO uint32_t  CONF;                         /**< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /**< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /**< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /**< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /**< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /**< 0098: FTM PWM Load                                                 */
} FTM_2CH_Type;

/**
 * @} */ /* End group FTM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTM0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FTM_Register_Masks_GROUP FTM Register Masks
* @brief Register Masks for FTM
* @{
*/
/* ------- SC Bit Fields                            ------ */
#define FTM_SC_PS_MASK                           (0x07UL << FTM_SC_PS_SHIFT)                         /*!< FTM0_SC: PS Mask                        */
#define FTM_SC_PS_SHIFT                          0                                                   /*!< FTM0_SC: PS Position                    */
#define FTM_SC_PS(x)                             (((uint32_t)(((uint32_t)(x))<<FTM_SC_PS_SHIFT))&FTM_SC_PS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_CLKS_MASK                         (0x03UL << FTM_SC_CLKS_SHIFT)                       /*!< FTM0_SC: CLKS Mask                      */
#define FTM_SC_CLKS_SHIFT                        3                                                   /*!< FTM0_SC: CLKS Position                  */
#define FTM_SC_CLKS(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_CLKS_SHIFT))&FTM_SC_CLKS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_CPWMS_MASK                        (0x01UL << FTM_SC_CPWMS_SHIFT)                      /*!< FTM0_SC: CPWMS Mask                     */
#define FTM_SC_CPWMS_SHIFT                       5                                                   /*!< FTM0_SC: CPWMS Position                 */
#define FTM_SC_CPWMS(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_SC_CPWMS_SHIFT))&FTM_SC_CPWMS_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_TOIE_MASK                         (0x01UL << FTM_SC_TOIE_SHIFT)                       /*!< FTM0_SC: TOIE Mask                      */
#define FTM_SC_TOIE_SHIFT                        6                                                   /*!< FTM0_SC: TOIE Position                  */
#define FTM_SC_TOIE(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_SC_TOIE_SHIFT))&FTM_SC_TOIE_MASK) /*!< FTM0_SC                                 */
#define FTM_SC_TOF_MASK                          (0x01UL << FTM_SC_TOF_SHIFT)                        /*!< FTM0_SC: TOF Mask                       */
#define FTM_SC_TOF_SHIFT                         7                                                   /*!< FTM0_SC: TOF Position                   */
#define FTM_SC_TOF(x)                            (((uint32_t)(((uint32_t)(x))<<FTM_SC_TOF_SHIFT))&FTM_SC_TOF_MASK) /*!< FTM0_SC                                 */
/* ------- CNT Bit Fields                           ------ */
#define FTM_CNT_COUNT_MASK                       (0xFFFFUL << FTM_CNT_COUNT_SHIFT)                   /*!< FTM0_CNT: COUNT Mask                    */
#define FTM_CNT_COUNT_SHIFT                      0                                                   /*!< FTM0_CNT: COUNT Position                */
#define FTM_CNT_COUNT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CNT_COUNT_SHIFT))&FTM_CNT_COUNT_MASK) /*!< FTM0_CNT                                */
/* ------- MOD Bit Fields                           ------ */
#define FTM_MOD_MOD_MASK                         (0xFFFFUL << FTM_MOD_MOD_SHIFT)                     /*!< FTM0_MOD: MOD Mask                      */
#define FTM_MOD_MOD_SHIFT                        0                                                   /*!< FTM0_MOD: MOD Position                  */
#define FTM_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_MOD_MOD_SHIFT))&FTM_MOD_MOD_MASK) /*!< FTM0_MOD                                */
/* ------- CnSC Bit Fields                          ------ */
#define FTM_CnSC_ELS_MASK                        (0x03UL << FTM_CnSC_ELS_SHIFT)                      /*!< FTM0_CnSC: ELS Mask                     */
#define FTM_CnSC_ELS_SHIFT                       2                                                   /*!< FTM0_CnSC: ELS Position                 */
#define FTM_CnSC_ELS(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELS_SHIFT))&FTM_CnSC_ELS_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_ELSA_MASK                       (0x01UL << FTM_CnSC_ELSA_SHIFT)                     /*!< FTM0_CnSC: ELSA Mask                    */
#define FTM_CnSC_ELSA_SHIFT                      2                                                   /*!< FTM0_CnSC: ELSA Position                */
#define FTM_CnSC_ELSA(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELSA_SHIFT))&FTM_CnSC_ELSA_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_ELSB_MASK                       (0x01UL << FTM_CnSC_ELSB_SHIFT)                     /*!< FTM0_CnSC: ELSB Mask                    */
#define FTM_CnSC_ELSB_SHIFT                      3                                                   /*!< FTM0_CnSC: ELSB Position                */
#define FTM_CnSC_ELSB(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_ELSB_SHIFT))&FTM_CnSC_ELSB_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_MS_MASK                         (0x03UL << FTM_CnSC_MS_SHIFT)                       /*!< FTM0_CnSC: MS Mask                      */
#define FTM_CnSC_MS_SHIFT                        4                                                   /*!< FTM0_CnSC: MS Position                  */
#define FTM_CnSC_MS(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MS_SHIFT))&FTM_CnSC_MS_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_MSA_MASK                        (0x01UL << FTM_CnSC_MSA_SHIFT)                      /*!< FTM0_CnSC: MSA Mask                     */
#define FTM_CnSC_MSA_SHIFT                       4                                                   /*!< FTM0_CnSC: MSA Position                 */
#define FTM_CnSC_MSA(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MSA_SHIFT))&FTM_CnSC_MSA_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_MSB_MASK                        (0x01UL << FTM_CnSC_MSB_SHIFT)                      /*!< FTM0_CnSC: MSB Mask                     */
#define FTM_CnSC_MSB_SHIFT                       5                                                   /*!< FTM0_CnSC: MSB Position                 */
#define FTM_CnSC_MSB(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_MSB_SHIFT))&FTM_CnSC_MSB_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_CHIE_MASK                       (0x01UL << FTM_CnSC_CHIE_SHIFT)                     /*!< FTM0_CnSC: CHIE Mask                    */
#define FTM_CnSC_CHIE_SHIFT                      6                                                   /*!< FTM0_CnSC: CHIE Position                */
#define FTM_CnSC_CHIE(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHIE_SHIFT))&FTM_CnSC_CHIE_MASK) /*!< FTM0_CnSC                               */
#define FTM_CnSC_CHF_MASK                        (0x01UL << FTM_CnSC_CHF_SHIFT)                      /*!< FTM0_CnSC: CHF Mask                     */
#define FTM_CnSC_CHF_SHIFT                       7                                                   /*!< FTM0_CnSC: CHF Position                 */
#define FTM_CnSC_CHF(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_CnSC_CHF_SHIFT))&FTM_CnSC_CHF_MASK) /*!< FTM0_CnSC                               */
/* ------- CnV Bit Fields                           ------ */
#define FTM_CnV_VAL_MASK                         (0xFFFFUL << FTM_CnV_VAL_SHIFT)                     /*!< FTM0_CnV: VAL Mask                      */
#define FTM_CnV_VAL_SHIFT                        0                                                   /*!< FTM0_CnV: VAL Position                  */
#define FTM_CnV_VAL(x)                           (((uint32_t)(((uint32_t)(x))<<FTM_CnV_VAL_SHIFT))&FTM_CnV_VAL_MASK) /*!< FTM0_CnV                                */
/* ------- CNTIN Bit Fields                         ------ */
#define FTM_CNTIN_INIT_MASK                      (0xFFFFUL << FTM_CNTIN_INIT_SHIFT)                  /*!< FTM0_CNTIN: INIT Mask                   */
#define FTM_CNTIN_INIT_SHIFT                     0                                                   /*!< FTM0_CNTIN: INIT Position               */
#define FTM_CNTIN_INIT(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_CNTIN_INIT_SHIFT))&FTM_CNTIN_INIT_MASK) /*!< FTM0_CNTIN                              */
/* ------- STATUS Bit Fields                        ------ */
#define FTM_STATUS_CH0F_MASK                     (0x01UL << FTM_STATUS_CH0F_SHIFT)                   /*!< FTM0_STATUS: CH0F Mask                  */
#define FTM_STATUS_CH0F_SHIFT                    0                                                   /*!< FTM0_STATUS: CH0F Position              */
#define FTM_STATUS_CH0F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH0F_SHIFT))&FTM_STATUS_CH0F_MASK) /*!< FTM0_STATUS                             */
#define FTM_STATUS_CH1F_MASK                     (0x01UL << FTM_STATUS_CH1F_SHIFT)                   /*!< FTM0_STATUS: CH1F Mask                  */
#define FTM_STATUS_CH1F_SHIFT                    1                                                   /*!< FTM0_STATUS: CH1F Position              */
#define FTM_STATUS_CH1F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH1F_SHIFT))&FTM_STATUS_CH1F_MASK) /*!< FTM0_STATUS                             */
/* ------- MODE Bit Fields                          ------ */
#define FTM_MODE_FTMEN_MASK                      (0x01UL << FTM_MODE_FTMEN_SHIFT)                    /*!< FTM0_MODE: FTMEN Mask                   */
#define FTM_MODE_FTMEN_SHIFT                     0                                                   /*!< FTM0_MODE: FTMEN Position               */
#define FTM_MODE_FTMEN(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FTMEN_SHIFT))&FTM_MODE_FTMEN_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_INIT_MASK                       (0x01UL << FTM_MODE_INIT_SHIFT)                     /*!< FTM0_MODE: INIT Mask                    */
#define FTM_MODE_INIT_SHIFT                      1                                                   /*!< FTM0_MODE: INIT Position                */
#define FTM_MODE_INIT(x)                         (((uint32_t)(((uint32_t)(x))<<FTM_MODE_INIT_SHIFT))&FTM_MODE_INIT_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_WPDIS_MASK                      (0x01UL << FTM_MODE_WPDIS_SHIFT)                    /*!< FTM0_MODE: WPDIS Mask                   */
#define FTM_MODE_WPDIS_SHIFT                     2                                                   /*!< FTM0_MODE: WPDIS Position               */
#define FTM_MODE_WPDIS(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_MODE_WPDIS_SHIFT))&FTM_MODE_WPDIS_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_PWMSYNC_MASK                    (0x01UL << FTM_MODE_PWMSYNC_SHIFT)                  /*!< FTM0_MODE: PWMSYNC Mask                 */
#define FTM_MODE_PWMSYNC_SHIFT                   3                                                   /*!< FTM0_MODE: PWMSYNC Position             */
#define FTM_MODE_PWMSYNC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_PWMSYNC_SHIFT))&FTM_MODE_PWMSYNC_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_CAPTEST_MASK                    (0x01UL << FTM_MODE_CAPTEST_SHIFT)                  /*!< FTM0_MODE: CAPTEST Mask                 */
#define FTM_MODE_CAPTEST_SHIFT                   4                                                   /*!< FTM0_MODE: CAPTEST Position             */
#define FTM_MODE_CAPTEST(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_CAPTEST_SHIFT))&FTM_MODE_CAPTEST_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_FAULTM_MASK                     (0x03UL << FTM_MODE_FAULTM_SHIFT)                   /*!< FTM0_MODE: FAULTM Mask                  */
#define FTM_MODE_FAULTM_SHIFT                    5                                                   /*!< FTM0_MODE: FAULTM Position              */
#define FTM_MODE_FAULTM(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTM_SHIFT))&FTM_MODE_FAULTM_MASK) /*!< FTM0_MODE                               */
#define FTM_MODE_FAULTIE_MASK                    (0x01UL << FTM_MODE_FAULTIE_SHIFT)                  /*!< FTM0_MODE: FAULTIE Mask                 */
#define FTM_MODE_FAULTIE_SHIFT                   7                                                   /*!< FTM0_MODE: FAULTIE Position             */
#define FTM_MODE_FAULTIE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_MODE_FAULTIE_SHIFT))&FTM_MODE_FAULTIE_MASK) /*!< FTM0_MODE                               */
/* ------- SYNC Bit Fields                          ------ */
#define FTM_SYNC_CNTMIN_MASK                     (0x01UL << FTM_SYNC_CNTMIN_SHIFT)                   /*!< FTM0_SYNC: CNTMIN Mask                  */
#define FTM_SYNC_CNTMIN_SHIFT                    0                                                   /*!< FTM0_SYNC: CNTMIN Position              */
#define FTM_SYNC_CNTMIN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_CNTMIN_SHIFT))&FTM_SYNC_CNTMIN_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_CNTMAX_MASK                     (0x01UL << FTM_SYNC_CNTMAX_SHIFT)                   /*!< FTM0_SYNC: CNTMAX Mask                  */
#define FTM_SYNC_CNTMAX_SHIFT                    1                                                   /*!< FTM0_SYNC: CNTMAX Position              */
#define FTM_SYNC_CNTMAX(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_CNTMAX_SHIFT))&FTM_SYNC_CNTMAX_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_REINIT_MASK                     (0x01UL << FTM_SYNC_REINIT_SHIFT)                   /*!< FTM0_SYNC: REINIT Mask                  */
#define FTM_SYNC_REINIT_SHIFT                    2                                                   /*!< FTM0_SYNC: REINIT Position              */
#define FTM_SYNC_REINIT(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_REINIT_SHIFT))&FTM_SYNC_REINIT_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_SYNCHOM_MASK                    (0x01UL << FTM_SYNC_SYNCHOM_SHIFT)                  /*!< FTM0_SYNC: SYNCHOM Mask                 */
#define FTM_SYNC_SYNCHOM_SHIFT                   3                                                   /*!< FTM0_SYNC: SYNCHOM Position             */
#define FTM_SYNC_SYNCHOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_SYNCHOM_SHIFT))&FTM_SYNC_SYNCHOM_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_TRIG0_MASK                      (0x01UL << FTM_SYNC_TRIG0_SHIFT)                    /*!< FTM0_SYNC: TRIG0 Mask                   */
#define FTM_SYNC_TRIG0_SHIFT                     4                                                   /*!< FTM0_SYNC: TRIG0 Position               */
#define FTM_SYNC_TRIG0(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG0_SHIFT))&FTM_SYNC_TRIG0_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_TRIG1_MASK                      (0x01UL << FTM_SYNC_TRIG1_SHIFT)                    /*!< FTM0_SYNC: TRIG1 Mask                   */
#define FTM_SYNC_TRIG1_SHIFT                     5                                                   /*!< FTM0_SYNC: TRIG1 Position               */
#define FTM_SYNC_TRIG1(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG1_SHIFT))&FTM_SYNC_TRIG1_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_TRIG2_MASK                      (0x01UL << FTM_SYNC_TRIG2_SHIFT)                    /*!< FTM0_SYNC: TRIG2 Mask                   */
#define FTM_SYNC_TRIG2_SHIFT                     6                                                   /*!< FTM0_SYNC: TRIG2 Position               */
#define FTM_SYNC_TRIG2(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_TRIG2_SHIFT))&FTM_SYNC_TRIG2_MASK) /*!< FTM0_SYNC                               */
#define FTM_SYNC_SWSYNC_MASK                     (0x01UL << FTM_SYNC_SWSYNC_SHIFT)                   /*!< FTM0_SYNC: SWSYNC Mask                  */
#define FTM_SYNC_SWSYNC_SHIFT                    7                                                   /*!< FTM0_SYNC: SWSYNC Position              */
#define FTM_SYNC_SWSYNC(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_SYNC_SWSYNC_SHIFT))&FTM_SYNC_SWSYNC_MASK) /*!< FTM0_SYNC                               */
/* ------- OUTINIT Bit Fields                       ------ */
#define FTM_OUTINIT_CH0OI_MASK                   (0x01UL << FTM_OUTINIT_CH0OI_SHIFT)                 /*!< FTM0_OUTINIT: CH0OI Mask                */
#define FTM_OUTINIT_CH0OI_SHIFT                  0                                                   /*!< FTM0_OUTINIT: CH0OI Position            */
#define FTM_OUTINIT_CH0OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH0OI_SHIFT))&FTM_OUTINIT_CH0OI_MASK) /*!< FTM0_OUTINIT                            */
#define FTM_OUTINIT_CH1OI_MASK                   (0x01UL << FTM_OUTINIT_CH1OI_SHIFT)                 /*!< FTM0_OUTINIT: CH1OI Mask                */
#define FTM_OUTINIT_CH1OI_SHIFT                  1                                                   /*!< FTM0_OUTINIT: CH1OI Position            */
#define FTM_OUTINIT_CH1OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH1OI_SHIFT))&FTM_OUTINIT_CH1OI_MASK) /*!< FTM0_OUTINIT                            */
/* ------- OUTMASK Bit Fields                       ------ */
#define FTM_OUTMASK_CH0OM_MASK                   (0x01UL << FTM_OUTMASK_CH0OM_SHIFT)                 /*!< FTM0_OUTMASK: CH0OM Mask                */
#define FTM_OUTMASK_CH0OM_SHIFT                  0                                                   /*!< FTM0_OUTMASK: CH0OM Position            */
#define FTM_OUTMASK_CH0OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH0OM_SHIFT))&FTM_OUTMASK_CH0OM_MASK) /*!< FTM0_OUTMASK                            */
#define FTM_OUTMASK_CH1OM_MASK                   (0x01UL << FTM_OUTMASK_CH1OM_SHIFT)                 /*!< FTM0_OUTMASK: CH1OM Mask                */
#define FTM_OUTMASK_CH1OM_SHIFT                  1                                                   /*!< FTM0_OUTMASK: CH1OM Position            */
#define FTM_OUTMASK_CH1OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH1OM_SHIFT))&FTM_OUTMASK_CH1OM_MASK) /*!< FTM0_OUTMASK                            */
/* ------- COMBINE Bit Fields                       ------ */
#define FTM_COMBINE_COMBINE0_MASK                (0x01UL << FTM_COMBINE_COMBINE0_SHIFT)              /*!< FTM0_COMBINE: COMBINE0 Mask             */
#define FTM_COMBINE_COMBINE0_SHIFT               0                                                   /*!< FTM0_COMBINE: COMBINE0 Position         */
#define FTM_COMBINE_COMBINE0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE0_SHIFT))&FTM_COMBINE_COMBINE0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_COMP0_MASK                   (0x01UL << FTM_COMBINE_COMP0_SHIFT)                 /*!< FTM0_COMBINE: COMP0 Mask                */
#define FTM_COMBINE_COMP0_SHIFT                  1                                                   /*!< FTM0_COMBINE: COMP0 Position            */
#define FTM_COMBINE_COMP0(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP0_SHIFT))&FTM_COMBINE_COMP0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAPEN0_MASK                (0x01UL << FTM_COMBINE_DECAPEN0_SHIFT)              /*!< FTM0_COMBINE: DECAPEN0 Mask             */
#define FTM_COMBINE_DECAPEN0_SHIFT               2                                                   /*!< FTM0_COMBINE: DECAPEN0 Position         */
#define FTM_COMBINE_DECAPEN0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN0_SHIFT))&FTM_COMBINE_DECAPEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DECAP0_MASK                  (0x01UL << FTM_COMBINE_DECAP0_SHIFT)                /*!< FTM0_COMBINE: DECAP0 Mask               */
#define FTM_COMBINE_DECAP0_SHIFT                 3                                                   /*!< FTM0_COMBINE: DECAP0 Position           */
#define FTM_COMBINE_DECAP0(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP0_SHIFT))&FTM_COMBINE_DECAP0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_DTEN0_MASK                   (0x01UL << FTM_COMBINE_DTEN0_SHIFT)                 /*!< FTM0_COMBINE: DTEN0 Mask                */
#define FTM_COMBINE_DTEN0_SHIFT                  4                                                   /*!< FTM0_COMBINE: DTEN0 Position            */
#define FTM_COMBINE_DTEN0(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN0_SHIFT))&FTM_COMBINE_DTEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_SYNCEN0_MASK                 (0x01UL << FTM_COMBINE_SYNCEN0_SHIFT)               /*!< FTM0_COMBINE: SYNCEN0 Mask              */
#define FTM_COMBINE_SYNCEN0_SHIFT                5                                                   /*!< FTM0_COMBINE: SYNCEN0 Position          */
#define FTM_COMBINE_SYNCEN0(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN0_SHIFT))&FTM_COMBINE_SYNCEN0_MASK) /*!< FTM0_COMBINE                            */
#define FTM_COMBINE_FAULTEN0_MASK                (0x01UL << FTM_COMBINE_FAULTEN0_SHIFT)              /*!< FTM0_COMBINE: FAULTEN0 Mask             */
#define FTM_COMBINE_FAULTEN0_SHIFT               6                                                   /*!< FTM0_COMBINE: FAULTEN0 Position         */
#define FTM_COMBINE_FAULTEN0(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN0_SHIFT))&FTM_COMBINE_FAULTEN0_MASK) /*!< FTM0_COMBINE                            */
/* ------- DEADTIME Bit Fields                      ------ */
#define FTM_DEADTIME_DTVAL_MASK                  (0x3FUL << FTM_DEADTIME_DTVAL_SHIFT)                /*!< FTM0_DEADTIME: DTVAL Mask               */
#define FTM_DEADTIME_DTVAL_SHIFT                 0                                                   /*!< FTM0_DEADTIME: DTVAL Position           */
#define FTM_DEADTIME_DTVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTVAL_SHIFT))&FTM_DEADTIME_DTVAL_MASK) /*!< FTM0_DEADTIME                           */
#define FTM_DEADTIME_DTPS_MASK                   (0x03UL << FTM_DEADTIME_DTPS_SHIFT)                 /*!< FTM0_DEADTIME: DTPS Mask                */
#define FTM_DEADTIME_DTPS_SHIFT                  6                                                   /*!< FTM0_DEADTIME: DTPS Position            */
#define FTM_DEADTIME_DTPS(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_DEADTIME_DTPS_SHIFT))&FTM_DEADTIME_DTPS_MASK) /*!< FTM0_DEADTIME                           */
/* ------- EXTTRIG Bit Fields                       ------ */
#define FTM_EXTTRIG_CH0TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH0TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH0TRIG Mask              */
#define FTM_EXTTRIG_CH0TRIG_SHIFT                4                                                   /*!< FTM0_EXTTRIG: CH0TRIG Position          */
#define FTM_EXTTRIG_CH0TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH0TRIG_SHIFT))&FTM_EXTTRIG_CH0TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_CH1TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH1TRIG_SHIFT)               /*!< FTM0_EXTTRIG: CH1TRIG Mask              */
#define FTM_EXTTRIG_CH1TRIG_SHIFT                5                                                   /*!< FTM0_EXTTRIG: CH1TRIG Position          */
#define FTM_EXTTRIG_CH1TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH1TRIG_SHIFT))&FTM_EXTTRIG_CH1TRIG_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_INITTRIGEN_MASK              (0x01UL << FTM_EXTTRIG_INITTRIGEN_SHIFT)            /*!< FTM0_EXTTRIG: INITTRIGEN Mask           */
#define FTM_EXTTRIG_INITTRIGEN_SHIFT             6                                                   /*!< FTM0_EXTTRIG: INITTRIGEN Position       */
#define FTM_EXTTRIG_INITTRIGEN(x)                (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_INITTRIGEN_SHIFT))&FTM_EXTTRIG_INITTRIGEN_MASK) /*!< FTM0_EXTTRIG                            */
#define FTM_EXTTRIG_TRIGF_MASK                   (0x01UL << FTM_EXTTRIG_TRIGF_SHIFT)                 /*!< FTM0_EXTTRIG: TRIGF Mask                */
#define FTM_EXTTRIG_TRIGF_SHIFT                  7                                                   /*!< FTM0_EXTTRIG: TRIGF Position            */
#define FTM_EXTTRIG_TRIGF(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_TRIGF_SHIFT))&FTM_EXTTRIG_TRIGF_MASK) /*!< FTM0_EXTTRIG                            */
/* ------- POL Bit Fields                           ------ */
#define FTM_POL_POL0_MASK                        (0x01UL << FTM_POL_POL0_SHIFT)                      /*!< FTM0_POL: POL0 Mask                     */
#define FTM_POL_POL0_SHIFT                       0                                                   /*!< FTM0_POL: POL0 Position                 */
#define FTM_POL_POL0(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL0_SHIFT))&FTM_POL_POL0_MASK) /*!< FTM0_POL                                */
#define FTM_POL_POL1_MASK                        (0x01UL << FTM_POL_POL1_SHIFT)                      /*!< FTM0_POL: POL1 Mask                     */
#define FTM_POL_POL1_SHIFT                       1                                                   /*!< FTM0_POL: POL1 Position                 */
#define FTM_POL_POL1(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL1_SHIFT))&FTM_POL_POL1_MASK) /*!< FTM0_POL                                */
/* ------- FMS Bit Fields                           ------ */
#define FTM_FMS_FAULTF0_MASK                     (0x01UL << FTM_FMS_FAULTF0_SHIFT)                   /*!< FTM0_FMS: FAULTF0 Mask                  */
#define FTM_FMS_FAULTF0_SHIFT                    0                                                   /*!< FTM0_FMS: FAULTF0 Position              */
#define FTM_FMS_FAULTF0(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF0_SHIFT))&FTM_FMS_FAULTF0_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF1_MASK                     (0x01UL << FTM_FMS_FAULTF1_SHIFT)                   /*!< FTM0_FMS: FAULTF1 Mask                  */
#define FTM_FMS_FAULTF1_SHIFT                    1                                                   /*!< FTM0_FMS: FAULTF1 Position              */
#define FTM_FMS_FAULTF1(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF1_SHIFT))&FTM_FMS_FAULTF1_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF2_MASK                     (0x01UL << FTM_FMS_FAULTF2_SHIFT)                   /*!< FTM0_FMS: FAULTF2 Mask                  */
#define FTM_FMS_FAULTF2_SHIFT                    2                                                   /*!< FTM0_FMS: FAULTF2 Position              */
#define FTM_FMS_FAULTF2(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF2_SHIFT))&FTM_FMS_FAULTF2_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF3_MASK                     (0x01UL << FTM_FMS_FAULTF3_SHIFT)                   /*!< FTM0_FMS: FAULTF3 Mask                  */
#define FTM_FMS_FAULTF3_SHIFT                    3                                                   /*!< FTM0_FMS: FAULTF3 Position              */
#define FTM_FMS_FAULTF3(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF3_SHIFT))&FTM_FMS_FAULTF3_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTIN_MASK                     (0x01UL << FTM_FMS_FAULTIN_SHIFT)                   /*!< FTM0_FMS: FAULTIN Mask                  */
#define FTM_FMS_FAULTIN_SHIFT                    5                                                   /*!< FTM0_FMS: FAULTIN Position              */
#define FTM_FMS_FAULTIN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTIN_SHIFT))&FTM_FMS_FAULTIN_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_WPEN_MASK                        (0x01UL << FTM_FMS_WPEN_SHIFT)                      /*!< FTM0_FMS: WPEN Mask                     */
#define FTM_FMS_WPEN_SHIFT                       6                                                   /*!< FTM0_FMS: WPEN Position                 */
#define FTM_FMS_WPEN(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_FMS_WPEN_SHIFT))&FTM_FMS_WPEN_MASK) /*!< FTM0_FMS                                */
#define FTM_FMS_FAULTF_MASK                      (0x01UL << FTM_FMS_FAULTF_SHIFT)                    /*!< FTM0_FMS: FAULTF Mask                   */
#define FTM_FMS_FAULTF_SHIFT                     7                                                   /*!< FTM0_FMS: FAULTF Position               */
#define FTM_FMS_FAULTF(x)                        (((uint32_t)(((uint32_t)(x))<<FTM_FMS_FAULTF_SHIFT))&FTM_FMS_FAULTF_MASK) /*!< FTM0_FMS                                */
/* ------- FILTER Bit Fields                        ------ */
#define FTM_FILTER_CH0FVAL_MASK                  (0x0FUL << FTM_FILTER_CH0FVAL_SHIFT)                /*!< FTM0_FILTER: CH0FVAL Mask               */
#define FTM_FILTER_CH0FVAL_SHIFT                 0                                                   /*!< FTM0_FILTER: CH0FVAL Position           */
#define FTM_FILTER_CH0FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH0FVAL_SHIFT))&FTM_FILTER_CH0FVAL_MASK) /*!< FTM0_FILTER                             */
#define FTM_FILTER_CH1FVAL_MASK                  (0x0FUL << FTM_FILTER_CH1FVAL_SHIFT)                /*!< FTM0_FILTER: CH1FVAL Mask               */
#define FTM_FILTER_CH1FVAL_SHIFT                 4                                                   /*!< FTM0_FILTER: CH1FVAL Position           */
#define FTM_FILTER_CH1FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH1FVAL_SHIFT))&FTM_FILTER_CH1FVAL_MASK) /*!< FTM0_FILTER                             */
/* ------- FLTCTRL Bit Fields                       ------ */
#define FTM_FLTCTRL_FAULT0EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT0EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT0EN Mask             */
#define FTM_FLTCTRL_FAULT0EN_SHIFT               0                                                   /*!< FTM0_FLTCTRL: FAULT0EN Position         */
#define FTM_FLTCTRL_FAULT0EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT0EN_SHIFT))&FTM_FLTCTRL_FAULT0EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FAULT1EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT1EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT1EN Mask             */
#define FTM_FLTCTRL_FAULT1EN_SHIFT               1                                                   /*!< FTM0_FLTCTRL: FAULT1EN Position         */
#define FTM_FLTCTRL_FAULT1EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT1EN_SHIFT))&FTM_FLTCTRL_FAULT1EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FAULT2EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT2EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT2EN Mask             */
#define FTM_FLTCTRL_FAULT2EN_SHIFT               2                                                   /*!< FTM0_FLTCTRL: FAULT2EN Position         */
#define FTM_FLTCTRL_FAULT2EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT2EN_SHIFT))&FTM_FLTCTRL_FAULT2EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FAULT3EN_MASK                (0x01UL << FTM_FLTCTRL_FAULT3EN_SHIFT)              /*!< FTM0_FLTCTRL: FAULT3EN Mask             */
#define FTM_FLTCTRL_FAULT3EN_SHIFT               3                                                   /*!< FTM0_FLTCTRL: FAULT3EN Position         */
#define FTM_FLTCTRL_FAULT3EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FAULT3EN_SHIFT))&FTM_FLTCTRL_FAULT3EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR0EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR0EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR0EN Mask             */
#define FTM_FLTCTRL_FFLTR0EN_SHIFT               4                                                   /*!< FTM0_FLTCTRL: FFLTR0EN Position         */
#define FTM_FLTCTRL_FFLTR0EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR0EN_SHIFT))&FTM_FLTCTRL_FFLTR0EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR1EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR1EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR1EN Mask             */
#define FTM_FLTCTRL_FFLTR1EN_SHIFT               5                                                   /*!< FTM0_FLTCTRL: FFLTR1EN Position         */
#define FTM_FLTCTRL_FFLTR1EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR1EN_SHIFT))&FTM_FLTCTRL_FFLTR1EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR2EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR2EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR2EN Mask             */
#define FTM_FLTCTRL_FFLTR2EN_SHIFT               6                                                   /*!< FTM0_FLTCTRL: FFLTR2EN Position         */
#define FTM_FLTCTRL_FFLTR2EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR2EN_SHIFT))&FTM_FLTCTRL_FFLTR2EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFLTR3EN_MASK                (0x01UL << FTM_FLTCTRL_FFLTR3EN_SHIFT)              /*!< FTM0_FLTCTRL: FFLTR3EN Mask             */
#define FTM_FLTCTRL_FFLTR3EN_SHIFT               7                                                   /*!< FTM0_FLTCTRL: FFLTR3EN Position         */
#define FTM_FLTCTRL_FFLTR3EN(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFLTR3EN_SHIFT))&FTM_FLTCTRL_FFLTR3EN_MASK) /*!< FTM0_FLTCTRL                            */
#define FTM_FLTCTRL_FFVAL_MASK                   (0x0FUL << FTM_FLTCTRL_FFVAL_SHIFT)                 /*!< FTM0_FLTCTRL: FFVAL Mask                */
#define FTM_FLTCTRL_FFVAL_SHIFT                  8                                                   /*!< FTM0_FLTCTRL: FFVAL Position            */
#define FTM_FLTCTRL_FFVAL(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_FLTCTRL_FFVAL_SHIFT))&FTM_FLTCTRL_FFVAL_MASK) /*!< FTM0_FLTCTRL                            */
/* ------- CONF Bit Fields                          ------ */
#define FTM_CONF_NUMTOF_MASK                     (0x1FUL << FTM_CONF_NUMTOF_SHIFT)                   /*!< FTM0_CONF: NUMTOF Mask                  */
#define FTM_CONF_NUMTOF_SHIFT                    0                                                   /*!< FTM0_CONF: NUMTOF Position              */
#define FTM_CONF_NUMTOF(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_NUMTOF_SHIFT))&FTM_CONF_NUMTOF_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_BDMMODE_MASK                    (0x03UL << FTM_CONF_BDMMODE_SHIFT)                  /*!< FTM0_CONF: BDMMODE Mask                 */
#define FTM_CONF_BDMMODE_SHIFT                   6                                                   /*!< FTM0_CONF: BDMMODE Position             */
#define FTM_CONF_BDMMODE(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_BDMMODE_SHIFT))&FTM_CONF_BDMMODE_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_GTBEEN_MASK                     (0x01UL << FTM_CONF_GTBEEN_SHIFT)                   /*!< FTM0_CONF: GTBEEN Mask                  */
#define FTM_CONF_GTBEEN_SHIFT                    9                                                   /*!< FTM0_CONF: GTBEEN Position              */
#define FTM_CONF_GTBEEN(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_CONF_GTBEEN_SHIFT))&FTM_CONF_GTBEEN_MASK) /*!< FTM0_CONF                               */
#define FTM_CONF_GTBEOUT_MASK                    (0x01UL << FTM_CONF_GTBEOUT_SHIFT)                  /*!< FTM0_CONF: GTBEOUT Mask                 */
#define FTM_CONF_GTBEOUT_SHIFT                   10                                                  /*!< FTM0_CONF: GTBEOUT Position             */
#define FTM_CONF_GTBEOUT(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_CONF_GTBEOUT_SHIFT))&FTM_CONF_GTBEOUT_MASK) /*!< FTM0_CONF                               */
/* ------- FLTPOL Bit Fields                        ------ */
#define FTM_FLTPOL_FLT0POL_MASK                  (0x01UL << FTM_FLTPOL_FLT0POL_SHIFT)                /*!< FTM0_FLTPOL: FLT0POL Mask               */
#define FTM_FLTPOL_FLT0POL_SHIFT                 0                                                   /*!< FTM0_FLTPOL: FLT0POL Position           */
#define FTM_FLTPOL_FLT0POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT0POL_SHIFT))&FTM_FLTPOL_FLT0POL_MASK) /*!< FTM0_FLTPOL                             */
#define FTM_FLTPOL_FLT1POL_MASK                  (0x01UL << FTM_FLTPOL_FLT1POL_SHIFT)                /*!< FTM0_FLTPOL: FLT1POL Mask               */
#define FTM_FLTPOL_FLT1POL_SHIFT                 1                                                   /*!< FTM0_FLTPOL: FLT1POL Position           */
#define FTM_FLTPOL_FLT1POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT1POL_SHIFT))&FTM_FLTPOL_FLT1POL_MASK) /*!< FTM0_FLTPOL                             */
#define FTM_FLTPOL_FLT2POL_MASK                  (0x01UL << FTM_FLTPOL_FLT2POL_SHIFT)                /*!< FTM0_FLTPOL: FLT2POL Mask               */
#define FTM_FLTPOL_FLT2POL_SHIFT                 2                                                   /*!< FTM0_FLTPOL: FLT2POL Position           */
#define FTM_FLTPOL_FLT2POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT2POL_SHIFT))&FTM_FLTPOL_FLT2POL_MASK) /*!< FTM0_FLTPOL                             */
#define FTM_FLTPOL_FLT3POL_MASK                  (0x01UL << FTM_FLTPOL_FLT3POL_SHIFT)                /*!< FTM0_FLTPOL: FLT3POL Mask               */
#define FTM_FLTPOL_FLT3POL_SHIFT                 3                                                   /*!< FTM0_FLTPOL: FLT3POL Position           */
#define FTM_FLTPOL_FLT3POL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FLTPOL_FLT3POL_SHIFT))&FTM_FLTPOL_FLT3POL_MASK) /*!< FTM0_FLTPOL                             */
/* ------- SYNCONF Bit Fields                       ------ */
#define FTM_SYNCONF_HWTRIGMODE_MASK              (0x01UL << FTM_SYNCONF_HWTRIGMODE_SHIFT)            /*!< FTM0_SYNCONF: HWTRIGMODE Mask           */
#define FTM_SYNCONF_HWTRIGMODE_SHIFT             0                                                   /*!< FTM0_SYNCONF: HWTRIGMODE Position       */
#define FTM_SYNCONF_HWTRIGMODE(x)                (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWTRIGMODE_SHIFT))&FTM_SYNCONF_HWTRIGMODE_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_CNTINC_MASK                  (0x01UL << FTM_SYNCONF_CNTINC_SHIFT)                /*!< FTM0_SYNCONF: CNTINC Mask               */
#define FTM_SYNCONF_CNTINC_SHIFT                 2                                                   /*!< FTM0_SYNCONF: CNTINC Position           */
#define FTM_SYNCONF_CNTINC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_CNTINC_SHIFT))&FTM_SYNCONF_CNTINC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_INVC_MASK                    (0x01UL << FTM_SYNCONF_INVC_SHIFT)                  /*!< FTM0_SYNCONF: INVC Mask                 */
#define FTM_SYNCONF_INVC_SHIFT                   4                                                   /*!< FTM0_SYNCONF: INVC Position             */
#define FTM_SYNCONF_INVC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_INVC_SHIFT))&FTM_SYNCONF_INVC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWOC_MASK                    (0x01UL << FTM_SYNCONF_SWOC_SHIFT)                  /*!< FTM0_SYNCONF: SWOC Mask                 */
#define FTM_SYNCONF_SWOC_SHIFT                   5                                                   /*!< FTM0_SYNCONF: SWOC Position             */
#define FTM_SYNCONF_SWOC(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWOC_SHIFT))&FTM_SYNCONF_SWOC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SYNCMODE_MASK                (0x01UL << FTM_SYNCONF_SYNCMODE_SHIFT)              /*!< FTM0_SYNCONF: SYNCMODE Mask             */
#define FTM_SYNCONF_SYNCMODE_SHIFT               7                                                   /*!< FTM0_SYNCONF: SYNCMODE Position         */
#define FTM_SYNCONF_SYNCMODE(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SYNCMODE_SHIFT))&FTM_SYNCONF_SYNCMODE_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWRSTCNT_MASK                (0x01UL << FTM_SYNCONF_SWRSTCNT_SHIFT)              /*!< FTM0_SYNCONF: SWRSTCNT Mask             */
#define FTM_SYNCONF_SWRSTCNT_SHIFT               8                                                   /*!< FTM0_SYNCONF: SWRSTCNT Position         */
#define FTM_SYNCONF_SWRSTCNT(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWRSTCNT_SHIFT))&FTM_SYNCONF_SWRSTCNT_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWWRBUF_MASK                 (0x01UL << FTM_SYNCONF_SWWRBUF_SHIFT)               /*!< FTM0_SYNCONF: SWWRBUF Mask              */
#define FTM_SYNCONF_SWWRBUF_SHIFT                9                                                   /*!< FTM0_SYNCONF: SWWRBUF Position          */
#define FTM_SYNCONF_SWWRBUF(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWWRBUF_SHIFT))&FTM_SYNCONF_SWWRBUF_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWOM_MASK                    (0x01UL << FTM_SYNCONF_SWOM_SHIFT)                  /*!< FTM0_SYNCONF: SWOM Mask                 */
#define FTM_SYNCONF_SWOM_SHIFT                   10                                                  /*!< FTM0_SYNCONF: SWOM Position             */
#define FTM_SYNCONF_SWOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWOM_SHIFT))&FTM_SYNCONF_SWOM_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWINVC_MASK                  (0x01UL << FTM_SYNCONF_SWINVC_SHIFT)                /*!< FTM0_SYNCONF: SWINVC Mask               */
#define FTM_SYNCONF_SWINVC_SHIFT                 11                                                  /*!< FTM0_SYNCONF: SWINVC Position           */
#define FTM_SYNCONF_SWINVC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWINVC_SHIFT))&FTM_SYNCONF_SWINVC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_SWSOC_MASK                   (0x01UL << FTM_SYNCONF_SWSOC_SHIFT)                 /*!< FTM0_SYNCONF: SWSOC Mask                */
#define FTM_SYNCONF_SWSOC_SHIFT                  12                                                  /*!< FTM0_SYNCONF: SWSOC Position            */
#define FTM_SYNCONF_SWSOC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_SWSOC_SHIFT))&FTM_SYNCONF_SWSOC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWRSTCNT_MASK                (0x01UL << FTM_SYNCONF_HWRSTCNT_SHIFT)              /*!< FTM0_SYNCONF: HWRSTCNT Mask             */
#define FTM_SYNCONF_HWRSTCNT_SHIFT               16                                                  /*!< FTM0_SYNCONF: HWRSTCNT Position         */
#define FTM_SYNCONF_HWRSTCNT(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWRSTCNT_SHIFT))&FTM_SYNCONF_HWRSTCNT_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWWRBUF_MASK                 (0x01UL << FTM_SYNCONF_HWWRBUF_SHIFT)               /*!< FTM0_SYNCONF: HWWRBUF Mask              */
#define FTM_SYNCONF_HWWRBUF_SHIFT                17                                                  /*!< FTM0_SYNCONF: HWWRBUF Position          */
#define FTM_SYNCONF_HWWRBUF(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWWRBUF_SHIFT))&FTM_SYNCONF_HWWRBUF_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWOM_MASK                    (0x01UL << FTM_SYNCONF_HWOM_SHIFT)                  /*!< FTM0_SYNCONF: HWOM Mask                 */
#define FTM_SYNCONF_HWOM_SHIFT                   18                                                  /*!< FTM0_SYNCONF: HWOM Position             */
#define FTM_SYNCONF_HWOM(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWOM_SHIFT))&FTM_SYNCONF_HWOM_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWINVC_MASK                  (0x01UL << FTM_SYNCONF_HWINVC_SHIFT)                /*!< FTM0_SYNCONF: HWINVC Mask               */
#define FTM_SYNCONF_HWINVC_SHIFT                 19                                                  /*!< FTM0_SYNCONF: HWINVC Position           */
#define FTM_SYNCONF_HWINVC(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWINVC_SHIFT))&FTM_SYNCONF_HWINVC_MASK) /*!< FTM0_SYNCONF                            */
#define FTM_SYNCONF_HWSOC_MASK                   (0x01UL << FTM_SYNCONF_HWSOC_SHIFT)                 /*!< FTM0_SYNCONF: HWSOC Mask                */
#define FTM_SYNCONF_HWSOC_SHIFT                  20                                                  /*!< FTM0_SYNCONF: HWSOC Position            */
#define FTM_SYNCONF_HWSOC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SYNCONF_HWSOC_SHIFT))&FTM_SYNCONF_HWSOC_MASK) /*!< FTM0_SYNCONF                            */
/* ------- INVCTRL Bit Fields                       ------ */
#define FTM_INVCTRL_INV0EN_MASK                  (0x01UL << FTM_INVCTRL_INV0EN_SHIFT)                /*!< FTM0_INVCTRL: INV0EN Mask               */
#define FTM_INVCTRL_INV0EN_SHIFT                 0                                                   /*!< FTM0_INVCTRL: INV0EN Position           */
#define FTM_INVCTRL_INV0EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV0EN_SHIFT))&FTM_INVCTRL_INV0EN_MASK) /*!< FTM0_INVCTRL                            */
/* ------- SWOCTRL Bit Fields                       ------ */
#define FTM_SWOCTRL_CH0OC_MASK                   (0x01UL << FTM_SWOCTRL_CH0OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH0OC Mask                */
#define FTM_SWOCTRL_CH0OC_SHIFT                  0                                                   /*!< FTM0_SWOCTRL: CH0OC Position            */
#define FTM_SWOCTRL_CH0OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH0OC_SHIFT))&FTM_SWOCTRL_CH0OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH1OC_MASK                   (0x01UL << FTM_SWOCTRL_CH1OC_SHIFT)                 /*!< FTM0_SWOCTRL: CH1OC Mask                */
#define FTM_SWOCTRL_CH1OC_SHIFT                  1                                                   /*!< FTM0_SWOCTRL: CH1OC Position            */
#define FTM_SWOCTRL_CH1OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH1OC_SHIFT))&FTM_SWOCTRL_CH1OC_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH0OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH0OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH0OCV Mask               */
#define FTM_SWOCTRL_CH0OCV_SHIFT                 8                                                   /*!< FTM0_SWOCTRL: CH0OCV Position           */
#define FTM_SWOCTRL_CH0OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH0OCV_SHIFT))&FTM_SWOCTRL_CH0OCV_MASK) /*!< FTM0_SWOCTRL                            */
#define FTM_SWOCTRL_CH1OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH1OCV_SHIFT)                /*!< FTM0_SWOCTRL: CH1OCV Mask               */
#define FTM_SWOCTRL_CH1OCV_SHIFT                 9                                                   /*!< FTM0_SWOCTRL: CH1OCV Position           */
#define FTM_SWOCTRL_CH1OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH1OCV_SHIFT))&FTM_SWOCTRL_CH1OCV_MASK) /*!< FTM0_SWOCTRL                            */
/* ------- PWMLOAD Bit Fields                       ------ */
#define FTM_PWMLOAD_CH0SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH0SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH0SEL Mask               */
#define FTM_PWMLOAD_CH0SEL_SHIFT                 0                                                   /*!< FTM0_PWMLOAD: CH0SEL Position           */
#define FTM_PWMLOAD_CH0SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH0SEL_SHIFT))&FTM_PWMLOAD_CH0SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_CH1SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH1SEL_SHIFT)                /*!< FTM0_PWMLOAD: CH1SEL Mask               */
#define FTM_PWMLOAD_CH1SEL_SHIFT                 1                                                   /*!< FTM0_PWMLOAD: CH1SEL Position           */
#define FTM_PWMLOAD_CH1SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH1SEL_SHIFT))&FTM_PWMLOAD_CH1SEL_MASK) /*!< FTM0_PWMLOAD                            */
#define FTM_PWMLOAD_LDOK_MASK                    (0x01UL << FTM_PWMLOAD_LDOK_SHIFT)                  /*!< FTM0_PWMLOAD: LDOK Mask                 */
#define FTM_PWMLOAD_LDOK_SHIFT                   9                                                   /*!< FTM0_PWMLOAD: LDOK Position             */
#define FTM_PWMLOAD_LDOK(x)                      (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_LDOK_SHIFT))&FTM_PWMLOAD_LDOK_MASK) /*!< FTM0_PWMLOAD                            */
/**
 * @} */ /* End group FTM_Register_Masks_GROUP 
 */

/* FTM0 - Peripheral instance base addresses */
#define FTM0_BasePtr                   0x40038000UL //!< Peripheral base address
#define FTM0                           ((FTM_2CH_Type *) FTM0_BasePtr) //!< Freescale base pointer
#define FTM0_BASE_PTR                  (FTM0) //!< Freescale style base pointer
/**
 * @} */ /* End group FTM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTM_Peripheral_access_layer_GROUP FTM Peripheral Access Layer
* @brief C Struct for FTM
* @{
*/

/* ================================================================================ */
/* ================           FTM2 (file:FTM2_6CH_MKE)             ================ */
/* ================================================================================ */

/**
 * @brief FlexTimer Module (6 channels)
 */
/**
* @addtogroup FTM_structs_GROUP FTM struct
* @brief Struct for FTM
* @{
*/
typedef struct {                                /*       FTM2 Structure                                               */
   __IO uint32_t  SC;                           /**< 0000: Status and Control                                           */
   __IO uint32_t  CNT;                          /**< 0004: Counter                                                      */
   __IO uint32_t  MOD;                          /**< 0008: Modulo                                                       */
   struct {
      __IO uint32_t  CnSC;                      /**< 000C: Channel  Status and Control                                  */
      __IO uint32_t  CnV;                       /**< 0010: Channel  Value                                               */
   } CONTROLS[6];                               /**< 000C: (cluster: size=0x0030, 48)                                   */
   __I  uint32_t  RESERVED0[4];                
   __IO uint32_t  CNTIN;                        /**< 004C: Counter Initial Value                                        */
   __IO uint32_t  STATUS;                       /**< 0050: Capture and Compare Status                                   */
   __IO uint32_t  MODE;                         /**< 0054: Features Mode Selection                                      */
   __IO uint32_t  SYNC;                         /**< 0058: Synchronization                                              */
   __IO uint32_t  OUTINIT;                      /**< 005C: Initial State for Channels Output                            */
   __IO uint32_t  OUTMASK;                      /**< 0060: Output Mask                                                  */
   __IO uint32_t  COMBINE;                      /**< 0064: Function for Linked Channels                                 */
   __IO uint32_t  DEADTIME;                     /**< 0068: Deadtime Insertion Control                                   */
   __IO uint32_t  EXTTRIG;                      /**< 006C: FTM External Trigger                                         */
   __IO uint32_t  POL;                          /**< 0070: Channels Polarity                                            */
   __IO uint32_t  FMS;                          /**< 0074: Fault Mode Status                                            */
   __IO uint32_t  FILTER;                       /**< 0078: Input Capture Filter Control                                 */
   __IO uint32_t  FLTCTRL;                      /**< 007C: Fault Control                                                */
   __I  uint32_t  RESERVED1;                   
   __IO uint32_t  CONF;                         /**< 0084: Configuration                                                */
   __IO uint32_t  FLTPOL;                       /**< 0088: FTM Fault Input Polarity                                     */
   __IO uint32_t  SYNCONF;                      /**< 008C: Synchronization Configuration                                */
   __IO uint32_t  INVCTRL;                      /**< 0090: FTM Inverting Control                                        */
   __IO uint32_t  SWOCTRL;                      /**< 0094: FTM Software Output Control                                  */
   __IO uint32_t  PWMLOAD;                      /**< 0098: FTM PWM Load                                                 */
} FTM_Type;

/**
 * @} */ /* End group FTM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTM2' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FTM_Register_Masks_GROUP FTM Register Masks
* @brief Register Masks for FTM
* @{
*/
/* ------- SC Bit Fields                            ------ */
/* ------- CNT Bit Fields                           ------ */
/* ------- MOD Bit Fields                           ------ */
/* ------- CnSC Bit Fields                          ------ */
/* ------- CnV Bit Fields                           ------ */
/* ------- CNTIN Bit Fields                         ------ */
/* ------- STATUS Bit Fields                        ------ */
#define FTM_STATUS_CH2F_MASK                     (0x01UL << FTM_STATUS_CH2F_SHIFT)                   /*!< FTM2_STATUS: CH2F Mask                  */
#define FTM_STATUS_CH2F_SHIFT                    2                                                   /*!< FTM2_STATUS: CH2F Position              */
#define FTM_STATUS_CH2F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH2F_SHIFT))&FTM_STATUS_CH2F_MASK) /*!< FTM2_STATUS                             */
#define FTM_STATUS_CH3F_MASK                     (0x01UL << FTM_STATUS_CH3F_SHIFT)                   /*!< FTM2_STATUS: CH3F Mask                  */
#define FTM_STATUS_CH3F_SHIFT                    3                                                   /*!< FTM2_STATUS: CH3F Position              */
#define FTM_STATUS_CH3F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH3F_SHIFT))&FTM_STATUS_CH3F_MASK) /*!< FTM2_STATUS                             */
#define FTM_STATUS_CH4F_MASK                     (0x01UL << FTM_STATUS_CH4F_SHIFT)                   /*!< FTM2_STATUS: CH4F Mask                  */
#define FTM_STATUS_CH4F_SHIFT                    4                                                   /*!< FTM2_STATUS: CH4F Position              */
#define FTM_STATUS_CH4F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH4F_SHIFT))&FTM_STATUS_CH4F_MASK) /*!< FTM2_STATUS                             */
#define FTM_STATUS_CH5F_MASK                     (0x01UL << FTM_STATUS_CH5F_SHIFT)                   /*!< FTM2_STATUS: CH5F Mask                  */
#define FTM_STATUS_CH5F_SHIFT                    5                                                   /*!< FTM2_STATUS: CH5F Position              */
#define FTM_STATUS_CH5F(x)                       (((uint32_t)(((uint32_t)(x))<<FTM_STATUS_CH5F_SHIFT))&FTM_STATUS_CH5F_MASK) /*!< FTM2_STATUS                             */
/* ------- MODE Bit Fields                          ------ */
/* ------- SYNC Bit Fields                          ------ */
/* ------- OUTINIT Bit Fields                       ------ */
#define FTM_OUTINIT_CH2OI_MASK                   (0x01UL << FTM_OUTINIT_CH2OI_SHIFT)                 /*!< FTM2_OUTINIT: CH2OI Mask                */
#define FTM_OUTINIT_CH2OI_SHIFT                  2                                                   /*!< FTM2_OUTINIT: CH2OI Position            */
#define FTM_OUTINIT_CH2OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH2OI_SHIFT))&FTM_OUTINIT_CH2OI_MASK) /*!< FTM2_OUTINIT                            */
#define FTM_OUTINIT_CH3OI_MASK                   (0x01UL << FTM_OUTINIT_CH3OI_SHIFT)                 /*!< FTM2_OUTINIT: CH3OI Mask                */
#define FTM_OUTINIT_CH3OI_SHIFT                  3                                                   /*!< FTM2_OUTINIT: CH3OI Position            */
#define FTM_OUTINIT_CH3OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH3OI_SHIFT))&FTM_OUTINIT_CH3OI_MASK) /*!< FTM2_OUTINIT                            */
#define FTM_OUTINIT_CH4OI_MASK                   (0x01UL << FTM_OUTINIT_CH4OI_SHIFT)                 /*!< FTM2_OUTINIT: CH4OI Mask                */
#define FTM_OUTINIT_CH4OI_SHIFT                  4                                                   /*!< FTM2_OUTINIT: CH4OI Position            */
#define FTM_OUTINIT_CH4OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH4OI_SHIFT))&FTM_OUTINIT_CH4OI_MASK) /*!< FTM2_OUTINIT                            */
#define FTM_OUTINIT_CH5OI_MASK                   (0x01UL << FTM_OUTINIT_CH5OI_SHIFT)                 /*!< FTM2_OUTINIT: CH5OI Mask                */
#define FTM_OUTINIT_CH5OI_SHIFT                  5                                                   /*!< FTM2_OUTINIT: CH5OI Position            */
#define FTM_OUTINIT_CH5OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH5OI_SHIFT))&FTM_OUTINIT_CH5OI_MASK) /*!< FTM2_OUTINIT                            */
#define FTM_OUTINIT_CH6OI_MASK                   (0x01UL << FTM_OUTINIT_CH6OI_SHIFT)                 /*!< FTM2_OUTINIT: CH6OI Mask                */
#define FTM_OUTINIT_CH6OI_SHIFT                  6                                                   /*!< FTM2_OUTINIT: CH6OI Position            */
#define FTM_OUTINIT_CH6OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH6OI_SHIFT))&FTM_OUTINIT_CH6OI_MASK) /*!< FTM2_OUTINIT                            */
#define FTM_OUTINIT_CH7OI_MASK                   (0x01UL << FTM_OUTINIT_CH7OI_SHIFT)                 /*!< FTM2_OUTINIT: CH7OI Mask                */
#define FTM_OUTINIT_CH7OI_SHIFT                  7                                                   /*!< FTM2_OUTINIT: CH7OI Position            */
#define FTM_OUTINIT_CH7OI(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTINIT_CH7OI_SHIFT))&FTM_OUTINIT_CH7OI_MASK) /*!< FTM2_OUTINIT                            */
/* ------- OUTMASK Bit Fields                       ------ */
#define FTM_OUTMASK_CH2OM_MASK                   (0x01UL << FTM_OUTMASK_CH2OM_SHIFT)                 /*!< FTM2_OUTMASK: CH2OM Mask                */
#define FTM_OUTMASK_CH2OM_SHIFT                  2                                                   /*!< FTM2_OUTMASK: CH2OM Position            */
#define FTM_OUTMASK_CH2OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH2OM_SHIFT))&FTM_OUTMASK_CH2OM_MASK) /*!< FTM2_OUTMASK                            */
#define FTM_OUTMASK_CH3OM_MASK                   (0x01UL << FTM_OUTMASK_CH3OM_SHIFT)                 /*!< FTM2_OUTMASK: CH3OM Mask                */
#define FTM_OUTMASK_CH3OM_SHIFT                  3                                                   /*!< FTM2_OUTMASK: CH3OM Position            */
#define FTM_OUTMASK_CH3OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH3OM_SHIFT))&FTM_OUTMASK_CH3OM_MASK) /*!< FTM2_OUTMASK                            */
#define FTM_OUTMASK_CH4OM_MASK                   (0x01UL << FTM_OUTMASK_CH4OM_SHIFT)                 /*!< FTM2_OUTMASK: CH4OM Mask                */
#define FTM_OUTMASK_CH4OM_SHIFT                  4                                                   /*!< FTM2_OUTMASK: CH4OM Position            */
#define FTM_OUTMASK_CH4OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH4OM_SHIFT))&FTM_OUTMASK_CH4OM_MASK) /*!< FTM2_OUTMASK                            */
#define FTM_OUTMASK_CH5OM_MASK                   (0x01UL << FTM_OUTMASK_CH5OM_SHIFT)                 /*!< FTM2_OUTMASK: CH5OM Mask                */
#define FTM_OUTMASK_CH5OM_SHIFT                  5                                                   /*!< FTM2_OUTMASK: CH5OM Position            */
#define FTM_OUTMASK_CH5OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH5OM_SHIFT))&FTM_OUTMASK_CH5OM_MASK) /*!< FTM2_OUTMASK                            */
#define FTM_OUTMASK_CH6OM_MASK                   (0x01UL << FTM_OUTMASK_CH6OM_SHIFT)                 /*!< FTM2_OUTMASK: CH6OM Mask                */
#define FTM_OUTMASK_CH6OM_SHIFT                  6                                                   /*!< FTM2_OUTMASK: CH6OM Position            */
#define FTM_OUTMASK_CH6OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH6OM_SHIFT))&FTM_OUTMASK_CH6OM_MASK) /*!< FTM2_OUTMASK                            */
#define FTM_OUTMASK_CH7OM_MASK                   (0x01UL << FTM_OUTMASK_CH7OM_SHIFT)                 /*!< FTM2_OUTMASK: CH7OM Mask                */
#define FTM_OUTMASK_CH7OM_SHIFT                  7                                                   /*!< FTM2_OUTMASK: CH7OM Position            */
#define FTM_OUTMASK_CH7OM(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_OUTMASK_CH7OM_SHIFT))&FTM_OUTMASK_CH7OM_MASK) /*!< FTM2_OUTMASK                            */
/* ------- COMBINE Bit Fields                       ------ */
#define FTM_COMBINE_COMBINE1_MASK                (0x01UL << FTM_COMBINE_COMBINE1_SHIFT)              /*!< FTM2_COMBINE: COMBINE1 Mask             */
#define FTM_COMBINE_COMBINE1_SHIFT               8                                                   /*!< FTM2_COMBINE: COMBINE1 Position         */
#define FTM_COMBINE_COMBINE1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE1_SHIFT))&FTM_COMBINE_COMBINE1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_COMP1_MASK                   (0x01UL << FTM_COMBINE_COMP1_SHIFT)                 /*!< FTM2_COMBINE: COMP1 Mask                */
#define FTM_COMBINE_COMP1_SHIFT                  9                                                   /*!< FTM2_COMBINE: COMP1 Position            */
#define FTM_COMBINE_COMP1(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP1_SHIFT))&FTM_COMBINE_COMP1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_DECAPEN1_MASK                (0x01UL << FTM_COMBINE_DECAPEN1_SHIFT)              /*!< FTM2_COMBINE: DECAPEN1 Mask             */
#define FTM_COMBINE_DECAPEN1_SHIFT               10                                                  /*!< FTM2_COMBINE: DECAPEN1 Position         */
#define FTM_COMBINE_DECAPEN1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN1_SHIFT))&FTM_COMBINE_DECAPEN1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_DECAP1_MASK                  (0x01UL << FTM_COMBINE_DECAP1_SHIFT)                /*!< FTM2_COMBINE: DECAP1 Mask               */
#define FTM_COMBINE_DECAP1_SHIFT                 11                                                  /*!< FTM2_COMBINE: DECAP1 Position           */
#define FTM_COMBINE_DECAP1(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP1_SHIFT))&FTM_COMBINE_DECAP1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_DTEN1_MASK                   (0x01UL << FTM_COMBINE_DTEN1_SHIFT)                 /*!< FTM2_COMBINE: DTEN1 Mask                */
#define FTM_COMBINE_DTEN1_SHIFT                  12                                                  /*!< FTM2_COMBINE: DTEN1 Position            */
#define FTM_COMBINE_DTEN1(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN1_SHIFT))&FTM_COMBINE_DTEN1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_SYNCEN1_MASK                 (0x01UL << FTM_COMBINE_SYNCEN1_SHIFT)               /*!< FTM2_COMBINE: SYNCEN1 Mask              */
#define FTM_COMBINE_SYNCEN1_SHIFT                13                                                  /*!< FTM2_COMBINE: SYNCEN1 Position          */
#define FTM_COMBINE_SYNCEN1(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN1_SHIFT))&FTM_COMBINE_SYNCEN1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_FAULTEN1_MASK                (0x01UL << FTM_COMBINE_FAULTEN1_SHIFT)              /*!< FTM2_COMBINE: FAULTEN1 Mask             */
#define FTM_COMBINE_FAULTEN1_SHIFT               14                                                  /*!< FTM2_COMBINE: FAULTEN1 Position         */
#define FTM_COMBINE_FAULTEN1(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN1_SHIFT))&FTM_COMBINE_FAULTEN1_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_COMBINE2_MASK                (0x01UL << FTM_COMBINE_COMBINE2_SHIFT)              /*!< FTM2_COMBINE: COMBINE2 Mask             */
#define FTM_COMBINE_COMBINE2_SHIFT               16                                                  /*!< FTM2_COMBINE: COMBINE2 Position         */
#define FTM_COMBINE_COMBINE2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMBINE2_SHIFT))&FTM_COMBINE_COMBINE2_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_COMP2_MASK                   (0x01UL << FTM_COMBINE_COMP2_SHIFT)                 /*!< FTM2_COMBINE: COMP2 Mask                */
#define FTM_COMBINE_COMP2_SHIFT                  17                                                  /*!< FTM2_COMBINE: COMP2 Position            */
#define FTM_COMBINE_COMP2(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_COMP2_SHIFT))&FTM_COMBINE_COMP2_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_DECAPEN2_MASK                (0x01UL << FTM_COMBINE_DECAPEN2_SHIFT)              /*!< FTM2_COMBINE: DECAPEN2 Mask             */
#define FTM_COMBINE_DECAPEN2_SHIFT               18                                                  /*!< FTM2_COMBINE: DECAPEN2 Position         */
#define FTM_COMBINE_DECAPEN2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAPEN2_SHIFT))&FTM_COMBINE_DECAPEN2_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_DECAP2_MASK                  (0x01UL << FTM_COMBINE_DECAP2_SHIFT)                /*!< FTM2_COMBINE: DECAP2 Mask               */
#define FTM_COMBINE_DECAP2_SHIFT                 19                                                  /*!< FTM2_COMBINE: DECAP2 Position           */
#define FTM_COMBINE_DECAP2(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DECAP2_SHIFT))&FTM_COMBINE_DECAP2_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_DTEN2_MASK                   (0x01UL << FTM_COMBINE_DTEN2_SHIFT)                 /*!< FTM2_COMBINE: DTEN2 Mask                */
#define FTM_COMBINE_DTEN2_SHIFT                  20                                                  /*!< FTM2_COMBINE: DTEN2 Position            */
#define FTM_COMBINE_DTEN2(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_DTEN2_SHIFT))&FTM_COMBINE_DTEN2_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_SYNCEN2_MASK                 (0x01UL << FTM_COMBINE_SYNCEN2_SHIFT)               /*!< FTM2_COMBINE: SYNCEN2 Mask              */
#define FTM_COMBINE_SYNCEN2_SHIFT                21                                                  /*!< FTM2_COMBINE: SYNCEN2 Position          */
#define FTM_COMBINE_SYNCEN2(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_SYNCEN2_SHIFT))&FTM_COMBINE_SYNCEN2_MASK) /*!< FTM2_COMBINE                            */
#define FTM_COMBINE_FAULTEN2_MASK                (0x01UL << FTM_COMBINE_FAULTEN2_SHIFT)              /*!< FTM2_COMBINE: FAULTEN2 Mask             */
#define FTM_COMBINE_FAULTEN2_SHIFT               22                                                  /*!< FTM2_COMBINE: FAULTEN2 Position         */
#define FTM_COMBINE_FAULTEN2(x)                  (((uint32_t)(((uint32_t)(x))<<FTM_COMBINE_FAULTEN2_SHIFT))&FTM_COMBINE_FAULTEN2_MASK) /*!< FTM2_COMBINE                            */
/* ------- DEADTIME Bit Fields                      ------ */
/* ------- EXTTRIG Bit Fields                       ------ */
#define FTM_EXTTRIG_CH2TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH2TRIG_SHIFT)               /*!< FTM2_EXTTRIG: CH2TRIG Mask              */
#define FTM_EXTTRIG_CH2TRIG_SHIFT                0                                                   /*!< FTM2_EXTTRIG: CH2TRIG Position          */
#define FTM_EXTTRIG_CH2TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH2TRIG_SHIFT))&FTM_EXTTRIG_CH2TRIG_MASK) /*!< FTM2_EXTTRIG                            */
#define FTM_EXTTRIG_CH3TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH3TRIG_SHIFT)               /*!< FTM2_EXTTRIG: CH3TRIG Mask              */
#define FTM_EXTTRIG_CH3TRIG_SHIFT                1                                                   /*!< FTM2_EXTTRIG: CH3TRIG Position          */
#define FTM_EXTTRIG_CH3TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH3TRIG_SHIFT))&FTM_EXTTRIG_CH3TRIG_MASK) /*!< FTM2_EXTTRIG                            */
#define FTM_EXTTRIG_CH4TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH4TRIG_SHIFT)               /*!< FTM2_EXTTRIG: CH4TRIG Mask              */
#define FTM_EXTTRIG_CH4TRIG_SHIFT                2                                                   /*!< FTM2_EXTTRIG: CH4TRIG Position          */
#define FTM_EXTTRIG_CH4TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH4TRIG_SHIFT))&FTM_EXTTRIG_CH4TRIG_MASK) /*!< FTM2_EXTTRIG                            */
#define FTM_EXTTRIG_CH5TRIG_MASK                 (0x01UL << FTM_EXTTRIG_CH5TRIG_SHIFT)               /*!< FTM2_EXTTRIG: CH5TRIG Mask              */
#define FTM_EXTTRIG_CH5TRIG_SHIFT                3                                                   /*!< FTM2_EXTTRIG: CH5TRIG Position          */
#define FTM_EXTTRIG_CH5TRIG(x)                   (((uint32_t)(((uint32_t)(x))<<FTM_EXTTRIG_CH5TRIG_SHIFT))&FTM_EXTTRIG_CH5TRIG_MASK) /*!< FTM2_EXTTRIG                            */
/* ------- POL Bit Fields                           ------ */
#define FTM_POL_POL2_MASK                        (0x01UL << FTM_POL_POL2_SHIFT)                      /*!< FTM2_POL: POL2 Mask                     */
#define FTM_POL_POL2_SHIFT                       2                                                   /*!< FTM2_POL: POL2 Position                 */
#define FTM_POL_POL2(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL2_SHIFT))&FTM_POL_POL2_MASK) /*!< FTM2_POL                                */
#define FTM_POL_POL3_MASK                        (0x01UL << FTM_POL_POL3_SHIFT)                      /*!< FTM2_POL: POL3 Mask                     */
#define FTM_POL_POL3_SHIFT                       3                                                   /*!< FTM2_POL: POL3 Position                 */
#define FTM_POL_POL3(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL3_SHIFT))&FTM_POL_POL3_MASK) /*!< FTM2_POL                                */
#define FTM_POL_POL4_MASK                        (0x01UL << FTM_POL_POL4_SHIFT)                      /*!< FTM2_POL: POL4 Mask                     */
#define FTM_POL_POL4_SHIFT                       4                                                   /*!< FTM2_POL: POL4 Position                 */
#define FTM_POL_POL4(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL4_SHIFT))&FTM_POL_POL4_MASK) /*!< FTM2_POL                                */
#define FTM_POL_POL5_MASK                        (0x01UL << FTM_POL_POL5_SHIFT)                      /*!< FTM2_POL: POL5 Mask                     */
#define FTM_POL_POL5_SHIFT                       5                                                   /*!< FTM2_POL: POL5 Position                 */
#define FTM_POL_POL5(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL5_SHIFT))&FTM_POL_POL5_MASK) /*!< FTM2_POL                                */
#define FTM_POL_POL6_MASK                        (0x01UL << FTM_POL_POL6_SHIFT)                      /*!< FTM2_POL: POL6 Mask                     */
#define FTM_POL_POL6_SHIFT                       6                                                   /*!< FTM2_POL: POL6 Position                 */
#define FTM_POL_POL6(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL6_SHIFT))&FTM_POL_POL6_MASK) /*!< FTM2_POL                                */
#define FTM_POL_POL7_MASK                        (0x01UL << FTM_POL_POL7_SHIFT)                      /*!< FTM2_POL: POL7 Mask                     */
#define FTM_POL_POL7_SHIFT                       7                                                   /*!< FTM2_POL: POL7 Position                 */
#define FTM_POL_POL7(x)                          (((uint32_t)(((uint32_t)(x))<<FTM_POL_POL7_SHIFT))&FTM_POL_POL7_MASK) /*!< FTM2_POL                                */
/* ------- FMS Bit Fields                           ------ */
/* ------- FILTER Bit Fields                        ------ */
#define FTM_FILTER_CH2FVAL_MASK                  (0x0FUL << FTM_FILTER_CH2FVAL_SHIFT)                /*!< FTM2_FILTER: CH2FVAL Mask               */
#define FTM_FILTER_CH2FVAL_SHIFT                 8                                                   /*!< FTM2_FILTER: CH2FVAL Position           */
#define FTM_FILTER_CH2FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH2FVAL_SHIFT))&FTM_FILTER_CH2FVAL_MASK) /*!< FTM2_FILTER                             */
#define FTM_FILTER_CH3FVAL_MASK                  (0x0FUL << FTM_FILTER_CH3FVAL_SHIFT)                /*!< FTM2_FILTER: CH3FVAL Mask               */
#define FTM_FILTER_CH3FVAL_SHIFT                 12                                                  /*!< FTM2_FILTER: CH3FVAL Position           */
#define FTM_FILTER_CH3FVAL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_FILTER_CH3FVAL_SHIFT))&FTM_FILTER_CH3FVAL_MASK) /*!< FTM2_FILTER                             */
/* ------- FLTCTRL Bit Fields                       ------ */
/* ------- CONF Bit Fields                          ------ */
/* ------- FLTPOL Bit Fields                        ------ */
/* ------- SYNCONF Bit Fields                       ------ */
/* ------- INVCTRL Bit Fields                       ------ */
#define FTM_INVCTRL_INV1EN_MASK                  (0x01UL << FTM_INVCTRL_INV1EN_SHIFT)                /*!< FTM2_INVCTRL: INV1EN Mask               */
#define FTM_INVCTRL_INV1EN_SHIFT                 1                                                   /*!< FTM2_INVCTRL: INV1EN Position           */
#define FTM_INVCTRL_INV1EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV1EN_SHIFT))&FTM_INVCTRL_INV1EN_MASK) /*!< FTM2_INVCTRL                            */
#define FTM_INVCTRL_INV2EN_MASK                  (0x01UL << FTM_INVCTRL_INV2EN_SHIFT)                /*!< FTM2_INVCTRL: INV2EN Mask               */
#define FTM_INVCTRL_INV2EN_SHIFT                 2                                                   /*!< FTM2_INVCTRL: INV2EN Position           */
#define FTM_INVCTRL_INV2EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV2EN_SHIFT))&FTM_INVCTRL_INV2EN_MASK) /*!< FTM2_INVCTRL                            */
#define FTM_INVCTRL_INV3EN_MASK                  (0x01UL << FTM_INVCTRL_INV3EN_SHIFT)                /*!< FTM2_INVCTRL: INV3EN Mask               */
#define FTM_INVCTRL_INV3EN_SHIFT                 3                                                   /*!< FTM2_INVCTRL: INV3EN Position           */
#define FTM_INVCTRL_INV3EN(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_INVCTRL_INV3EN_SHIFT))&FTM_INVCTRL_INV3EN_MASK) /*!< FTM2_INVCTRL                            */
/* ------- SWOCTRL Bit Fields                       ------ */
#define FTM_SWOCTRL_CH2OC_MASK                   (0x01UL << FTM_SWOCTRL_CH2OC_SHIFT)                 /*!< FTM2_SWOCTRL: CH2OC Mask                */
#define FTM_SWOCTRL_CH2OC_SHIFT                  2                                                   /*!< FTM2_SWOCTRL: CH2OC Position            */
#define FTM_SWOCTRL_CH2OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH2OC_SHIFT))&FTM_SWOCTRL_CH2OC_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH3OC_MASK                   (0x01UL << FTM_SWOCTRL_CH3OC_SHIFT)                 /*!< FTM2_SWOCTRL: CH3OC Mask                */
#define FTM_SWOCTRL_CH3OC_SHIFT                  3                                                   /*!< FTM2_SWOCTRL: CH3OC Position            */
#define FTM_SWOCTRL_CH3OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH3OC_SHIFT))&FTM_SWOCTRL_CH3OC_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH4OC_MASK                   (0x01UL << FTM_SWOCTRL_CH4OC_SHIFT)                 /*!< FTM2_SWOCTRL: CH4OC Mask                */
#define FTM_SWOCTRL_CH4OC_SHIFT                  4                                                   /*!< FTM2_SWOCTRL: CH4OC Position            */
#define FTM_SWOCTRL_CH4OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH4OC_SHIFT))&FTM_SWOCTRL_CH4OC_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH5OC_MASK                   (0x01UL << FTM_SWOCTRL_CH5OC_SHIFT)                 /*!< FTM2_SWOCTRL: CH5OC Mask                */
#define FTM_SWOCTRL_CH5OC_SHIFT                  5                                                   /*!< FTM2_SWOCTRL: CH5OC Position            */
#define FTM_SWOCTRL_CH5OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH5OC_SHIFT))&FTM_SWOCTRL_CH5OC_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH6OC_MASK                   (0x01UL << FTM_SWOCTRL_CH6OC_SHIFT)                 /*!< FTM2_SWOCTRL: CH6OC Mask                */
#define FTM_SWOCTRL_CH6OC_SHIFT                  6                                                   /*!< FTM2_SWOCTRL: CH6OC Position            */
#define FTM_SWOCTRL_CH6OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH6OC_SHIFT))&FTM_SWOCTRL_CH6OC_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH7OC_MASK                   (0x01UL << FTM_SWOCTRL_CH7OC_SHIFT)                 /*!< FTM2_SWOCTRL: CH7OC Mask                */
#define FTM_SWOCTRL_CH7OC_SHIFT                  7                                                   /*!< FTM2_SWOCTRL: CH7OC Position            */
#define FTM_SWOCTRL_CH7OC(x)                     (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH7OC_SHIFT))&FTM_SWOCTRL_CH7OC_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH2OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH2OCV_SHIFT)                /*!< FTM2_SWOCTRL: CH2OCV Mask               */
#define FTM_SWOCTRL_CH2OCV_SHIFT                 10                                                  /*!< FTM2_SWOCTRL: CH2OCV Position           */
#define FTM_SWOCTRL_CH2OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH2OCV_SHIFT))&FTM_SWOCTRL_CH2OCV_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH3OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH3OCV_SHIFT)                /*!< FTM2_SWOCTRL: CH3OCV Mask               */
#define FTM_SWOCTRL_CH3OCV_SHIFT                 11                                                  /*!< FTM2_SWOCTRL: CH3OCV Position           */
#define FTM_SWOCTRL_CH3OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH3OCV_SHIFT))&FTM_SWOCTRL_CH3OCV_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH4OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH4OCV_SHIFT)                /*!< FTM2_SWOCTRL: CH4OCV Mask               */
#define FTM_SWOCTRL_CH4OCV_SHIFT                 12                                                  /*!< FTM2_SWOCTRL: CH4OCV Position           */
#define FTM_SWOCTRL_CH4OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH4OCV_SHIFT))&FTM_SWOCTRL_CH4OCV_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH5OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH5OCV_SHIFT)                /*!< FTM2_SWOCTRL: CH5OCV Mask               */
#define FTM_SWOCTRL_CH5OCV_SHIFT                 13                                                  /*!< FTM2_SWOCTRL: CH5OCV Position           */
#define FTM_SWOCTRL_CH5OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH5OCV_SHIFT))&FTM_SWOCTRL_CH5OCV_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH6OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH6OCV_SHIFT)                /*!< FTM2_SWOCTRL: CH6OCV Mask               */
#define FTM_SWOCTRL_CH6OCV_SHIFT                 14                                                  /*!< FTM2_SWOCTRL: CH6OCV Position           */
#define FTM_SWOCTRL_CH6OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH6OCV_SHIFT))&FTM_SWOCTRL_CH6OCV_MASK) /*!< FTM2_SWOCTRL                            */
#define FTM_SWOCTRL_CH7OCV_MASK                  (0x01UL << FTM_SWOCTRL_CH7OCV_SHIFT)                /*!< FTM2_SWOCTRL: CH7OCV Mask               */
#define FTM_SWOCTRL_CH7OCV_SHIFT                 15                                                  /*!< FTM2_SWOCTRL: CH7OCV Position           */
#define FTM_SWOCTRL_CH7OCV(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_SWOCTRL_CH7OCV_SHIFT))&FTM_SWOCTRL_CH7OCV_MASK) /*!< FTM2_SWOCTRL                            */
/* ------- PWMLOAD Bit Fields                       ------ */
#define FTM_PWMLOAD_CH2SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH2SEL_SHIFT)                /*!< FTM2_PWMLOAD: CH2SEL Mask               */
#define FTM_PWMLOAD_CH2SEL_SHIFT                 2                                                   /*!< FTM2_PWMLOAD: CH2SEL Position           */
#define FTM_PWMLOAD_CH2SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH2SEL_SHIFT))&FTM_PWMLOAD_CH2SEL_MASK) /*!< FTM2_PWMLOAD                            */
#define FTM_PWMLOAD_CH3SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH3SEL_SHIFT)                /*!< FTM2_PWMLOAD: CH3SEL Mask               */
#define FTM_PWMLOAD_CH3SEL_SHIFT                 3                                                   /*!< FTM2_PWMLOAD: CH3SEL Position           */
#define FTM_PWMLOAD_CH3SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH3SEL_SHIFT))&FTM_PWMLOAD_CH3SEL_MASK) /*!< FTM2_PWMLOAD                            */
#define FTM_PWMLOAD_CH4SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH4SEL_SHIFT)                /*!< FTM2_PWMLOAD: CH4SEL Mask               */
#define FTM_PWMLOAD_CH4SEL_SHIFT                 4                                                   /*!< FTM2_PWMLOAD: CH4SEL Position           */
#define FTM_PWMLOAD_CH4SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH4SEL_SHIFT))&FTM_PWMLOAD_CH4SEL_MASK) /*!< FTM2_PWMLOAD                            */
#define FTM_PWMLOAD_CH5SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH5SEL_SHIFT)                /*!< FTM2_PWMLOAD: CH5SEL Mask               */
#define FTM_PWMLOAD_CH5SEL_SHIFT                 5                                                   /*!< FTM2_PWMLOAD: CH5SEL Position           */
#define FTM_PWMLOAD_CH5SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH5SEL_SHIFT))&FTM_PWMLOAD_CH5SEL_MASK) /*!< FTM2_PWMLOAD                            */
#define FTM_PWMLOAD_CH6SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH6SEL_SHIFT)                /*!< FTM2_PWMLOAD: CH6SEL Mask               */
#define FTM_PWMLOAD_CH6SEL_SHIFT                 6                                                   /*!< FTM2_PWMLOAD: CH6SEL Position           */
#define FTM_PWMLOAD_CH6SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH6SEL_SHIFT))&FTM_PWMLOAD_CH6SEL_MASK) /*!< FTM2_PWMLOAD                            */
#define FTM_PWMLOAD_CH7SEL_MASK                  (0x01UL << FTM_PWMLOAD_CH7SEL_SHIFT)                /*!< FTM2_PWMLOAD: CH7SEL Mask               */
#define FTM_PWMLOAD_CH7SEL_SHIFT                 7                                                   /*!< FTM2_PWMLOAD: CH7SEL Position           */
#define FTM_PWMLOAD_CH7SEL(x)                    (((uint32_t)(((uint32_t)(x))<<FTM_PWMLOAD_CH7SEL_SHIFT))&FTM_PWMLOAD_CH7SEL_MASK) /*!< FTM2_PWMLOAD                            */
/**
 * @} */ /* End group FTM_Register_Masks_GROUP 
 */

/* FTM2 - Peripheral instance base addresses */
#define FTM2_BasePtr                   0x4003A000UL //!< Peripheral base address
#define FTM2                           ((FTM_Type *) FTM2_BasePtr) //!< Freescale base pointer
#define FTM2_BASE_PTR                  (FTM2) //!< Freescale style base pointer
/**
 * @} */ /* End group FTM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FTMRE_Peripheral_access_layer_GROUP FTMRE Peripheral Access Layer
* @brief C Struct for FTMRE
* @{
*/

/* ================================================================================ */
/* ================           FTMRE (file:FTMRE_MKE04)             ================ */
/* ================================================================================ */

/**
 * @brief Flash Memory Interface
 */
/**
* @addtogroup FTMRE_structs_GROUP FTMRE struct
* @brief Struct for FTMRE
* @{
*/
typedef struct {                                /*       FTMRE Structure                                              */
   __I  uint8_t   RESERVED0;                   
   __IO uint8_t   FCCOBIX;                      /**< 0001: Flash CCOB Index Register                                    */
   __IO uint8_t   FSEC;                         /**< 0002: Flash Security Register                                      */
   __IO uint8_t   FCLKDIV;                      /**< 0003: Flash Clock Divider Register                                 */
   __I  uint8_t   RESERVED1;                   
   __IO uint8_t   FSTAT;                        /**< 0005: Flash Status Register                                        */
   __I  uint8_t   RESERVED2;                   
   __IO uint8_t   FCNFG;                        /**< 0007: Flash Configuration Register                                 */
   union {                                      /**< 0000: (size=0002)                                                  */
      __IO uint16_t  FCCOB;                     /**< 0008: Flash Common Command Object Register (FCCOBLO:FCCOBHI)       */
      struct {                                  /**< 0000: (size=0002)                                                  */
         __IO uint8_t   FCCOBLO;                /**< 0008: Flash Common Command Object Register:Low                     */
         __IO uint8_t   FCCOBHI;                /**< 0009: Flash Common Command Object Register:High                    */
      };
   };
   __I  uint8_t   RESERVED3;                   
   __IO uint8_t   FPROT;                        /**< 000B: Flash Protection Register                                    */
   __I  uint8_t   RESERVED4[3];                
   __IO uint8_t   FOPT;                         /**< 000F: Flash Option Register                                        */
} FTMRE_Type;

/**
 * @} */ /* End group FTMRE_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'FTMRE' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup FTMRE_Register_Masks_GROUP FTMRE Register Masks
* @brief Register Masks for FTMRE
* @{
*/
/* ------- FCCOBIX Bit Fields                       ------ */
#define FTMRE_FCCOBIX_CCOBIX_MASK                (0x07UL << FTMRE_FCCOBIX_CCOBIX_SHIFT)              /*!< FTMRE_FCCOBIX: CCOBIX Mask              */
#define FTMRE_FCCOBIX_CCOBIX_SHIFT               0                                                   /*!< FTMRE_FCCOBIX: CCOBIX Position          */
#define FTMRE_FCCOBIX_CCOBIX(x)                  (((uint8_t)(((uint8_t)(x))<<FTMRE_FCCOBIX_CCOBIX_SHIFT))&FTMRE_FCCOBIX_CCOBIX_MASK) /*!< FTMRE_FCCOBIX                           */
/* ------- FSEC Bit Fields                          ------ */
#define FTMRE_FSEC_SEC_MASK                      (0x03UL << FTMRE_FSEC_SEC_SHIFT)                    /*!< FTMRE_FSEC: SEC Mask                    */
#define FTMRE_FSEC_SEC_SHIFT                     0                                                   /*!< FTMRE_FSEC: SEC Position                */
#define FTMRE_FSEC_SEC(x)                        (((uint8_t)(((uint8_t)(x))<<FTMRE_FSEC_SEC_SHIFT))&FTMRE_FSEC_SEC_MASK) /*!< FTMRE_FSEC                              */
#define FTMRE_FSEC_KEYEN_MASK                    (0x03UL << FTMRE_FSEC_KEYEN_SHIFT)                  /*!< FTMRE_FSEC: KEYEN Mask                  */
#define FTMRE_FSEC_KEYEN_SHIFT                   6                                                   /*!< FTMRE_FSEC: KEYEN Position              */
#define FTMRE_FSEC_KEYEN(x)                      (((uint8_t)(((uint8_t)(x))<<FTMRE_FSEC_KEYEN_SHIFT))&FTMRE_FSEC_KEYEN_MASK) /*!< FTMRE_FSEC                              */
/* ------- FCLKDIV Bit Fields                       ------ */
#define FTMRE_FCLKDIV_FDIV_MASK                  (0x3FUL << FTMRE_FCLKDIV_FDIV_SHIFT)                /*!< FTMRE_FCLKDIV: FDIV Mask                */
#define FTMRE_FCLKDIV_FDIV_SHIFT                 0                                                   /*!< FTMRE_FCLKDIV: FDIV Position            */
#define FTMRE_FCLKDIV_FDIV(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FCLKDIV_FDIV_SHIFT))&FTMRE_FCLKDIV_FDIV_MASK) /*!< FTMRE_FCLKDIV                           */
#define FTMRE_FCLKDIV_FDIVLCK_MASK               (0x01UL << FTMRE_FCLKDIV_FDIVLCK_SHIFT)             /*!< FTMRE_FCLKDIV: FDIVLCK Mask             */
#define FTMRE_FCLKDIV_FDIVLCK_SHIFT              6                                                   /*!< FTMRE_FCLKDIV: FDIVLCK Position         */
#define FTMRE_FCLKDIV_FDIVLCK(x)                 (((uint8_t)(((uint8_t)(x))<<FTMRE_FCLKDIV_FDIVLCK_SHIFT))&FTMRE_FCLKDIV_FDIVLCK_MASK) /*!< FTMRE_FCLKDIV                           */
#define FTMRE_FCLKDIV_FDIVLD_MASK                (0x01UL << FTMRE_FCLKDIV_FDIVLD_SHIFT)              /*!< FTMRE_FCLKDIV: FDIVLD Mask              */
#define FTMRE_FCLKDIV_FDIVLD_SHIFT               7                                                   /*!< FTMRE_FCLKDIV: FDIVLD Position          */
#define FTMRE_FCLKDIV_FDIVLD(x)                  (((uint8_t)(((uint8_t)(x))<<FTMRE_FCLKDIV_FDIVLD_SHIFT))&FTMRE_FCLKDIV_FDIVLD_MASK) /*!< FTMRE_FCLKDIV                           */
/* ------- FSTAT Bit Fields                         ------ */
#define FTMRE_FSTAT_MGSTAT_MASK                  (0x03UL << FTMRE_FSTAT_MGSTAT_SHIFT)                /*!< FTMRE_FSTAT: MGSTAT Mask                */
#define FTMRE_FSTAT_MGSTAT_SHIFT                 0                                                   /*!< FTMRE_FSTAT: MGSTAT Position            */
#define FTMRE_FSTAT_MGSTAT(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FSTAT_MGSTAT_SHIFT))&FTMRE_FSTAT_MGSTAT_MASK) /*!< FTMRE_FSTAT                             */
#define FTMRE_FSTAT_MGBUSY_MASK                  (0x01UL << FTMRE_FSTAT_MGBUSY_SHIFT)                /*!< FTMRE_FSTAT: MGBUSY Mask                */
#define FTMRE_FSTAT_MGBUSY_SHIFT                 3                                                   /*!< FTMRE_FSTAT: MGBUSY Position            */
#define FTMRE_FSTAT_MGBUSY(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FSTAT_MGBUSY_SHIFT))&FTMRE_FSTAT_MGBUSY_MASK) /*!< FTMRE_FSTAT                             */
#define FTMRE_FSTAT_FPVIOL_MASK                  (0x01UL << FTMRE_FSTAT_FPVIOL_SHIFT)                /*!< FTMRE_FSTAT: FPVIOL Mask                */
#define FTMRE_FSTAT_FPVIOL_SHIFT                 4                                                   /*!< FTMRE_FSTAT: FPVIOL Position            */
#define FTMRE_FSTAT_FPVIOL(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FSTAT_FPVIOL_SHIFT))&FTMRE_FSTAT_FPVIOL_MASK) /*!< FTMRE_FSTAT                             */
#define FTMRE_FSTAT_ACCERR_MASK                  (0x01UL << FTMRE_FSTAT_ACCERR_SHIFT)                /*!< FTMRE_FSTAT: ACCERR Mask                */
#define FTMRE_FSTAT_ACCERR_SHIFT                 5                                                   /*!< FTMRE_FSTAT: ACCERR Position            */
#define FTMRE_FSTAT_ACCERR(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FSTAT_ACCERR_SHIFT))&FTMRE_FSTAT_ACCERR_MASK) /*!< FTMRE_FSTAT                             */
#define FTMRE_FSTAT_CCIF_MASK                    (0x01UL << FTMRE_FSTAT_CCIF_SHIFT)                  /*!< FTMRE_FSTAT: CCIF Mask                  */
#define FTMRE_FSTAT_CCIF_SHIFT                   7                                                   /*!< FTMRE_FSTAT: CCIF Position              */
#define FTMRE_FSTAT_CCIF(x)                      (((uint8_t)(((uint8_t)(x))<<FTMRE_FSTAT_CCIF_SHIFT))&FTMRE_FSTAT_CCIF_MASK) /*!< FTMRE_FSTAT                             */
/* ------- FCNFG Bit Fields                         ------ */
#define FTMRE_FCNFG_ERSAREQ_MASK                 (0x01UL << FTMRE_FCNFG_ERSAREQ_SHIFT)               /*!< FTMRE_FCNFG: ERSAREQ Mask               */
#define FTMRE_FCNFG_ERSAREQ_SHIFT                5                                                   /*!< FTMRE_FCNFG: ERSAREQ Position           */
#define FTMRE_FCNFG_ERSAREQ(x)                   (((uint8_t)(((uint8_t)(x))<<FTMRE_FCNFG_ERSAREQ_SHIFT))&FTMRE_FCNFG_ERSAREQ_MASK) /*!< FTMRE_FCNFG                             */
#define FTMRE_FCNFG_CCIE_MASK                    (0x01UL << FTMRE_FCNFG_CCIE_SHIFT)                  /*!< FTMRE_FCNFG: CCIE Mask                  */
#define FTMRE_FCNFG_CCIE_SHIFT                   7                                                   /*!< FTMRE_FCNFG: CCIE Position              */
#define FTMRE_FCNFG_CCIE(x)                      (((uint8_t)(((uint8_t)(x))<<FTMRE_FCNFG_CCIE_SHIFT))&FTMRE_FCNFG_CCIE_MASK) /*!< FTMRE_FCNFG                             */
/* ------- FCCOB Bit Fields                         ------ */
/* ------- FCCOBLO Bit Fields                       ------ */
/* ------- FCCOBHI Bit Fields                       ------ */
/* ------- FPROT Bit Fields                         ------ */
#define FTMRE_FPROT_FPLS_MASK                    (0x03UL << FTMRE_FPROT_FPLS_SHIFT)                  /*!< FTMRE_FPROT: FPLS Mask                  */
#define FTMRE_FPROT_FPLS_SHIFT                   0                                                   /*!< FTMRE_FPROT: FPLS Position              */
#define FTMRE_FPROT_FPLS(x)                      (((uint8_t)(((uint8_t)(x))<<FTMRE_FPROT_FPLS_SHIFT))&FTMRE_FPROT_FPLS_MASK) /*!< FTMRE_FPROT                             */
#define FTMRE_FPROT_FPLDIS_MASK                  (0x01UL << FTMRE_FPROT_FPLDIS_SHIFT)                /*!< FTMRE_FPROT: FPLDIS Mask                */
#define FTMRE_FPROT_FPLDIS_SHIFT                 2                                                   /*!< FTMRE_FPROT: FPLDIS Position            */
#define FTMRE_FPROT_FPLDIS(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FPROT_FPLDIS_SHIFT))&FTMRE_FPROT_FPLDIS_MASK) /*!< FTMRE_FPROT                             */
#define FTMRE_FPROT_FPOPEN_MASK                  (0x01UL << FTMRE_FPROT_FPOPEN_SHIFT)                /*!< FTMRE_FPROT: FPOPEN Mask                */
#define FTMRE_FPROT_FPOPEN_SHIFT                 7                                                   /*!< FTMRE_FPROT: FPOPEN Position            */
#define FTMRE_FPROT_FPOPEN(x)                    (((uint8_t)(((uint8_t)(x))<<FTMRE_FPROT_FPOPEN_SHIFT))&FTMRE_FPROT_FPOPEN_MASK) /*!< FTMRE_FPROT                             */
/* ------- FOPT Bit Fields                          ------ */
/**
 * @} */ /* End group FTMRE_Register_Masks_GROUP 
 */

/* FTMRE - Peripheral instance base addresses */
#define FTMRE_BasePtr                  0x40020000UL //!< Peripheral base address
#define FTMRE                          ((FTMRE_Type *) FTMRE_BasePtr) //!< Freescale base pointer
#define FTMRE_BASE_PTR                 (FTMRE) //!< Freescale style base pointer
/**
 * @} */ /* End group FTMRE_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup FGPIOA_Peripheral_access_layer_GROUP FGPIOA Peripheral Access Layer
* @brief C Struct for FGPIOA
* @{
*/

/* ================================================================================ */
/* ================           GPIOA (derived from FGPIOA)          ================ */
/* ================================================================================ */

/**
 * @brief General Purpose Input/Output
 */

/* GPIOA - Peripheral instance base addresses */
#define GPIOA_BasePtr                  0x400FF000UL //!< Peripheral base address
#define GPIOA                          ((GPIO_Type *) GPIOA_BasePtr) //!< Freescale base pointer
#define GPIOA_BASE_PTR                 (GPIOA) //!< Freescale style base pointer
/**
 * @} */ /* End group FGPIOA_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup I2C_Peripheral_access_layer_GROUP I2C Peripheral Access Layer
* @brief C Struct for I2C
* @{
*/

/* ================================================================================ */
/* ================           I2C0 (file:I2C0_MKE)                 ================ */
/* ================================================================================ */

/**
 * @brief Inter-Integrated Circuit
 */
/**
* @addtogroup I2C_structs_GROUP I2C struct
* @brief Struct for I2C
* @{
*/
typedef struct {                                /*       I2C0 Structure                                               */
   __IO uint8_t   A1;                           /**< 0000: Address Register 1                                           */
   __IO uint8_t   F;                            /**< 0001: Frequency Divider register                                   */
   __IO uint8_t   C1;                           /**< 0002: Control Register 1                                           */
   __IO uint8_t   S;                            /**< 0003: Status Register                                              */
   __IO uint8_t   D;                            /**< 0004: Data I/O register                                            */
   __IO uint8_t   C2;                           /**< 0005: Control Register 2                                           */
   __IO uint8_t   FLT;                          /**< 0006: Programmable Input Glitch Filter register                    */
   __IO uint8_t   RA;                           /**< 0007: Range Address register                                       */
   __IO uint8_t   SMB;                          /**< 0008: SMBus Control and Status register                            */
   __IO uint8_t   A2;                           /**< 0009: Address Register 2                                           */
   __IO uint8_t   SLTH;                         /**< 000A: SCL Low Timeout Register High                                */
   __IO uint8_t   SLTL;                         /**< 000B: SCL Low Timeout Register Low                                 */
} I2C_Type;

/**
 * @} */ /* End group I2C_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'I2C0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup I2C_Register_Masks_GROUP I2C Register Masks
* @brief Register Masks for I2C
* @{
*/
/* ------- A1 Bit Fields                            ------ */
#define I2C_A1_AD_MASK                           (0x7FUL << I2C_A1_AD_SHIFT)                         /*!< I2C0_A1: AD Mask                        */
#define I2C_A1_AD_SHIFT                          1                                                   /*!< I2C0_A1: AD Position                    */
#define I2C_A1_AD(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_A1_AD_SHIFT))&I2C_A1_AD_MASK) /*!< I2C0_A1                                 */
/* ------- F Bit Fields                             ------ */
#define I2C_F_ICR_MASK                           (0x3FUL << I2C_F_ICR_SHIFT)                         /*!< I2C0_F: ICR Mask                        */
#define I2C_F_ICR_SHIFT                          0                                                   /*!< I2C0_F: ICR Position                    */
#define I2C_F_ICR(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_F_ICR_SHIFT))&I2C_F_ICR_MASK) /*!< I2C0_F                                  */
#define I2C_F_MULT_MASK                          (0x03UL << I2C_F_MULT_SHIFT)                        /*!< I2C0_F: MULT Mask                       */
#define I2C_F_MULT_SHIFT                         6                                                   /*!< I2C0_F: MULT Position                   */
#define I2C_F_MULT(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_F_MULT_SHIFT))&I2C_F_MULT_MASK) /*!< I2C0_F                                  */
/* ------- C1 Bit Fields                            ------ */
#define I2C_C1_WUEN_MASK                         (0x01UL << I2C_C1_WUEN_SHIFT)                       /*!< I2C0_C1: WUEN Mask                      */
#define I2C_C1_WUEN_SHIFT                        1                                                   /*!< I2C0_C1: WUEN Position                  */
#define I2C_C1_WUEN(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_C1_WUEN_SHIFT))&I2C_C1_WUEN_MASK) /*!< I2C0_C1                                 */
#define I2C_C1_RSTA_MASK                         (0x01UL << I2C_C1_RSTA_SHIFT)                       /*!< I2C0_C1: RSTA Mask                      */
#define I2C_C1_RSTA_SHIFT                        2                                                   /*!< I2C0_C1: RSTA Position                  */
#define I2C_C1_RSTA(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_C1_RSTA_SHIFT))&I2C_C1_RSTA_MASK) /*!< I2C0_C1                                 */
#define I2C_C1_TXAK_MASK                         (0x01UL << I2C_C1_TXAK_SHIFT)                       /*!< I2C0_C1: TXAK Mask                      */
#define I2C_C1_TXAK_SHIFT                        3                                                   /*!< I2C0_C1: TXAK Position                  */
#define I2C_C1_TXAK(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_C1_TXAK_SHIFT))&I2C_C1_TXAK_MASK) /*!< I2C0_C1                                 */
#define I2C_C1_TX_MASK                           (0x01UL << I2C_C1_TX_SHIFT)                         /*!< I2C0_C1: TX Mask                        */
#define I2C_C1_TX_SHIFT                          4                                                   /*!< I2C0_C1: TX Position                    */
#define I2C_C1_TX(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_C1_TX_SHIFT))&I2C_C1_TX_MASK) /*!< I2C0_C1                                 */
#define I2C_C1_MST_MASK                          (0x01UL << I2C_C1_MST_SHIFT)                        /*!< I2C0_C1: MST Mask                       */
#define I2C_C1_MST_SHIFT                         5                                                   /*!< I2C0_C1: MST Position                   */
#define I2C_C1_MST(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_C1_MST_SHIFT))&I2C_C1_MST_MASK) /*!< I2C0_C1                                 */
#define I2C_C1_IICIE_MASK                        (0x01UL << I2C_C1_IICIE_SHIFT)                      /*!< I2C0_C1: IICIE Mask                     */
#define I2C_C1_IICIE_SHIFT                       6                                                   /*!< I2C0_C1: IICIE Position                 */
#define I2C_C1_IICIE(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_C1_IICIE_SHIFT))&I2C_C1_IICIE_MASK) /*!< I2C0_C1                                 */
#define I2C_C1_IICEN_MASK                        (0x01UL << I2C_C1_IICEN_SHIFT)                      /*!< I2C0_C1: IICEN Mask                     */
#define I2C_C1_IICEN_SHIFT                       7                                                   /*!< I2C0_C1: IICEN Position                 */
#define I2C_C1_IICEN(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_C1_IICEN_SHIFT))&I2C_C1_IICEN_MASK) /*!< I2C0_C1                                 */
/* ------- S Bit Fields                             ------ */
#define I2C_S_RXAK_MASK                          (0x01UL << I2C_S_RXAK_SHIFT)                        /*!< I2C0_S: RXAK Mask                       */
#define I2C_S_RXAK_SHIFT                         0                                                   /*!< I2C0_S: RXAK Position                   */
#define I2C_S_RXAK(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_S_RXAK_SHIFT))&I2C_S_RXAK_MASK) /*!< I2C0_S                                  */
#define I2C_S_IICIF_MASK                         (0x01UL << I2C_S_IICIF_SHIFT)                       /*!< I2C0_S: IICIF Mask                      */
#define I2C_S_IICIF_SHIFT                        1                                                   /*!< I2C0_S: IICIF Position                  */
#define I2C_S_IICIF(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_S_IICIF_SHIFT))&I2C_S_IICIF_MASK) /*!< I2C0_S                                  */
#define I2C_S_SRW_MASK                           (0x01UL << I2C_S_SRW_SHIFT)                         /*!< I2C0_S: SRW Mask                        */
#define I2C_S_SRW_SHIFT                          2                                                   /*!< I2C0_S: SRW Position                    */
#define I2C_S_SRW(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_S_SRW_SHIFT))&I2C_S_SRW_MASK) /*!< I2C0_S                                  */
#define I2C_S_RAM_MASK                           (0x01UL << I2C_S_RAM_SHIFT)                         /*!< I2C0_S: RAM Mask                        */
#define I2C_S_RAM_SHIFT                          3                                                   /*!< I2C0_S: RAM Position                    */
#define I2C_S_RAM(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_S_RAM_SHIFT))&I2C_S_RAM_MASK) /*!< I2C0_S                                  */
#define I2C_S_ARBL_MASK                          (0x01UL << I2C_S_ARBL_SHIFT)                        /*!< I2C0_S: ARBL Mask                       */
#define I2C_S_ARBL_SHIFT                         4                                                   /*!< I2C0_S: ARBL Position                   */
#define I2C_S_ARBL(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_S_ARBL_SHIFT))&I2C_S_ARBL_MASK) /*!< I2C0_S                                  */
#define I2C_S_BUSY_MASK                          (0x01UL << I2C_S_BUSY_SHIFT)                        /*!< I2C0_S: BUSY Mask                       */
#define I2C_S_BUSY_SHIFT                         5                                                   /*!< I2C0_S: BUSY Position                   */
#define I2C_S_BUSY(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_S_BUSY_SHIFT))&I2C_S_BUSY_MASK) /*!< I2C0_S                                  */
#define I2C_S_IAAS_MASK                          (0x01UL << I2C_S_IAAS_SHIFT)                        /*!< I2C0_S: IAAS Mask                       */
#define I2C_S_IAAS_SHIFT                         6                                                   /*!< I2C0_S: IAAS Position                   */
#define I2C_S_IAAS(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_S_IAAS_SHIFT))&I2C_S_IAAS_MASK) /*!< I2C0_S                                  */
#define I2C_S_TCF_MASK                           (0x01UL << I2C_S_TCF_SHIFT)                         /*!< I2C0_S: TCF Mask                        */
#define I2C_S_TCF_SHIFT                          7                                                   /*!< I2C0_S: TCF Position                    */
#define I2C_S_TCF(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_S_TCF_SHIFT))&I2C_S_TCF_MASK) /*!< I2C0_S                                  */
/* ------- D Bit Fields                             ------ */
#define I2C_D_DATA_MASK                          (0xFFUL << I2C_D_DATA_SHIFT)                        /*!< I2C0_D: DATA Mask                       */
#define I2C_D_DATA_SHIFT                         0                                                   /*!< I2C0_D: DATA Position                   */
#define I2C_D_DATA(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_D_DATA_SHIFT))&I2C_D_DATA_MASK) /*!< I2C0_D                                  */
/* ------- C2 Bit Fields                            ------ */
#define I2C_C2_AD_MASK                           (0x07UL << I2C_C2_AD_SHIFT)                         /*!< I2C0_C2: AD Mask                        */
#define I2C_C2_AD_SHIFT                          0                                                   /*!< I2C0_C2: AD Position                    */
#define I2C_C2_AD(x)                             (((uint8_t)(((uint8_t)(x))<<I2C_C2_AD_SHIFT))&I2C_C2_AD_MASK) /*!< I2C0_C2                                 */
#define I2C_C2_RMEN_MASK                         (0x01UL << I2C_C2_RMEN_SHIFT)                       /*!< I2C0_C2: RMEN Mask                      */
#define I2C_C2_RMEN_SHIFT                        3                                                   /*!< I2C0_C2: RMEN Position                  */
#define I2C_C2_RMEN(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_C2_RMEN_SHIFT))&I2C_C2_RMEN_MASK) /*!< I2C0_C2                                 */
#define I2C_C2_SBRC_MASK                         (0x01UL << I2C_C2_SBRC_SHIFT)                       /*!< I2C0_C2: SBRC Mask                      */
#define I2C_C2_SBRC_SHIFT                        4                                                   /*!< I2C0_C2: SBRC Position                  */
#define I2C_C2_SBRC(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_C2_SBRC_SHIFT))&I2C_C2_SBRC_MASK) /*!< I2C0_C2                                 */
#define I2C_C2_ADEXT_MASK                        (0x01UL << I2C_C2_ADEXT_SHIFT)                      /*!< I2C0_C2: ADEXT Mask                     */
#define I2C_C2_ADEXT_SHIFT                       6                                                   /*!< I2C0_C2: ADEXT Position                 */
#define I2C_C2_ADEXT(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_C2_ADEXT_SHIFT))&I2C_C2_ADEXT_MASK) /*!< I2C0_C2                                 */
#define I2C_C2_GCAEN_MASK                        (0x01UL << I2C_C2_GCAEN_SHIFT)                      /*!< I2C0_C2: GCAEN Mask                     */
#define I2C_C2_GCAEN_SHIFT                       7                                                   /*!< I2C0_C2: GCAEN Position                 */
#define I2C_C2_GCAEN(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_C2_GCAEN_SHIFT))&I2C_C2_GCAEN_MASK) /*!< I2C0_C2                                 */
/* ------- FLT Bit Fields                           ------ */
#define I2C_FLT_FLT_MASK                         (0x0FUL << I2C_FLT_FLT_SHIFT)                       /*!< I2C0_FLT: FLT Mask                      */
#define I2C_FLT_FLT_SHIFT                        0                                                   /*!< I2C0_FLT: FLT Position                  */
#define I2C_FLT_FLT(x)                           (((uint8_t)(((uint8_t)(x))<<I2C_FLT_FLT_SHIFT))&I2C_FLT_FLT_MASK) /*!< I2C0_FLT                                */
#define I2C_FLT_STARTF_MASK                      (0x01UL << I2C_FLT_STARTF_SHIFT)                    /*!< I2C0_FLT: STARTF Mask                   */
#define I2C_FLT_STARTF_SHIFT                     4                                                   /*!< I2C0_FLT: STARTF Position               */
#define I2C_FLT_STARTF(x)                        (((uint8_t)(((uint8_t)(x))<<I2C_FLT_STARTF_SHIFT))&I2C_FLT_STARTF_MASK) /*!< I2C0_FLT                                */
#define I2C_FLT_SSIE_MASK                        (0x01UL << I2C_FLT_SSIE_SHIFT)                      /*!< I2C0_FLT: SSIE Mask                     */
#define I2C_FLT_SSIE_SHIFT                       5                                                   /*!< I2C0_FLT: SSIE Position                 */
#define I2C_FLT_SSIE(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_FLT_SSIE_SHIFT))&I2C_FLT_SSIE_MASK) /*!< I2C0_FLT                                */
#define I2C_FLT_STOPF_MASK                       (0x01UL << I2C_FLT_STOPF_SHIFT)                     /*!< I2C0_FLT: STOPF Mask                    */
#define I2C_FLT_STOPF_SHIFT                      6                                                   /*!< I2C0_FLT: STOPF Position                */
#define I2C_FLT_STOPF(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_FLT_STOPF_SHIFT))&I2C_FLT_STOPF_MASK) /*!< I2C0_FLT                                */
#define I2C_FLT_SHEN_MASK                        (0x01UL << I2C_FLT_SHEN_SHIFT)                      /*!< I2C0_FLT: SHEN Mask                     */
#define I2C_FLT_SHEN_SHIFT                       7                                                   /*!< I2C0_FLT: SHEN Position                 */
#define I2C_FLT_SHEN(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_FLT_SHEN_SHIFT))&I2C_FLT_SHEN_MASK) /*!< I2C0_FLT                                */
/* ------- RA Bit Fields                            ------ */
#define I2C_RA_RAD_MASK                          (0x7FUL << I2C_RA_RAD_SHIFT)                        /*!< I2C0_RA: RAD Mask                       */
#define I2C_RA_RAD_SHIFT                         1                                                   /*!< I2C0_RA: RAD Position                   */
#define I2C_RA_RAD(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_RA_RAD_SHIFT))&I2C_RA_RAD_MASK) /*!< I2C0_RA                                 */
/* ------- SMB Bit Fields                           ------ */
#define I2C_SMB_SHTF2IE_MASK                     (0x01UL << I2C_SMB_SHTF2IE_SHIFT)                   /*!< I2C0_SMB: SHTF2IE Mask                  */
#define I2C_SMB_SHTF2IE_SHIFT                    0                                                   /*!< I2C0_SMB: SHTF2IE Position              */
#define I2C_SMB_SHTF2IE(x)                       (((uint8_t)(((uint8_t)(x))<<I2C_SMB_SHTF2IE_SHIFT))&I2C_SMB_SHTF2IE_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_SHTF2_MASK                       (0x01UL << I2C_SMB_SHTF2_SHIFT)                     /*!< I2C0_SMB: SHTF2 Mask                    */
#define I2C_SMB_SHTF2_SHIFT                      1                                                   /*!< I2C0_SMB: SHTF2 Position                */
#define I2C_SMB_SHTF2(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_SMB_SHTF2_SHIFT))&I2C_SMB_SHTF2_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_SHTF1_MASK                       (0x01UL << I2C_SMB_SHTF1_SHIFT)                     /*!< I2C0_SMB: SHTF1 Mask                    */
#define I2C_SMB_SHTF1_SHIFT                      2                                                   /*!< I2C0_SMB: SHTF1 Position                */
#define I2C_SMB_SHTF1(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_SMB_SHTF1_SHIFT))&I2C_SMB_SHTF1_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_SLTF_MASK                        (0x01UL << I2C_SMB_SLTF_SHIFT)                      /*!< I2C0_SMB: SLTF Mask                     */
#define I2C_SMB_SLTF_SHIFT                       3                                                   /*!< I2C0_SMB: SLTF Position                 */
#define I2C_SMB_SLTF(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_SMB_SLTF_SHIFT))&I2C_SMB_SLTF_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_TCKSEL_MASK                      (0x01UL << I2C_SMB_TCKSEL_SHIFT)                    /*!< I2C0_SMB: TCKSEL Mask                   */
#define I2C_SMB_TCKSEL_SHIFT                     4                                                   /*!< I2C0_SMB: TCKSEL Position               */
#define I2C_SMB_TCKSEL(x)                        (((uint8_t)(((uint8_t)(x))<<I2C_SMB_TCKSEL_SHIFT))&I2C_SMB_TCKSEL_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_SIICAEN_MASK                     (0x01UL << I2C_SMB_SIICAEN_SHIFT)                   /*!< I2C0_SMB: SIICAEN Mask                  */
#define I2C_SMB_SIICAEN_SHIFT                    5                                                   /*!< I2C0_SMB: SIICAEN Position              */
#define I2C_SMB_SIICAEN(x)                       (((uint8_t)(((uint8_t)(x))<<I2C_SMB_SIICAEN_SHIFT))&I2C_SMB_SIICAEN_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_ALERTEN_MASK                     (0x01UL << I2C_SMB_ALERTEN_SHIFT)                   /*!< I2C0_SMB: ALERTEN Mask                  */
#define I2C_SMB_ALERTEN_SHIFT                    6                                                   /*!< I2C0_SMB: ALERTEN Position              */
#define I2C_SMB_ALERTEN(x)                       (((uint8_t)(((uint8_t)(x))<<I2C_SMB_ALERTEN_SHIFT))&I2C_SMB_ALERTEN_MASK) /*!< I2C0_SMB                                */
#define I2C_SMB_FACK_MASK                        (0x01UL << I2C_SMB_FACK_SHIFT)                      /*!< I2C0_SMB: FACK Mask                     */
#define I2C_SMB_FACK_SHIFT                       7                                                   /*!< I2C0_SMB: FACK Position                 */
#define I2C_SMB_FACK(x)                          (((uint8_t)(((uint8_t)(x))<<I2C_SMB_FACK_SHIFT))&I2C_SMB_FACK_MASK) /*!< I2C0_SMB                                */
/* ------- A2 Bit Fields                            ------ */
#define I2C_A2_SAD_MASK                          (0x7FUL << I2C_A2_SAD_SHIFT)                        /*!< I2C0_A2: SAD Mask                       */
#define I2C_A2_SAD_SHIFT                         1                                                   /*!< I2C0_A2: SAD Position                   */
#define I2C_A2_SAD(x)                            (((uint8_t)(((uint8_t)(x))<<I2C_A2_SAD_SHIFT))&I2C_A2_SAD_MASK) /*!< I2C0_A2                                 */
/* ------- SLTH Bit Fields                          ------ */
#define I2C_SLTH_SSLT_MASK                       (0xFFUL << I2C_SLTH_SSLT_SHIFT)                     /*!< I2C0_SLTH: SSLT Mask                    */
#define I2C_SLTH_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTH: SSLT Position                */
#define I2C_SLTH_SSLT(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_SLTH_SSLT_SHIFT))&I2C_SLTH_SSLT_MASK) /*!< I2C0_SLTH                               */
/* ------- SLTL Bit Fields                          ------ */
#define I2C_SLTL_SSLT_MASK                       (0xFFUL << I2C_SLTL_SSLT_SHIFT)                     /*!< I2C0_SLTL: SSLT Mask                    */
#define I2C_SLTL_SSLT_SHIFT                      0                                                   /*!< I2C0_SLTL: SSLT Position                */
#define I2C_SLTL_SSLT(x)                         (((uint8_t)(((uint8_t)(x))<<I2C_SLTL_SSLT_SHIFT))&I2C_SLTL_SSLT_MASK) /*!< I2C0_SLTL                               */
/**
 * @} */ /* End group I2C_Register_Masks_GROUP 
 */

/* I2C0 - Peripheral instance base addresses */
#define I2C0_BasePtr                   0x40066000UL //!< Peripheral base address
#define I2C0                           ((I2C_Type *) I2C0_BasePtr) //!< Freescale base pointer
#define I2C0_BASE_PTR                  (I2C0) //!< Freescale style base pointer
/**
 * @} */ /* End group I2C_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup ICS_Peripheral_access_layer_GROUP ICS Peripheral Access Layer
* @brief C Struct for ICS
* @{
*/

/* ================================================================================ */
/* ================           ICS (file:ICS_MKE)                   ================ */
/* ================================================================================ */

/**
 * @brief Internal clock source
 */
/**
* @addtogroup ICS_structs_GROUP ICS struct
* @brief Struct for ICS
* @{
*/
typedef struct {                                /*       ICS Structure                                                */
   __IO uint8_t   C1;                           /**< 0000: Control 1 Register                                           */
   __IO uint8_t   C2;                           /**< 0001: Control 2 Register                                           */
   __IO uint8_t   C3;                           /**< 0002: Control 3 Register                                           */
   __IO uint8_t   C4;                           /**< 0003: Control 4 Register                                           */
   __I  uint8_t   S;                            /**< 0004: ICS Status Register                                          */
} ICS_Type;

/**
 * @} */ /* End group ICS_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'ICS' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup ICS_Register_Masks_GROUP ICS Register Masks
* @brief Register Masks for ICS
* @{
*/
/* ------- C1 Bit Fields                            ------ */
#define ICS_C1_IREFSTEN_MASK                     (0x01UL << ICS_C1_IREFSTEN_SHIFT)                   /*!< ICS_C1: IREFSTEN Mask                   */
#define ICS_C1_IREFSTEN_SHIFT                    0                                                   /*!< ICS_C1: IREFSTEN Position               */
#define ICS_C1_IREFSTEN(x)                       (((uint8_t)(((uint8_t)(x))<<ICS_C1_IREFSTEN_SHIFT))&ICS_C1_IREFSTEN_MASK) /*!< ICS_C1                                  */
#define ICS_C1_IRCLKEN_MASK                      (0x01UL << ICS_C1_IRCLKEN_SHIFT)                    /*!< ICS_C1: IRCLKEN Mask                    */
#define ICS_C1_IRCLKEN_SHIFT                     1                                                   /*!< ICS_C1: IRCLKEN Position                */
#define ICS_C1_IRCLKEN(x)                        (((uint8_t)(((uint8_t)(x))<<ICS_C1_IRCLKEN_SHIFT))&ICS_C1_IRCLKEN_MASK) /*!< ICS_C1                                  */
#define ICS_C1_IREFS_MASK                        (0x01UL << ICS_C1_IREFS_SHIFT)                      /*!< ICS_C1: IREFS Mask                      */
#define ICS_C1_IREFS_SHIFT                       2                                                   /*!< ICS_C1: IREFS Position                  */
#define ICS_C1_IREFS(x)                          (((uint8_t)(((uint8_t)(x))<<ICS_C1_IREFS_SHIFT))&ICS_C1_IREFS_MASK) /*!< ICS_C1                                  */
#define ICS_C1_RDIV_MASK                         (0x07UL << ICS_C1_RDIV_SHIFT)                       /*!< ICS_C1: RDIV Mask                       */
#define ICS_C1_RDIV_SHIFT                        3                                                   /*!< ICS_C1: RDIV Position                   */
#define ICS_C1_RDIV(x)                           (((uint8_t)(((uint8_t)(x))<<ICS_C1_RDIV_SHIFT))&ICS_C1_RDIV_MASK) /*!< ICS_C1                                  */
#define ICS_C1_CLKS_MASK                         (0x03UL << ICS_C1_CLKS_SHIFT)                       /*!< ICS_C1: CLKS Mask                       */
#define ICS_C1_CLKS_SHIFT                        6                                                   /*!< ICS_C1: CLKS Position                   */
#define ICS_C1_CLKS(x)                           (((uint8_t)(((uint8_t)(x))<<ICS_C1_CLKS_SHIFT))&ICS_C1_CLKS_MASK) /*!< ICS_C1                                  */
/* ------- C2 Bit Fields                            ------ */
#define ICS_C2_LP_MASK                           (0x01UL << ICS_C2_LP_SHIFT)                         /*!< ICS_C2: LP Mask                         */
#define ICS_C2_LP_SHIFT                          4                                                   /*!< ICS_C2: LP Position                     */
#define ICS_C2_LP(x)                             (((uint8_t)(((uint8_t)(x))<<ICS_C2_LP_SHIFT))&ICS_C2_LP_MASK) /*!< ICS_C2                                  */
#define ICS_C2_BDIV_MASK                         (0x07UL << ICS_C2_BDIV_SHIFT)                       /*!< ICS_C2: BDIV Mask                       */
#define ICS_C2_BDIV_SHIFT                        5                                                   /*!< ICS_C2: BDIV Position                   */
#define ICS_C2_BDIV(x)                           (((uint8_t)(((uint8_t)(x))<<ICS_C2_BDIV_SHIFT))&ICS_C2_BDIV_MASK) /*!< ICS_C2                                  */
/* ------- C3 Bit Fields                            ------ */
#define ICS_C3_SCTRIM_MASK                       (0xFFUL << ICS_C3_SCTRIM_SHIFT)                     /*!< ICS_C3: SCTRIM Mask                     */
#define ICS_C3_SCTRIM_SHIFT                      0                                                   /*!< ICS_C3: SCTRIM Position                 */
#define ICS_C3_SCTRIM(x)                         (((uint8_t)(((uint8_t)(x))<<ICS_C3_SCTRIM_SHIFT))&ICS_C3_SCTRIM_MASK) /*!< ICS_C3                                  */
/* ------- C4 Bit Fields                            ------ */
#define ICS_C4_SCFTRIM_MASK                      (0x01UL << ICS_C4_SCFTRIM_SHIFT)                    /*!< ICS_C4: SCFTRIM Mask                    */
#define ICS_C4_SCFTRIM_SHIFT                     0                                                   /*!< ICS_C4: SCFTRIM Position                */
#define ICS_C4_SCFTRIM(x)                        (((uint8_t)(((uint8_t)(x))<<ICS_C4_SCFTRIM_SHIFT))&ICS_C4_SCFTRIM_MASK) /*!< ICS_C4                                  */
#define ICS_C4_CME_MASK                          (0x01UL << ICS_C4_CME_SHIFT)                        /*!< ICS_C4: CME Mask                        */
#define ICS_C4_CME_SHIFT                         5                                                   /*!< ICS_C4: CME Position                    */
#define ICS_C4_CME(x)                            (((uint8_t)(((uint8_t)(x))<<ICS_C4_CME_SHIFT))&ICS_C4_CME_MASK) /*!< ICS_C4                                  */
#define ICS_C4_LOLIE0_MASK                       (0x01UL << ICS_C4_LOLIE0_SHIFT)                     /*!< ICS_C4: LOLIE0 Mask                     */
#define ICS_C4_LOLIE0_SHIFT                      7                                                   /*!< ICS_C4: LOLIE0 Position                 */
#define ICS_C4_LOLIE0(x)                         (((uint8_t)(((uint8_t)(x))<<ICS_C4_LOLIE0_SHIFT))&ICS_C4_LOLIE0_MASK) /*!< ICS_C4                                  */
/* ------- S Bit Fields                             ------ */
#define ICS_S_CLKST_MASK                         (0x03UL << ICS_S_CLKST_SHIFT)                       /*!< ICS_S: CLKST Mask                       */
#define ICS_S_CLKST_SHIFT                        2                                                   /*!< ICS_S: CLKST Position                   */
#define ICS_S_CLKST(x)                           (((uint8_t)(((uint8_t)(x))<<ICS_S_CLKST_SHIFT))&ICS_S_CLKST_MASK) /*!< ICS_S                                   */
#define ICS_S_IREFST_MASK                        (0x01UL << ICS_S_IREFST_SHIFT)                      /*!< ICS_S: IREFST Mask                      */
#define ICS_S_IREFST_SHIFT                       4                                                   /*!< ICS_S: IREFST Position                  */
#define ICS_S_IREFST(x)                          (((uint8_t)(((uint8_t)(x))<<ICS_S_IREFST_SHIFT))&ICS_S_IREFST_MASK) /*!< ICS_S                                   */
#define ICS_S_LOCK_MASK                          (0x01UL << ICS_S_LOCK_SHIFT)                        /*!< ICS_S: LOCK Mask                        */
#define ICS_S_LOCK_SHIFT                         6                                                   /*!< ICS_S: LOCK Position                    */
#define ICS_S_LOCK(x)                            (((uint8_t)(((uint8_t)(x))<<ICS_S_LOCK_SHIFT))&ICS_S_LOCK_MASK) /*!< ICS_S                                   */
#define ICS_S_LOLS_MASK                          (0x01UL << ICS_S_LOLS_SHIFT)                        /*!< ICS_S: LOLS Mask                        */
#define ICS_S_LOLS_SHIFT                         7                                                   /*!< ICS_S: LOLS Position                    */
#define ICS_S_LOLS(x)                            (((uint8_t)(((uint8_t)(x))<<ICS_S_LOLS_SHIFT))&ICS_S_LOLS_MASK) /*!< ICS_S                                   */
/**
 * @} */ /* End group ICS_Register_Masks_GROUP 
 */

/* ICS - Peripheral instance base addresses */
#define ICS_BasePtr                    0x40064000UL //!< Peripheral base address
#define ICS                            ((ICS_Type *) ICS_BasePtr) //!< Freescale base pointer
#define ICS_BASE_PTR                   (ICS) //!< Freescale style base pointer
/**
 * @} */ /* End group ICS_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup IRQ_Peripheral_access_layer_GROUP IRQ Peripheral Access Layer
* @brief C Struct for IRQ
* @{
*/

/* ================================================================================ */
/* ================           IRQ (file:IRQ_MKE)                   ================ */
/* ================================================================================ */

/**
 * @brief Interrupt
 */
/**
* @addtogroup IRQ_structs_GROUP IRQ struct
* @brief Struct for IRQ
* @{
*/
typedef struct {                                /*       IRQ Structure                                                */
   __IO uint8_t   SC;                           /**< 0000: Interrupt Pin Request Status and Control Register            */
} IRQ_Type;

/**
 * @} */ /* End group IRQ_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'IRQ' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup IRQ_Register_Masks_GROUP IRQ Register Masks
* @brief Register Masks for IRQ
* @{
*/
/* ------- SC Bit Fields                            ------ */
#define IRQ_SC_IRQMOD_MASK                       (0x01UL << IRQ_SC_IRQMOD_SHIFT)                     /*!< IRQ_SC: IRQMOD Mask                     */
#define IRQ_SC_IRQMOD_SHIFT                      0                                                   /*!< IRQ_SC: IRQMOD Position                 */
#define IRQ_SC_IRQMOD(x)                         (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQMOD_SHIFT))&IRQ_SC_IRQMOD_MASK) /*!< IRQ_SC                                  */
#define IRQ_SC_IRQIE_MASK                        (0x01UL << IRQ_SC_IRQIE_SHIFT)                      /*!< IRQ_SC: IRQIE Mask                      */
#define IRQ_SC_IRQIE_SHIFT                       1                                                   /*!< IRQ_SC: IRQIE Position                  */
#define IRQ_SC_IRQIE(x)                          (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQIE_SHIFT))&IRQ_SC_IRQIE_MASK) /*!< IRQ_SC                                  */
#define IRQ_SC_IRQACK_MASK                       (0x01UL << IRQ_SC_IRQACK_SHIFT)                     /*!< IRQ_SC: IRQACK Mask                     */
#define IRQ_SC_IRQACK_SHIFT                      2                                                   /*!< IRQ_SC: IRQACK Position                 */
#define IRQ_SC_IRQACK(x)                         (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQACK_SHIFT))&IRQ_SC_IRQACK_MASK) /*!< IRQ_SC                                  */
#define IRQ_SC_IRQF_MASK                         (0x01UL << IRQ_SC_IRQF_SHIFT)                       /*!< IRQ_SC: IRQF Mask                       */
#define IRQ_SC_IRQF_SHIFT                        3                                                   /*!< IRQ_SC: IRQF Position                   */
#define IRQ_SC_IRQF(x)                           (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQF_SHIFT))&IRQ_SC_IRQF_MASK) /*!< IRQ_SC                                  */
#define IRQ_SC_IRQPE_MASK                        (0x01UL << IRQ_SC_IRQPE_SHIFT)                      /*!< IRQ_SC: IRQPE Mask                      */
#define IRQ_SC_IRQPE_SHIFT                       4                                                   /*!< IRQ_SC: IRQPE Position                  */
#define IRQ_SC_IRQPE(x)                          (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQPE_SHIFT))&IRQ_SC_IRQPE_MASK) /*!< IRQ_SC                                  */
#define IRQ_SC_IRQEDG_MASK                       (0x01UL << IRQ_SC_IRQEDG_SHIFT)                     /*!< IRQ_SC: IRQEDG Mask                     */
#define IRQ_SC_IRQEDG_SHIFT                      5                                                   /*!< IRQ_SC: IRQEDG Position                 */
#define IRQ_SC_IRQEDG(x)                         (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQEDG_SHIFT))&IRQ_SC_IRQEDG_MASK) /*!< IRQ_SC                                  */
#define IRQ_SC_IRQPDD_MASK                       (0x01UL << IRQ_SC_IRQPDD_SHIFT)                     /*!< IRQ_SC: IRQPDD Mask                     */
#define IRQ_SC_IRQPDD_SHIFT                      6                                                   /*!< IRQ_SC: IRQPDD Position                 */
#define IRQ_SC_IRQPDD(x)                         (((uint8_t)(((uint8_t)(x))<<IRQ_SC_IRQPDD_SHIFT))&IRQ_SC_IRQPDD_MASK) /*!< IRQ_SC                                  */
/**
 * @} */ /* End group IRQ_Register_Masks_GROUP 
 */

/* IRQ - Peripheral instance base addresses */
#define IRQ_BasePtr                    0x40031000UL //!< Peripheral base address
#define IRQ                            ((IRQ_Type *) IRQ_BasePtr) //!< Freescale base pointer
#define IRQ_BASE_PTR                   (IRQ) //!< Freescale style base pointer
/**
 * @} */ /* End group IRQ_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup KBI_Peripheral_access_layer_GROUP KBI Peripheral Access Layer
* @brief C Struct for KBI
* @{
*/

/* ================================================================================ */
/* ================           KBI0 (file:KBI0_MKE02)               ================ */
/* ================================================================================ */

/**
 * @brief Keyboard interrupts
 */
/**
* @addtogroup KBI_structs_GROUP KBI struct
* @brief Struct for KBI
* @{
*/
typedef struct {                                /*       KBI0 Structure                                               */
   __IO uint8_t   SC;                           /**< 0000: KBI Status and Control Register                              */
   __IO uint8_t   PE;                           /**< 0001: KBI Pin Enables                                              */
   __IO uint8_t   ES;                           /**< 0002: KBI Edge Selects                                             */
} KBI_Type;

/**
 * @} */ /* End group KBI_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'KBI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup KBI_Register_Masks_GROUP KBI Register Masks
* @brief Register Masks for KBI
* @{
*/
/* ------- SC Bit Fields                            ------ */
#define KBI0_SC_KBMOD_MASK                       (0x01UL << KBI0_SC_KBMOD_SHIFT)                     /*!< KBI0_SC: KBMOD Mask                     */
#define KBI0_SC_KBMOD_SHIFT                      0                                                   /*!< KBI0_SC: KBMOD Position                 */
#define KBI0_SC_KBMOD(x)                         (((uint8_t)(((uint8_t)(x))<<KBI0_SC_KBMOD_SHIFT))&KBI0_SC_KBMOD_MASK) /*!< KBI0_SC                                 */
#define KBI0_SC_KBIE_MASK                        (0x01UL << KBI0_SC_KBIE_SHIFT)                      /*!< KBI0_SC: KBIE Mask                      */
#define KBI0_SC_KBIE_SHIFT                       1                                                   /*!< KBI0_SC: KBIE Position                  */
#define KBI0_SC_KBIE(x)                          (((uint8_t)(((uint8_t)(x))<<KBI0_SC_KBIE_SHIFT))&KBI0_SC_KBIE_MASK) /*!< KBI0_SC                                 */
#define KBI0_SC_KBACK_MASK                       (0x01UL << KBI0_SC_KBACK_SHIFT)                     /*!< KBI0_SC: KBACK Mask                     */
#define KBI0_SC_KBACK_SHIFT                      2                                                   /*!< KBI0_SC: KBACK Position                 */
#define KBI0_SC_KBACK(x)                         (((uint8_t)(((uint8_t)(x))<<KBI0_SC_KBACK_SHIFT))&KBI0_SC_KBACK_MASK) /*!< KBI0_SC                                 */
#define KBI0_SC_KBF_MASK                         (0x01UL << KBI0_SC_KBF_SHIFT)                       /*!< KBI0_SC: KBF Mask                       */
#define KBI0_SC_KBF_SHIFT                        3                                                   /*!< KBI0_SC: KBF Position                   */
#define KBI0_SC_KBF(x)                           (((uint8_t)(((uint8_t)(x))<<KBI0_SC_KBF_SHIFT))&KBI0_SC_KBF_MASK) /*!< KBI0_SC                                 */
/* ------- PE Bit Fields                            ------ */
#define KBI0_PE_KBIPE_MASK                       (0x01UL << KBI0_PE_KBIPE_SHIFT)                     /*!< KBI0_PE: KBIPE Mask                     */
#define KBI0_PE_KBIPE_SHIFT                      0                                                   /*!< KBI0_PE: KBIPE Position                 */
#define KBI0_PE_KBIPE(x)                         (((uint8_t)(((uint8_t)(x))<<KBI0_PE_KBIPE_SHIFT))&KBI0_PE_KBIPE_MASK) /*!< KBI0_PE                                 */
/* ------- ES Bit Fields                            ------ */
#define KBI0_ES_KBEDG_MASK                       (0x01UL << KBI0_ES_KBEDG_SHIFT)                     /*!< KBI0_ES: KBEDG Mask                     */
#define KBI0_ES_KBEDG_SHIFT                      0                                                   /*!< KBI0_ES: KBEDG Position                 */
#define KBI0_ES_KBEDG(x)                         (((uint8_t)(((uint8_t)(x))<<KBI0_ES_KBEDG_SHIFT))&KBI0_ES_KBEDG_MASK) /*!< KBI0_ES                                 */
/**
 * @} */ /* End group KBI_Register_Masks_GROUP 
 */

/* KBI0 - Peripheral instance base addresses */
#define KBI0_BasePtr                   0x40079000UL //!< Peripheral base address
#define KBI0                           ((KBI_Type *) KBI0_BasePtr) //!< Freescale base pointer
#define KBI0_BASE_PTR                  (KBI0) //!< Freescale style base pointer
/**
 * @} */ /* End group KBI_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup KBI_Peripheral_access_layer_GROUP KBI Peripheral Access Layer
* @brief C Struct for KBI
* @{
*/

/* ================================================================================ */
/* ================           KBI1 (derived from KBI0)             ================ */
/* ================================================================================ */

/**
 * @brief Keyboard interrupts
 */

/* KBI1 - Peripheral instance base addresses */
#define KBI1_BasePtr                   0x4007A000UL //!< Peripheral base address
#define KBI1                           ((KBI_Type *) KBI1_BasePtr) //!< Freescale base pointer
#define KBI1_BASE_PTR                  (KBI1) //!< Freescale style base pointer
/**
 * @} */ /* End group KBI_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup MCM_Peripheral_access_layer_GROUP MCM Peripheral Access Layer
* @brief C Struct for MCM
* @{
*/

/* ================================================================================ */
/* ================           MCM (file:MCM_MKE02Z2)               ================ */
/* ================================================================================ */

/**
 * @brief Core Platform Miscellaneous Control Module
 */
/**
* @addtogroup MCM_structs_GROUP MCM struct
* @brief Struct for MCM
* @{
*/
typedef struct {                                /*       MCM Structure                                                */
   __I  uint32_t  RESERVED0[2];                
   __I  uint16_t  PLASC;                        /**< 0008: Crossbar Switch (AXBS) Slave Configuration                   */
   __I  uint16_t  PLAMC;                        /**< 000A: Crossbar Switch (AXBS) Master Configuration                  */
   __IO uint32_t  PLACR;                        /**< 000C: Platform Control Register                                    */
} MCM_Type;

/**
 * @} */ /* End group MCM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'MCM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup MCM_Register_Masks_GROUP MCM Register Masks
* @brief Register Masks for MCM
* @{
*/
/* ------- PLASC Bit Fields                         ------ */
#define MCM_PLASC_ASC_MASK                       (0xFFUL << MCM_PLASC_ASC_SHIFT)                     /*!< MCM_PLASC: ASC Mask                     */
#define MCM_PLASC_ASC_SHIFT                      0                                                   /*!< MCM_PLASC: ASC Position                 */
#define MCM_PLASC_ASC(x)                         (((uint16_t)(((uint16_t)(x))<<MCM_PLASC_ASC_SHIFT))&MCM_PLASC_ASC_MASK) /*!< MCM_PLASC                               */
/* ------- PLAMC Bit Fields                         ------ */
#define MCM_PLAMC_AMC_MASK                       (0xFFUL << MCM_PLAMC_AMC_SHIFT)                     /*!< MCM_PLAMC: AMC Mask                     */
#define MCM_PLAMC_AMC_SHIFT                      0                                                   /*!< MCM_PLAMC: AMC Position                 */
#define MCM_PLAMC_AMC(x)                         (((uint16_t)(((uint16_t)(x))<<MCM_PLAMC_AMC_SHIFT))&MCM_PLAMC_AMC_MASK) /*!< MCM_PLAMC                               */
/* ------- PLACR Bit Fields                         ------ */
#define MCM_PLACR_CFCC_MASK                      (0x01UL << MCM_PLACR_CFCC_SHIFT)                    /*!< MCM_PLACR: CFCC Mask                    */
#define MCM_PLACR_CFCC_SHIFT                     10                                                  /*!< MCM_PLACR: CFCC Position                */
#define MCM_PLACR_CFCC(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_CFCC_SHIFT))&MCM_PLACR_CFCC_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCDA_MASK                     (0x01UL << MCM_PLACR_DFCDA_SHIFT)                   /*!< MCM_PLACR: DFCDA Mask                   */
#define MCM_PLACR_DFCDA_SHIFT                    11                                                  /*!< MCM_PLACR: DFCDA Position               */
#define MCM_PLACR_DFCDA(x)                       (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCDA_SHIFT))&MCM_PLACR_DFCDA_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCIC_MASK                     (0x01UL << MCM_PLACR_DFCIC_SHIFT)                   /*!< MCM_PLACR: DFCIC Mask                   */
#define MCM_PLACR_DFCIC_SHIFT                    12                                                  /*!< MCM_PLACR: DFCIC Position               */
#define MCM_PLACR_DFCIC(x)                       (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCIC_SHIFT))&MCM_PLACR_DFCIC_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCC_MASK                      (0x01UL << MCM_PLACR_DFCC_SHIFT)                    /*!< MCM_PLACR: DFCC Mask                    */
#define MCM_PLACR_DFCC_SHIFT                     13                                                  /*!< MCM_PLACR: DFCC Position                */
#define MCM_PLACR_DFCC(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCC_SHIFT))&MCM_PLACR_DFCC_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_EFDS_MASK                      (0x01UL << MCM_PLACR_EFDS_SHIFT)                    /*!< MCM_PLACR: EFDS Mask                    */
#define MCM_PLACR_EFDS_SHIFT                     14                                                  /*!< MCM_PLACR: EFDS Position                */
#define MCM_PLACR_EFDS(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_EFDS_SHIFT))&MCM_PLACR_EFDS_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_DFCS_MASK                      (0x01UL << MCM_PLACR_DFCS_SHIFT)                    /*!< MCM_PLACR: DFCS Mask                    */
#define MCM_PLACR_DFCS_SHIFT                     15                                                  /*!< MCM_PLACR: DFCS Position                */
#define MCM_PLACR_DFCS(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_DFCS_SHIFT))&MCM_PLACR_DFCS_MASK) /*!< MCM_PLACR                               */
#define MCM_PLACR_ESFC_MASK                      (0x01UL << MCM_PLACR_ESFC_SHIFT)                    /*!< MCM_PLACR: ESFC Mask                    */
#define MCM_PLACR_ESFC_SHIFT                     16                                                  /*!< MCM_PLACR: ESFC Position                */
#define MCM_PLACR_ESFC(x)                        (((uint32_t)(((uint32_t)(x))<<MCM_PLACR_ESFC_SHIFT))&MCM_PLACR_ESFC_MASK) /*!< MCM_PLACR                               */
/**
 * @} */ /* End group MCM_Register_Masks_GROUP 
 */

/* MCM - Peripheral instance base addresses */
#define MCM_BasePtr                    0xF0003000UL //!< Peripheral base address
#define MCM                            ((MCM_Type *) MCM_BasePtr) //!< Freescale base pointer
#define MCM_BASE_PTR                   (MCM) //!< Freescale style base pointer
/**
 * @} */ /* End group MCM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup NV_Peripheral_access_layer_GROUP NV Peripheral Access Layer
* @brief C Struct for NV
* @{
*/

/* ================================================================================ */
/* ================           NV (file:NV_FTMRE)                   ================ */
/* ================================================================================ */

/**
 * @brief Flash configuration field
 */
/**
* @addtogroup NV_structs_GROUP NV struct
* @brief Struct for NV
* @{
*/
typedef struct {                                /*       NV Structure                                                 */
   __I  uint8_t   BACKKEY[8];                   /**< 0000: Backdoor Comparison Key                                      */
   __I  uint8_t   RESERVED0[5];                
   __I  uint8_t   FPROT;                        /**< 000D: Non-volatile P-Flash Protection Register                     */
   __I  uint8_t   FSEC;                         /**< 000E: Non-volatile Flash Security Register                         */
   __I  uint8_t   FOPT;                         /**< 000F: Non-volatile Flash Option Register                           */
} NV_Type;

/**
 * @} */ /* End group NV_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'NV' Position & Mask macros                          ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup NV_Register_Masks_GROUP NV Register Masks
* @brief Register Masks for NV
* @{
*/
/* ------- BACKKEY Bit Fields                       ------ */
#define NV_BACKKEY_KEY_MASK                      (0xFFUL << NV_BACKKEY_KEY_SHIFT)                    /*!< NV_BACKKEY: KEY Mask                    */
#define NV_BACKKEY_KEY_SHIFT                     0                                                   /*!< NV_BACKKEY: KEY Position                */
#define NV_BACKKEY_KEY(x)                        (((uint8_t)(((uint8_t)(x))<<NV_BACKKEY_KEY_SHIFT))&NV_BACKKEY_KEY_MASK) /*!< NV_BACKKEY                              */
/* ------- FPROT Bit Fields                         ------ */
#define NV_FPROT_FPLS_MASK                       (0x03UL << NV_FPROT_FPLS_SHIFT)                     /*!< NV_FPROT: FPLS Mask                     */
#define NV_FPROT_FPLS_SHIFT                      0                                                   /*!< NV_FPROT: FPLS Position                 */
#define NV_FPROT_FPLS(x)                         (((uint8_t)(((uint8_t)(x))<<NV_FPROT_FPLS_SHIFT))&NV_FPROT_FPLS_MASK) /*!< NV_FPROT                                */
#define NV_FPROT_FPLDIS_MASK                     (0x01UL << NV_FPROT_FPLDIS_SHIFT)                   /*!< NV_FPROT: FPLDIS Mask                   */
#define NV_FPROT_FPLDIS_SHIFT                    2                                                   /*!< NV_FPROT: FPLDIS Position               */
#define NV_FPROT_FPLDIS(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FPROT_FPLDIS_SHIFT))&NV_FPROT_FPLDIS_MASK) /*!< NV_FPROT                                */
#define NV_FPROT_FPHS_MASK                       (0x03UL << NV_FPROT_FPHS_SHIFT)                     /*!< NV_FPROT: FPHS Mask                     */
#define NV_FPROT_FPHS_SHIFT                      3                                                   /*!< NV_FPROT: FPHS Position                 */
#define NV_FPROT_FPHS(x)                         (((uint8_t)(((uint8_t)(x))<<NV_FPROT_FPHS_SHIFT))&NV_FPROT_FPHS_MASK) /*!< NV_FPROT                                */
#define NV_FPROT_FPHDIS_MASK                     (0x01UL << NV_FPROT_FPHDIS_SHIFT)                   /*!< NV_FPROT: FPHDIS Mask                   */
#define NV_FPROT_FPHDIS_SHIFT                    5                                                   /*!< NV_FPROT: FPHDIS Position               */
#define NV_FPROT_FPHDIS(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FPROT_FPHDIS_SHIFT))&NV_FPROT_FPHDIS_MASK) /*!< NV_FPROT                                */
#define NV_FPROT_FPOPEN_MASK                     (0x01UL << NV_FPROT_FPOPEN_SHIFT)                   /*!< NV_FPROT: FPOPEN Mask                   */
#define NV_FPROT_FPOPEN_SHIFT                    7                                                   /*!< NV_FPROT: FPOPEN Position               */
#define NV_FPROT_FPOPEN(x)                       (((uint8_t)(((uint8_t)(x))<<NV_FPROT_FPOPEN_SHIFT))&NV_FPROT_FPOPEN_MASK) /*!< NV_FPROT                                */
/* ------- FSEC Bit Fields                          ------ */
#define NV_FSEC_SEC_MASK                         (0x03UL << NV_FSEC_SEC_SHIFT)                       /*!< NV_FSEC: SEC Mask                       */
#define NV_FSEC_SEC_SHIFT                        0                                                   /*!< NV_FSEC: SEC Position                   */
#define NV_FSEC_SEC(x)                           (((uint8_t)(((uint8_t)(x))<<NV_FSEC_SEC_SHIFT))&NV_FSEC_SEC_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_FSLACC_MASK                      (0x03UL << NV_FSEC_FSLACC_SHIFT)                    /*!< NV_FSEC: FSLACC Mask                    */
#define NV_FSEC_FSLACC_SHIFT                     2                                                   /*!< NV_FSEC: FSLACC Position                */
#define NV_FSEC_FSLACC(x)                        (((uint8_t)(((uint8_t)(x))<<NV_FSEC_FSLACC_SHIFT))&NV_FSEC_FSLACC_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_MEEN_MASK                        (0x03UL << NV_FSEC_MEEN_SHIFT)                      /*!< NV_FSEC: MEEN Mask                      */
#define NV_FSEC_MEEN_SHIFT                       4                                                   /*!< NV_FSEC: MEEN Position                  */
#define NV_FSEC_MEEN(x)                          (((uint8_t)(((uint8_t)(x))<<NV_FSEC_MEEN_SHIFT))&NV_FSEC_MEEN_MASK) /*!< NV_FSEC                                 */
#define NV_FSEC_KEYEN_MASK                       (0x03UL << NV_FSEC_KEYEN_SHIFT)                     /*!< NV_FSEC: KEYEN Mask                     */
#define NV_FSEC_KEYEN_SHIFT                      6                                                   /*!< NV_FSEC: KEYEN Position                 */
#define NV_FSEC_KEYEN(x)                         (((uint8_t)(((uint8_t)(x))<<NV_FSEC_KEYEN_SHIFT))&NV_FSEC_KEYEN_MASK) /*!< NV_FSEC                                 */
/* ------- FOPT Bit Fields                          ------ */
/**
 * @} */ /* End group NV_Register_Masks_GROUP 
 */

/* NV - Peripheral instance base addresses */
#define NV_BasePtr                     0x00000400UL //!< Peripheral base address
#define NV                             ((NV_Type *) NV_BasePtr) //!< Freescale base pointer
#define NV_BASE_PTR                    (NV) //!< Freescale style base pointer
/**
 * @} */ /* End group NV_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup OSC_Peripheral_access_layer_GROUP OSC Peripheral Access Layer
* @brief C Struct for OSC
* @{
*/

/* ================================================================================ */
/* ================           OSC (file:OSC_MKE)                   ================ */
/* ================================================================================ */

/**
 * @brief Oscillator
 */
/**
* @addtogroup OSC_structs_GROUP OSC struct
* @brief Struct for OSC
* @{
*/
typedef struct {                                /*       OSC Structure                                                */
   __IO uint8_t   CR;                           /**< 0000: Control Register                                             */
} OSC_Type;

/**
 * @} */ /* End group OSC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'OSC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup OSC_Register_Masks_GROUP OSC Register Masks
* @brief Register Masks for OSC
* @{
*/
/* ------- CR Bit Fields                            ------ */
#define OSC_CR_OSCINIT_MASK                      (0x01UL << OSC_CR_OSCINIT_SHIFT)                    /*!< OSC_CR: OSCINIT Mask                    */
#define OSC_CR_OSCINIT_SHIFT                     0                                                   /*!< OSC_CR: OSCINIT Position                */
#define OSC_CR_OSCINIT(x)                        (((uint8_t)(((uint8_t)(x))<<OSC_CR_OSCINIT_SHIFT))&OSC_CR_OSCINIT_MASK) /*!< OSC_CR                                  */
#define OSC_CR_HGO_MASK                          (0x01UL << OSC_CR_HGO_SHIFT)                        /*!< OSC_CR: HGO Mask                        */
#define OSC_CR_HGO_SHIFT                         1                                                   /*!< OSC_CR: HGO Position                    */
#define OSC_CR_HGO(x)                            (((uint8_t)(((uint8_t)(x))<<OSC_CR_HGO_SHIFT))&OSC_CR_HGO_MASK) /*!< OSC_CR                                  */
#define OSC_CR_RANGE_MASK                        (0x01UL << OSC_CR_RANGE_SHIFT)                      /*!< OSC_CR: RANGE Mask                      */
#define OSC_CR_RANGE_SHIFT                       2                                                   /*!< OSC_CR: RANGE Position                  */
#define OSC_CR_RANGE(x)                          (((uint8_t)(((uint8_t)(x))<<OSC_CR_RANGE_SHIFT))&OSC_CR_RANGE_MASK) /*!< OSC_CR                                  */
#define OSC_CR_OSCOS_MASK                        (0x01UL << OSC_CR_OSCOS_SHIFT)                      /*!< OSC_CR: OSCOS Mask                      */
#define OSC_CR_OSCOS_SHIFT                       4                                                   /*!< OSC_CR: OSCOS Position                  */
#define OSC_CR_OSCOS(x)                          (((uint8_t)(((uint8_t)(x))<<OSC_CR_OSCOS_SHIFT))&OSC_CR_OSCOS_MASK) /*!< OSC_CR                                  */
#define OSC_CR_OSCSTEN_MASK                      (0x01UL << OSC_CR_OSCSTEN_SHIFT)                    /*!< OSC_CR: OSCSTEN Mask                    */
#define OSC_CR_OSCSTEN_SHIFT                     5                                                   /*!< OSC_CR: OSCSTEN Position                */
#define OSC_CR_OSCSTEN(x)                        (((uint8_t)(((uint8_t)(x))<<OSC_CR_OSCSTEN_SHIFT))&OSC_CR_OSCSTEN_MASK) /*!< OSC_CR                                  */
#define OSC_CR_OSCEN_MASK                        (0x01UL << OSC_CR_OSCEN_SHIFT)                      /*!< OSC_CR: OSCEN Mask                      */
#define OSC_CR_OSCEN_SHIFT                       7                                                   /*!< OSC_CR: OSCEN Position                  */
#define OSC_CR_OSCEN(x)                          (((uint8_t)(((uint8_t)(x))<<OSC_CR_OSCEN_SHIFT))&OSC_CR_OSCEN_MASK) /*!< OSC_CR                                  */
/**
 * @} */ /* End group OSC_Register_Masks_GROUP 
 */

/* OSC - Peripheral instance base addresses */
#define OSC_BasePtr                    0x40065000UL //!< Peripheral base address
#define OSC                            ((OSC_Type *) OSC_BasePtr) //!< Freescale base pointer
#define OSC_BASE_PTR                   (OSC) //!< Freescale style base pointer
/**
 * @} */ /* End group OSC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PIT_Peripheral_access_layer_GROUP PIT Peripheral Access Layer
* @brief C Struct for PIT
* @{
*/

/* ================================================================================ */
/* ================           PIT (file:PIT_2CH_CHAIN)             ================ */
/* ================================================================================ */

/**
 * @brief Periodic Interrupt Timer (2 channels)
 */
/**
* @addtogroup PIT_structs_GROUP PIT struct
* @brief Struct for PIT
* @{
*/
typedef struct {                                /*       PIT Structure                                                */
   __IO uint32_t  MCR;                          /**< 0000: Module Control Register                                      */
   __I  uint32_t  RESERVED0[63];               
   struct {
      __IO uint32_t  LDVAL;                     /**< 0100: Timer Load Value Register                                    */
      __I  uint32_t  CVAL;                      /**< 0104: Current Timer Value Register                                 */
      __IO uint32_t  TCTRL;                     /**< 0108: Timer Control Register                                       */
      __IO uint32_t  TFLG;                      /**< 010C: Timer Flag Register                                          */
   } CHANNEL[2];                                /**< 0100: (cluster: size=0x0020, 32)                                   */
} PIT_Type;

/**
 * @} */ /* End group PIT_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PIT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PIT_Register_Masks_GROUP PIT Register Masks
* @brief Register Masks for PIT
* @{
*/
/* ------- MCR Bit Fields                           ------ */
#define PIT_MCR_FRZ_MASK                         (0x01UL << PIT_MCR_FRZ_SHIFT)                       /*!< PIT_MCR: FRZ Mask                       */
#define PIT_MCR_FRZ_SHIFT                        0                                                   /*!< PIT_MCR: FRZ Position                   */
#define PIT_MCR_FRZ(x)                           (((uint32_t)(((uint32_t)(x))<<PIT_MCR_FRZ_SHIFT))&PIT_MCR_FRZ_MASK) /*!< PIT_MCR                                 */
#define PIT_MCR_MDIS_MASK                        (0x01UL << PIT_MCR_MDIS_SHIFT)                      /*!< PIT_MCR: MDIS Mask                      */
#define PIT_MCR_MDIS_SHIFT                       1                                                   /*!< PIT_MCR: MDIS Position                  */
#define PIT_MCR_MDIS(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_MCR_MDIS_SHIFT))&PIT_MCR_MDIS_MASK) /*!< PIT_MCR                                 */
/* ------- LDVAL Bit Fields                         ------ */
#define PIT_LDVAL_TSV_MASK                       (0xFFFFFFFFUL << PIT_LDVAL_TSV_SHIFT)               /*!< PIT_LDVAL: TSV Mask                     */
#define PIT_LDVAL_TSV_SHIFT                      0                                                   /*!< PIT_LDVAL: TSV Position                 */
#define PIT_LDVAL_TSV(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_LDVAL_TSV_SHIFT))&PIT_LDVAL_TSV_MASK) /*!< PIT_LDVAL                               */
/* ------- CVAL Bit Fields                          ------ */
#define PIT_CVAL_TVL_MASK                        (0xFFFFFFFFUL << PIT_CVAL_TVL_SHIFT)                /*!< PIT_CVAL: TVL Mask                      */
#define PIT_CVAL_TVL_SHIFT                       0                                                   /*!< PIT_CVAL: TVL Position                  */
#define PIT_CVAL_TVL(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_CVAL_TVL_SHIFT))&PIT_CVAL_TVL_MASK) /*!< PIT_CVAL                                */
/* ------- TCTRL Bit Fields                         ------ */
#define PIT_TCTRL_TEN_MASK                       (0x01UL << PIT_TCTRL_TEN_SHIFT)                     /*!< PIT_TCTRL: TEN Mask                     */
#define PIT_TCTRL_TEN_SHIFT                      0                                                   /*!< PIT_TCTRL: TEN Position                 */
#define PIT_TCTRL_TEN(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_TCTRL_TEN_SHIFT))&PIT_TCTRL_TEN_MASK) /*!< PIT_TCTRL                               */
#define PIT_TCTRL_TIE_MASK                       (0x01UL << PIT_TCTRL_TIE_SHIFT)                     /*!< PIT_TCTRL: TIE Mask                     */
#define PIT_TCTRL_TIE_SHIFT                      1                                                   /*!< PIT_TCTRL: TIE Position                 */
#define PIT_TCTRL_TIE(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_TCTRL_TIE_SHIFT))&PIT_TCTRL_TIE_MASK) /*!< PIT_TCTRL                               */
#define PIT_TCTRL_CHN_MASK                       (0x01UL << PIT_TCTRL_CHN_SHIFT)                     /*!< PIT_TCTRL: CHN Mask                     */
#define PIT_TCTRL_CHN_SHIFT                      2                                                   /*!< PIT_TCTRL: CHN Position                 */
#define PIT_TCTRL_CHN(x)                         (((uint32_t)(((uint32_t)(x))<<PIT_TCTRL_CHN_SHIFT))&PIT_TCTRL_CHN_MASK) /*!< PIT_TCTRL                               */
/* ------- TFLG Bit Fields                          ------ */
#define PIT_TFLG_TIF_MASK                        (0x01UL << PIT_TFLG_TIF_SHIFT)                      /*!< PIT_TFLG: TIF Mask                      */
#define PIT_TFLG_TIF_SHIFT                       0                                                   /*!< PIT_TFLG: TIF Position                  */
#define PIT_TFLG_TIF(x)                          (((uint32_t)(((uint32_t)(x))<<PIT_TFLG_TIF_SHIFT))&PIT_TFLG_TIF_MASK) /*!< PIT_TFLG                                */
/**
 * @} */ /* End group PIT_Register_Masks_GROUP 
 */

/* PIT - Peripheral instance base addresses */
#define PIT_BasePtr                    0x40037000UL //!< Peripheral base address
#define PIT                            ((PIT_Type *) PIT_BasePtr) //!< Freescale base pointer
#define PIT_BASE_PTR                   (PIT) //!< Freescale style base pointer
/**
 * @} */ /* End group PIT_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PMC_Peripheral_access_layer_GROUP PMC Peripheral Access Layer
* @brief C Struct for PMC
* @{
*/

/* ================================================================================ */
/* ================           PMC (file:PMC_MKE)                   ================ */
/* ================================================================================ */

/**
 * @brief Power Management Controller
 */
/**
* @addtogroup PMC_structs_GROUP PMC struct
* @brief Struct for PMC
* @{
*/
typedef struct {                                /*       PMC Structure                                                */
   __IO uint8_t   SPMSC1;                       /**< 0000: System Power Management Status and Control 1 Register        */
   __IO uint8_t   SPMSC2;                       /**< 0001: System Power Management Status and Control 2 Register        */
} PMC_Type;

/**
 * @} */ /* End group PMC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PMC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PMC_Register_Masks_GROUP PMC Register Masks
* @brief Register Masks for PMC
* @{
*/
/* ------- SPMSC1 Bit Fields                        ------ */
#define PMC_SPMSC1_BGBE_MASK                     (0x01UL << PMC_SPMSC1_BGBE_SHIFT)                   /*!< PMC_SPMSC1: BGBE Mask                   */
#define PMC_SPMSC1_BGBE_SHIFT                    0                                                   /*!< PMC_SPMSC1: BGBE Position               */
#define PMC_SPMSC1_BGBE(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_BGBE_SHIFT))&PMC_SPMSC1_BGBE_MASK) /*!< PMC_SPMSC1                              */
#define PMC_SPMSC1_LVDE_MASK                     (0x01UL << PMC_SPMSC1_LVDE_SHIFT)                   /*!< PMC_SPMSC1: LVDE Mask                   */
#define PMC_SPMSC1_LVDE_SHIFT                    2                                                   /*!< PMC_SPMSC1: LVDE Position               */
#define PMC_SPMSC1_LVDE(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_LVDE_SHIFT))&PMC_SPMSC1_LVDE_MASK) /*!< PMC_SPMSC1                              */
#define PMC_SPMSC1_LVDSE_MASK                    (0x01UL << PMC_SPMSC1_LVDSE_SHIFT)                  /*!< PMC_SPMSC1: LVDSE Mask                  */
#define PMC_SPMSC1_LVDSE_SHIFT                   3                                                   /*!< PMC_SPMSC1: LVDSE Position              */
#define PMC_SPMSC1_LVDSE(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_LVDSE_SHIFT))&PMC_SPMSC1_LVDSE_MASK) /*!< PMC_SPMSC1                              */
#define PMC_SPMSC1_LVDRE_MASK                    (0x01UL << PMC_SPMSC1_LVDRE_SHIFT)                  /*!< PMC_SPMSC1: LVDRE Mask                  */
#define PMC_SPMSC1_LVDRE_SHIFT                   4                                                   /*!< PMC_SPMSC1: LVDRE Position              */
#define PMC_SPMSC1_LVDRE(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_LVDRE_SHIFT))&PMC_SPMSC1_LVDRE_MASK) /*!< PMC_SPMSC1                              */
#define PMC_SPMSC1_LVWIE_MASK                    (0x01UL << PMC_SPMSC1_LVWIE_SHIFT)                  /*!< PMC_SPMSC1: LVWIE Mask                  */
#define PMC_SPMSC1_LVWIE_SHIFT                   5                                                   /*!< PMC_SPMSC1: LVWIE Position              */
#define PMC_SPMSC1_LVWIE(x)                      (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_LVWIE_SHIFT))&PMC_SPMSC1_LVWIE_MASK) /*!< PMC_SPMSC1                              */
#define PMC_SPMSC1_LVWACK_MASK                   (0x01UL << PMC_SPMSC1_LVWACK_SHIFT)                 /*!< PMC_SPMSC1: LVWACK Mask                 */
#define PMC_SPMSC1_LVWACK_SHIFT                  6                                                   /*!< PMC_SPMSC1: LVWACK Position             */
#define PMC_SPMSC1_LVWACK(x)                     (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_LVWACK_SHIFT))&PMC_SPMSC1_LVWACK_MASK) /*!< PMC_SPMSC1                              */
#define PMC_SPMSC1_LVWF_MASK                     (0x01UL << PMC_SPMSC1_LVWF_SHIFT)                   /*!< PMC_SPMSC1: LVWF Mask                   */
#define PMC_SPMSC1_LVWF_SHIFT                    7                                                   /*!< PMC_SPMSC1: LVWF Position               */
#define PMC_SPMSC1_LVWF(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC1_LVWF_SHIFT))&PMC_SPMSC1_LVWF_MASK) /*!< PMC_SPMSC1                              */
/* ------- SPMSC2 Bit Fields                        ------ */
#define PMC_SPMSC2_LVWV_MASK                     (0x03UL << PMC_SPMSC2_LVWV_SHIFT)                   /*!< PMC_SPMSC2: LVWV Mask                   */
#define PMC_SPMSC2_LVWV_SHIFT                    4                                                   /*!< PMC_SPMSC2: LVWV Position               */
#define PMC_SPMSC2_LVWV(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC2_LVWV_SHIFT))&PMC_SPMSC2_LVWV_MASK) /*!< PMC_SPMSC2                              */
#define PMC_SPMSC2_LVDV_MASK                     (0x01UL << PMC_SPMSC2_LVDV_SHIFT)                   /*!< PMC_SPMSC2: LVDV Mask                   */
#define PMC_SPMSC2_LVDV_SHIFT                    6                                                   /*!< PMC_SPMSC2: LVDV Position               */
#define PMC_SPMSC2_LVDV(x)                       (((uint8_t)(((uint8_t)(x))<<PMC_SPMSC2_LVDV_SHIFT))&PMC_SPMSC2_LVDV_MASK) /*!< PMC_SPMSC2                              */
/**
 * @} */ /* End group PMC_Register_Masks_GROUP 
 */

/* PMC - Peripheral instance base addresses */
#define PMC_BasePtr                    0x4007D000UL //!< Peripheral base address
#define PMC                            ((PMC_Type *) PMC_BasePtr) //!< Freescale base pointer
#define PMC_BASE_PTR                   (PMC) //!< Freescale style base pointer
/**
 * @} */ /* End group PMC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PORT_Peripheral_access_layer_GROUP PORT Peripheral Access Layer
* @brief C Struct for PORT
* @{
*/

/* ================================================================================ */
/* ================           PORT (file:PORT_MKE04)               ================ */
/* ================================================================================ */

/**
 * @brief Port control
 */
/**
* @addtogroup PORT_structs_GROUP PORT struct
* @brief Struct for PORT
* @{
*/
typedef struct {                                /*       PORT Structure                                               */
   __IO uint32_t  IOFLT;                        /**< 0000: Port Filter Register                                         */
   __IO uint32_t  PUEL;                         /**< 0004: Port Pull-up Enable Low Register                             */
   __I  uint32_t  RESERVED0;                   
   __IO uint32_t  HDRVE;                        /**< 000C: Port High Drive Enable Register                              */
} PORT_Type;

/**
 * @} */ /* End group PORT_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PORT' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PORT_Register_Masks_GROUP PORT Register Masks
* @brief Register Masks for PORT
* @{
*/
/* ------- IOFLT Bit Fields                         ------ */
#define PORT_IOFLT_FLTA_MASK                     (0x03UL << PORT_IOFLT_FLTA_SHIFT)                   /*!< PORT_IOFLT: FLTA Mask                   */
#define PORT_IOFLT_FLTA_SHIFT                    0                                                   /*!< PORT_IOFLT: FLTA Position               */
#define PORT_IOFLT_FLTA(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTA_SHIFT))&PORT_IOFLT_FLTA_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTB_MASK                     (0x03UL << PORT_IOFLT_FLTB_SHIFT)                   /*!< PORT_IOFLT: FLTB Mask                   */
#define PORT_IOFLT_FLTB_SHIFT                    2                                                   /*!< PORT_IOFLT: FLTB Position               */
#define PORT_IOFLT_FLTB(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTB_SHIFT))&PORT_IOFLT_FLTB_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTC_MASK                     (0x03UL << PORT_IOFLT_FLTC_SHIFT)                   /*!< PORT_IOFLT: FLTC Mask                   */
#define PORT_IOFLT_FLTC_SHIFT                    4                                                   /*!< PORT_IOFLT: FLTC Position               */
#define PORT_IOFLT_FLTC(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTC_SHIFT))&PORT_IOFLT_FLTC_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTIIC_MASK                   (0x03UL << PORT_IOFLT_FLTIIC_SHIFT)                 /*!< PORT_IOFLT: FLTIIC Mask                 */
#define PORT_IOFLT_FLTIIC_SHIFT                  10                                                  /*!< PORT_IOFLT: FLTIIC Position             */
#define PORT_IOFLT_FLTIIC(x)                     (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTIIC_SHIFT))&PORT_IOFLT_FLTIIC_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTFTM0_MASK                  (0x03UL << PORT_IOFLT_FLTFTM0_SHIFT)                /*!< PORT_IOFLT: FLTFTM0 Mask                */
#define PORT_IOFLT_FLTFTM0_SHIFT                 12                                                  /*!< PORT_IOFLT: FLTFTM0 Position            */
#define PORT_IOFLT_FLTFTM0(x)                    (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTFTM0_SHIFT))&PORT_IOFLT_FLTFTM0_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTPWT_MASK                   (0x03UL << PORT_IOFLT_FLTPWT_SHIFT)                 /*!< PORT_IOFLT: FLTPWT Mask                 */
#define PORT_IOFLT_FLTPWT_SHIFT                  14                                                  /*!< PORT_IOFLT: FLTPWT Position             */
#define PORT_IOFLT_FLTPWT(x)                     (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTPWT_SHIFT))&PORT_IOFLT_FLTPWT_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTRST_MASK                   (0x03UL << PORT_IOFLT_FLTRST_SHIFT)                 /*!< PORT_IOFLT: FLTRST Mask                 */
#define PORT_IOFLT_FLTRST_SHIFT                  16                                                  /*!< PORT_IOFLT: FLTRST Position             */
#define PORT_IOFLT_FLTRST(x)                     (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTRST_SHIFT))&PORT_IOFLT_FLTRST_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTKBI0_MASK                  (0x03UL << PORT_IOFLT_FLTKBI0_SHIFT)                /*!< PORT_IOFLT: FLTKBI0 Mask                */
#define PORT_IOFLT_FLTKBI0_SHIFT                 18                                                  /*!< PORT_IOFLT: FLTKBI0 Position            */
#define PORT_IOFLT_FLTKBI0(x)                    (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTKBI0_SHIFT))&PORT_IOFLT_FLTKBI0_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTKBI1_MASK                  (0x03UL << PORT_IOFLT_FLTKBI1_SHIFT)                /*!< PORT_IOFLT: FLTKBI1 Mask                */
#define PORT_IOFLT_FLTKBI1_SHIFT                 20                                                  /*!< PORT_IOFLT: FLTKBI1 Position            */
#define PORT_IOFLT_FLTKBI1(x)                    (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTKBI1_SHIFT))&PORT_IOFLT_FLTKBI1_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTNMI_MASK                   (0x03UL << PORT_IOFLT_FLTNMI_SHIFT)                 /*!< PORT_IOFLT: FLTNMI Mask                 */
#define PORT_IOFLT_FLTNMI_SHIFT                  22                                                  /*!< PORT_IOFLT: FLTNMI Position             */
#define PORT_IOFLT_FLTNMI(x)                     (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTNMI_SHIFT))&PORT_IOFLT_FLTNMI_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTDIV1_MASK                  (0x03UL << PORT_IOFLT_FLTDIV1_SHIFT)                /*!< PORT_IOFLT: FLTDIV1 Mask                */
#define PORT_IOFLT_FLTDIV1_SHIFT                 24                                                  /*!< PORT_IOFLT: FLTDIV1 Position            */
#define PORT_IOFLT_FLTDIV1(x)                    (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTDIV1_SHIFT))&PORT_IOFLT_FLTDIV1_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTDIV2_MASK                  (0x07UL << PORT_IOFLT_FLTDIV2_SHIFT)                /*!< PORT_IOFLT: FLTDIV2 Mask                */
#define PORT_IOFLT_FLTDIV2_SHIFT                 26                                                  /*!< PORT_IOFLT: FLTDIV2 Position            */
#define PORT_IOFLT_FLTDIV2(x)                    (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTDIV2_SHIFT))&PORT_IOFLT_FLTDIV2_MASK) /*!< PORT_IOFLT                              */
#define PORT_IOFLT_FLTDIV3_MASK                  (0x07UL << PORT_IOFLT_FLTDIV3_SHIFT)                /*!< PORT_IOFLT: FLTDIV3 Mask                */
#define PORT_IOFLT_FLTDIV3_SHIFT                 29                                                  /*!< PORT_IOFLT: FLTDIV3 Position            */
#define PORT_IOFLT_FLTDIV3(x)                    (((uint32_t)(((uint32_t)(x))<<PORT_IOFLT_FLTDIV3_SHIFT))&PORT_IOFLT_FLTDIV3_MASK) /*!< PORT_IOFLT                              */
/* ------- PUEL Bit Fields                          ------ */
#define PORT_PUEL_PTAPE_MASK                     (0xFFUL << PORT_PUEL_PTAPE_SHIFT)                   /*!< PORT_PUEL: PTAPE Mask                   */
#define PORT_PUEL_PTAPE_SHIFT                    0                                                   /*!< PORT_PUEL: PTAPE Position               */
#define PORT_PUEL_PTAPE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_PUEL_PTAPE_SHIFT))&PORT_PUEL_PTAPE_MASK) /*!< PORT_PUEL                               */
#define PORT_PUEL_PTBPE_MASK                     (0xFFUL << PORT_PUEL_PTBPE_SHIFT)                   /*!< PORT_PUEL: PTBPE Mask                   */
#define PORT_PUEL_PTBPE_SHIFT                    8                                                   /*!< PORT_PUEL: PTBPE Position               */
#define PORT_PUEL_PTBPE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_PUEL_PTBPE_SHIFT))&PORT_PUEL_PTBPE_MASK) /*!< PORT_PUEL                               */
#define PORT_PUEL_PTCPE_MASK                     (0xFFUL << PORT_PUEL_PTCPE_SHIFT)                   /*!< PORT_PUEL: PTCPE Mask                   */
#define PORT_PUEL_PTCPE_SHIFT                    16                                                  /*!< PORT_PUEL: PTCPE Position               */
#define PORT_PUEL_PTCPE(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_PUEL_PTCPE_SHIFT))&PORT_PUEL_PTCPE_MASK) /*!< PORT_PUEL                               */
/* ------- HDRVE Bit Fields                         ------ */
#define PORT_HDRVE_PTB5_MASK                     (0x01UL << PORT_HDRVE_PTB5_SHIFT)                   /*!< PORT_HDRVE: PTB5 Mask                   */
#define PORT_HDRVE_PTB5_SHIFT                    1                                                   /*!< PORT_HDRVE: PTB5 Position               */
#define PORT_HDRVE_PTB5(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_HDRVE_PTB5_SHIFT))&PORT_HDRVE_PTB5_MASK) /*!< PORT_HDRVE                              */
#define PORT_HDRVE_PTC1_MASK                     (0x01UL << PORT_HDRVE_PTC1_SHIFT)                   /*!< PORT_HDRVE: PTC1 Mask                   */
#define PORT_HDRVE_PTC1_SHIFT                    2                                                   /*!< PORT_HDRVE: PTC1 Position               */
#define PORT_HDRVE_PTC1(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_HDRVE_PTC1_SHIFT))&PORT_HDRVE_PTC1_MASK) /*!< PORT_HDRVE                              */
#define PORT_HDRVE_PTC5_MASK                     (0x01UL << PORT_HDRVE_PTC5_SHIFT)                   /*!< PORT_HDRVE: PTC5 Mask                   */
#define PORT_HDRVE_PTC5_SHIFT                    3                                                   /*!< PORT_HDRVE: PTC5 Position               */
#define PORT_HDRVE_PTC5(x)                       (((uint32_t)(((uint32_t)(x))<<PORT_HDRVE_PTC5_SHIFT))&PORT_HDRVE_PTC5_MASK) /*!< PORT_HDRVE                              */
/**
 * @} */ /* End group PORT_Register_Masks_GROUP 
 */

/* PORT - Peripheral instance base addresses */
#define PORT_BasePtr                   0x40049000UL //!< Peripheral base address
#define PORT                           ((PORT_Type *) PORT_BasePtr) //!< Freescale base pointer
#define PORT_BASE_PTR                  (PORT) //!< Freescale style base pointer
/**
 * @} */ /* End group PORT_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup PWT_Peripheral_access_layer_GROUP PWT Peripheral Access Layer
* @brief C Struct for PWT
* @{
*/

/* ================================================================================ */
/* ================           PWT (file:PWT_MKE)                   ================ */
/* ================================================================================ */

/**
 * @brief Pulse Width Timer
 */
/**
* @addtogroup PWT_structs_GROUP PWT struct
* @brief Struct for PWT
* @{
*/
typedef struct {                                /*       PWT Structure                                                */
   __IO uint32_t  R1;                           /**< 0000: Pulse Width Timer Register 1                                 */
   __I  uint32_t  R2;                           /**< 0004: Pulse Width Timer Register 2                                 */
} PWT_Type;

/**
 * @} */ /* End group PWT_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'PWT' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup PWT_Register_Masks_GROUP PWT Register Masks
* @brief Register Masks for PWT
* @{
*/
/* ------- R1 Bit Fields                            ------ */
#define PWT_R1_PWTOV_MASK                        (0x01UL << PWT_R1_PWTOV_SHIFT)                      /*!< PWT_R1: PWTOV Mask                      */
#define PWT_R1_PWTOV_SHIFT                       0                                                   /*!< PWT_R1: PWTOV Position                  */
#define PWT_R1_PWTOV(x)                          (((uint32_t)(((uint32_t)(x))<<PWT_R1_PWTOV_SHIFT))&PWT_R1_PWTOV_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PWTRDY_MASK                       (0x01UL << PWT_R1_PWTRDY_SHIFT)                     /*!< PWT_R1: PWTRDY Mask                     */
#define PWT_R1_PWTRDY_SHIFT                      1                                                   /*!< PWT_R1: PWTRDY Position                 */
#define PWT_R1_PWTRDY(x)                         (((uint32_t)(((uint32_t)(x))<<PWT_R1_PWTRDY_SHIFT))&PWT_R1_PWTRDY_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PWTSR_MASK                        (0x01UL << PWT_R1_PWTSR_SHIFT)                      /*!< PWT_R1: PWTSR Mask                      */
#define PWT_R1_PWTSR_SHIFT                       3                                                   /*!< PWT_R1: PWTSR Position                  */
#define PWT_R1_PWTSR(x)                          (((uint32_t)(((uint32_t)(x))<<PWT_R1_PWTSR_SHIFT))&PWT_R1_PWTSR_MASK) /*!< PWT_R1                                  */
#define PWT_R1_POVIE_MASK                        (0x01UL << PWT_R1_POVIE_SHIFT)                      /*!< PWT_R1: POVIE Mask                      */
#define PWT_R1_POVIE_SHIFT                       4                                                   /*!< PWT_R1: POVIE Position                  */
#define PWT_R1_POVIE(x)                          (((uint32_t)(((uint32_t)(x))<<PWT_R1_POVIE_SHIFT))&PWT_R1_POVIE_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PRDYIE_MASK                       (0x01UL << PWT_R1_PRDYIE_SHIFT)                     /*!< PWT_R1: PRDYIE Mask                     */
#define PWT_R1_PRDYIE_SHIFT                      5                                                   /*!< PWT_R1: PRDYIE Position                 */
#define PWT_R1_PRDYIE(x)                         (((uint32_t)(((uint32_t)(x))<<PWT_R1_PRDYIE_SHIFT))&PWT_R1_PRDYIE_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PWTIE_MASK                        (0x01UL << PWT_R1_PWTIE_SHIFT)                      /*!< PWT_R1: PWTIE Mask                      */
#define PWT_R1_PWTIE_SHIFT                       6                                                   /*!< PWT_R1: PWTIE Position                  */
#define PWT_R1_PWTIE(x)                          (((uint32_t)(((uint32_t)(x))<<PWT_R1_PWTIE_SHIFT))&PWT_R1_PWTIE_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PWTEN_MASK                        (0x01UL << PWT_R1_PWTEN_SHIFT)                      /*!< PWT_R1: PWTEN Mask                      */
#define PWT_R1_PWTEN_SHIFT                       7                                                   /*!< PWT_R1: PWTEN Position                  */
#define PWT_R1_PWTEN(x)                          (((uint32_t)(((uint32_t)(x))<<PWT_R1_PWTEN_SHIFT))&PWT_R1_PWTEN_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PRE_MASK                          (0x07UL << PWT_R1_PRE_SHIFT)                        /*!< PWT_R1: PRE Mask                        */
#define PWT_R1_PRE_SHIFT                         8                                                   /*!< PWT_R1: PRE Position                    */
#define PWT_R1_PRE(x)                            (((uint32_t)(((uint32_t)(x))<<PWT_R1_PRE_SHIFT))&PWT_R1_PRE_MASK) /*!< PWT_R1                                  */
#define PWT_R1_EDGE_MASK                         (0x03UL << PWT_R1_EDGE_SHIFT)                       /*!< PWT_R1: EDGE Mask                       */
#define PWT_R1_EDGE_SHIFT                        11                                                  /*!< PWT_R1: EDGE Position                   */
#define PWT_R1_EDGE(x)                           (((uint32_t)(((uint32_t)(x))<<PWT_R1_EDGE_SHIFT))&PWT_R1_EDGE_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PINSEL_MASK                       (0x03UL << PWT_R1_PINSEL_SHIFT)                     /*!< PWT_R1: PINSEL Mask                     */
#define PWT_R1_PINSEL_SHIFT                      13                                                  /*!< PWT_R1: PINSEL Position                 */
#define PWT_R1_PINSEL(x)                         (((uint32_t)(((uint32_t)(x))<<PWT_R1_PINSEL_SHIFT))&PWT_R1_PINSEL_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PCLKS_MASK                        (0x01UL << PWT_R1_PCLKS_SHIFT)                      /*!< PWT_R1: PCLKS Mask                      */
#define PWT_R1_PCLKS_SHIFT                       15                                                  /*!< PWT_R1: PCLKS Position                  */
#define PWT_R1_PCLKS(x)                          (((uint32_t)(((uint32_t)(x))<<PWT_R1_PCLKS_SHIFT))&PWT_R1_PCLKS_MASK) /*!< PWT_R1                                  */
#define PWT_R1_PPW_MASK                          (0xFFFFUL << PWT_R1_PPW_SHIFT)                      /*!< PWT_R1: PPW Mask                        */
#define PWT_R1_PPW_SHIFT                         16                                                  /*!< PWT_R1: PPW Position                    */
#define PWT_R1_PPW(x)                            (((uint32_t)(((uint32_t)(x))<<PWT_R1_PPW_SHIFT))&PWT_R1_PPW_MASK) /*!< PWT_R1                                  */
/* ------- R2 Bit Fields                            ------ */
#define PWT_R2_NPW_MASK                          (0xFFFFUL << PWT_R2_NPW_SHIFT)                      /*!< PWT_R2: NPW Mask                        */
#define PWT_R2_NPW_SHIFT                         0                                                   /*!< PWT_R2: NPW Position                    */
#define PWT_R2_NPW(x)                            (((uint32_t)(((uint32_t)(x))<<PWT_R2_NPW_SHIFT))&PWT_R2_NPW_MASK) /*!< PWT_R2                                  */
#define PWT_R2_PWTC_MASK                         (0xFFFFUL << PWT_R2_PWTC_SHIFT)                     /*!< PWT_R2: PWTC Mask                       */
#define PWT_R2_PWTC_SHIFT                        16                                                  /*!< PWT_R2: PWTC Position                   */
#define PWT_R2_PWTC(x)                           (((uint32_t)(((uint32_t)(x))<<PWT_R2_PWTC_SHIFT))&PWT_R2_PWTC_MASK) /*!< PWT_R2                                  */
/**
 * @} */ /* End group PWT_Register_Masks_GROUP 
 */

/* PWT - Peripheral instance base addresses */
#define PWT_BasePtr                    0x40033000UL //!< Peripheral base address
#define PWT                            ((PWT_Type *) PWT_BasePtr) //!< Freescale base pointer
#define PWT_BASE_PTR                   (PWT) //!< Freescale style base pointer
/**
 * @} */ /* End group PWT_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup ROM_Peripheral_access_layer_GROUP ROM Peripheral Access Layer
* @brief C Struct for ROM
* @{
*/

/* ================================================================================ */
/* ================           ROM (file:ROM_0)                     ================ */
/* ================================================================================ */

/**
 * @brief System ROM
 */
/**
* @addtogroup ROM_structs_GROUP ROM struct
* @brief Struct for ROM
* @{
*/
typedef struct {                                /*       ROM Structure                                                */
   __I  uint32_t  ENTRY;                        /**< 0000: Entry                                                        */
   __I  uint32_t  TABLEMARK;                    /**< 0004: End of Table Marker Register                                 */
   __I  uint32_t  RESERVED0[1009];             
   __I  uint32_t  SYSACCESS;                    /**< 0FCC: System Access Register                                       */
   __I  uint32_t  PERIPHID4;                    /**< 0FD0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID5;                    /**< 0FD4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID6;                    /**< 0FD8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID7;                    /**< 0FDC: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID0;                    /**< 0FE0: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID1;                    /**< 0FE4: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID2;                    /**< 0FE8: Peripheral ID Register                                       */
   __I  uint32_t  PERIPHID3;                    /**< 0FEC: Peripheral ID Register                                       */
   __I  uint32_t  COMPID[4];                    /**< 0FF0: Component ID Register                                        */
} ROM_Type;

/**
 * @} */ /* End group ROM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'ROM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup ROM_Register_Masks_GROUP ROM Register Masks
* @brief Register Masks for ROM
* @{
*/
/* ------- ENTRY Bit Fields                         ------ */
#define ROM_ENTRY_ENTRY_MASK                     (0xFFFFFFFFUL << ROM_ENTRY_ENTRY_SHIFT)             /*!< ROM_ENTRY: ENTRY Mask                   */
#define ROM_ENTRY_ENTRY_SHIFT                    0                                                   /*!< ROM_ENTRY: ENTRY Position               */
#define ROM_ENTRY_ENTRY(x)                       (((uint32_t)(((uint32_t)(x))<<ROM_ENTRY_ENTRY_SHIFT))&ROM_ENTRY_ENTRY_MASK) /*!< ROM_ENTRY                               */
/* ------- TABLEMARK Bit Fields                     ------ */
#define ROM_TABLEMARK_MARK_MASK                  (0xFFFFFFFFUL << ROM_TABLEMARK_MARK_SHIFT)          /*!< ROM_TABLEMARK: MARK Mask                */
#define ROM_TABLEMARK_MARK_SHIFT                 0                                                   /*!< ROM_TABLEMARK: MARK Position            */
#define ROM_TABLEMARK_MARK(x)                    (((uint32_t)(((uint32_t)(x))<<ROM_TABLEMARK_MARK_SHIFT))&ROM_TABLEMARK_MARK_MASK) /*!< ROM_TABLEMARK                           */
/* ------- SYSACCESS Bit Fields                     ------ */
#define ROM_SYSACCESS_SYSACCESS_MASK             (0xFFFFFFFFUL << ROM_SYSACCESS_SYSACCESS_SHIFT)     /*!< ROM_SYSACCESS: SYSACCESS Mask           */
#define ROM_SYSACCESS_SYSACCESS_SHIFT            0                                                   /*!< ROM_SYSACCESS: SYSACCESS Position       */
#define ROM_SYSACCESS_SYSACCESS(x)               (((uint32_t)(((uint32_t)(x))<<ROM_SYSACCESS_SYSACCESS_SHIFT))&ROM_SYSACCESS_SYSACCESS_MASK) /*!< ROM_SYSACCESS                           */
/* ------- PERIPHID Bit Fields                      ------ */
#define ROM_PERIPHID_PERIPHID_MASK               (0xFFFFFFFFUL << ROM_PERIPHID_PERIPHID_SHIFT)       /*!< ROM_PERIPHID: PERIPHID Mask             */
#define ROM_PERIPHID_PERIPHID_SHIFT              0                                                   /*!< ROM_PERIPHID: PERIPHID Position         */
#define ROM_PERIPHID_PERIPHID(x)                 (((uint32_t)(((uint32_t)(x))<<ROM_PERIPHID_PERIPHID_SHIFT))&ROM_PERIPHID_PERIPHID_MASK) /*!< ROM_PERIPHID                            */
/* ------- COMPID Bit Fields                        ------ */
#define ROM_COMPID_COMPID_MASK                   (0xFFFFFFFFUL << ROM_COMPID_COMPID_SHIFT)           /*!< ROM_COMPID: COMPID Mask                 */
#define ROM_COMPID_COMPID_SHIFT                  0                                                   /*!< ROM_COMPID: COMPID Position             */
#define ROM_COMPID_COMPID(x)                     (((uint32_t)(((uint32_t)(x))<<ROM_COMPID_COMPID_SHIFT))&ROM_COMPID_COMPID_MASK) /*!< ROM_COMPID                              */
/**
 * @} */ /* End group ROM_Register_Masks_GROUP 
 */

/* ROM - Peripheral instance base addresses */
#define ROM_BasePtr                    0xF0002000UL //!< Peripheral base address
#define ROM                            ((ROM_Type *) ROM_BasePtr) //!< Freescale base pointer
#define ROM_BASE_PTR                   (ROM) //!< Freescale style base pointer
/**
 * @} */ /* End group ROM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup RTC_Peripheral_access_layer_GROUP RTC Peripheral Access Layer
* @brief C Struct for RTC
* @{
*/

/* ================================================================================ */
/* ================           RTC (file:RTC_MKE)                   ================ */
/* ================================================================================ */

/**
 * @brief Real-time counter
 */
/**
* @addtogroup RTC_structs_GROUP RTC struct
* @brief Struct for RTC
* @{
*/
typedef struct {                                /*       RTC Structure                                                */
   __IO uint32_t  SC;                           /**< 0000: Status and Control Register                                  */
   __IO uint32_t  MOD;                          /**< 0004: Modulo Register: Contains the modulo value used to reset the count to 0x0000 upon a compare match and set SC[RTIF] status field */
   __I  uint32_t  CNT;                          /**< 0008: Counter Register: Reset or writing different values to SC[RTCLKS] and SC[RTCPS] clear the count to 0x0000 */
} RTC_Type;

/**
 * @} */ /* End group RTC_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'RTC' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup RTC_Register_Masks_GROUP RTC Register Masks
* @brief Register Masks for RTC
* @{
*/
/* ------- SC Bit Fields                            ------ */
#define RTC_SC_RTCO_MASK                         (0x01UL << RTC_SC_RTCO_SHIFT)                       /*!< RTC_SC: RTCO Mask                       */
#define RTC_SC_RTCO_SHIFT                        4                                                   /*!< RTC_SC: RTCO Position                   */
#define RTC_SC_RTCO(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_SC_RTCO_SHIFT))&RTC_SC_RTCO_MASK) /*!< RTC_SC                                  */
#define RTC_SC_RTIE_MASK                         (0x01UL << RTC_SC_RTIE_SHIFT)                       /*!< RTC_SC: RTIE Mask                       */
#define RTC_SC_RTIE_SHIFT                        6                                                   /*!< RTC_SC: RTIE Position                   */
#define RTC_SC_RTIE(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_SC_RTIE_SHIFT))&RTC_SC_RTIE_MASK) /*!< RTC_SC                                  */
#define RTC_SC_RTIF_MASK                         (0x01UL << RTC_SC_RTIF_SHIFT)                       /*!< RTC_SC: RTIF Mask                       */
#define RTC_SC_RTIF_SHIFT                        7                                                   /*!< RTC_SC: RTIF Position                   */
#define RTC_SC_RTIF(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_SC_RTIF_SHIFT))&RTC_SC_RTIF_MASK) /*!< RTC_SC                                  */
#define RTC_SC_RTCPS_MASK                        (0x07UL << RTC_SC_RTCPS_SHIFT)                      /*!< RTC_SC: RTCPS Mask                      */
#define RTC_SC_RTCPS_SHIFT                       8                                                   /*!< RTC_SC: RTCPS Position                  */
#define RTC_SC_RTCPS(x)                          (((uint32_t)(((uint32_t)(x))<<RTC_SC_RTCPS_SHIFT))&RTC_SC_RTCPS_MASK) /*!< RTC_SC                                  */
#define RTC_SC_RTCLKS_MASK                       (0x03UL << RTC_SC_RTCLKS_SHIFT)                     /*!< RTC_SC: RTCLKS Mask                     */
#define RTC_SC_RTCLKS_SHIFT                      14                                                  /*!< RTC_SC: RTCLKS Position                 */
#define RTC_SC_RTCLKS(x)                         (((uint32_t)(((uint32_t)(x))<<RTC_SC_RTCLKS_SHIFT))&RTC_SC_RTCLKS_MASK) /*!< RTC_SC                                  */
/* ------- MOD Bit Fields                           ------ */
#define RTC_MOD_MOD_MASK                         (0xFFFFUL << RTC_MOD_MOD_SHIFT)                     /*!< RTC_MOD: MOD Mask                       */
#define RTC_MOD_MOD_SHIFT                        0                                                   /*!< RTC_MOD: MOD Position                   */
#define RTC_MOD_MOD(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_MOD_MOD_SHIFT))&RTC_MOD_MOD_MASK) /*!< RTC_MOD                                 */
/* ------- CNT Bit Fields                           ------ */
#define RTC_CNT_CNT_MASK                         (0xFFFFUL << RTC_CNT_CNT_SHIFT)                     /*!< RTC_CNT: CNT Mask                       */
#define RTC_CNT_CNT_SHIFT                        0                                                   /*!< RTC_CNT: CNT Position                   */
#define RTC_CNT_CNT(x)                           (((uint32_t)(((uint32_t)(x))<<RTC_CNT_CNT_SHIFT))&RTC_CNT_CNT_MASK) /*!< RTC_CNT                                 */
/**
 * @} */ /* End group RTC_Register_Masks_GROUP 
 */

/* RTC - Peripheral instance base addresses */
#define RTC_BasePtr                    0x4003D000UL //!< Peripheral base address
#define RTC                            ((RTC_Type *) RTC_BasePtr) //!< Freescale base pointer
#define RTC_BASE_PTR                   (RTC) //!< Freescale style base pointer
/**
 * @} */ /* End group RTC_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SIM_Peripheral_access_layer_GROUP SIM Peripheral Access Layer
* @brief C Struct for SIM
* @{
*/

/* ================================================================================ */
/* ================           SIM (file:SIM_MKE04Z4)               ================ */
/* ================================================================================ */

/**
 * @brief System Integration Module
 */
/**
* @addtogroup SIM_structs_GROUP SIM struct
* @brief Struct for SIM
* @{
*/
typedef struct {                                /*       SIM Structure                                                */
   __I  uint32_t  SRSID;                        /**< 0000: System Reset Status and ID Register                          */
   __IO uint32_t  SOPT;                         /**< 0004: System Options Register                                      */
   __IO uint32_t  PINSEL;                       /**< 0008: Pin Selection Register                                       */
   __IO uint32_t  SCGC;                         /**< 000C: System Clock Gating Control Register                         */
   __IO uint32_t  UUIDL;                        /**< 0010: Universally Unique Identifier Low Register                   */
   __IO uint32_t  UUIDH;                        /**< 0014: Universally Unique Identifier Middle Low Register            */
   __IO uint32_t  UUIDMH;                       /**< 0018: Universally Unique Identifier Middle High Register           */
   __IO uint32_t  CLKDIV;                       /**< 001C: BUS Clock Divider Register                                   */
} SIM_Type;

/**
 * @} */ /* End group SIM_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SIM' Position & Mask macros                         ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SIM_Register_Masks_GROUP SIM Register Masks
* @brief Register Masks for SIM
* @{
*/
/* ------- SRSID Bit Fields                         ------ */
#define SIM_SRSID_LVD_MASK                       (0x01UL << SIM_SRSID_LVD_SHIFT)                     /*!< SIM_SRSID: LVD Mask                     */
#define SIM_SRSID_LVD_SHIFT                      1                                                   /*!< SIM_SRSID: LVD Position                 */
#define SIM_SRSID_LVD(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_LVD_SHIFT))&SIM_SRSID_LVD_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_LOC_MASK                       (0x01UL << SIM_SRSID_LOC_SHIFT)                     /*!< SIM_SRSID: LOC Mask                     */
#define SIM_SRSID_LOC_SHIFT                      2                                                   /*!< SIM_SRSID: LOC Position                 */
#define SIM_SRSID_LOC(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_LOC_SHIFT))&SIM_SRSID_LOC_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_WDOG_MASK                      (0x01UL << SIM_SRSID_WDOG_SHIFT)                    /*!< SIM_SRSID: WDOG Mask                    */
#define SIM_SRSID_WDOG_SHIFT                     5                                                   /*!< SIM_SRSID: WDOG Position                */
#define SIM_SRSID_WDOG(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_WDOG_SHIFT))&SIM_SRSID_WDOG_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_PIN_MASK                       (0x01UL << SIM_SRSID_PIN_SHIFT)                     /*!< SIM_SRSID: PIN Mask                     */
#define SIM_SRSID_PIN_SHIFT                      6                                                   /*!< SIM_SRSID: PIN Position                 */
#define SIM_SRSID_PIN(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_PIN_SHIFT))&SIM_SRSID_PIN_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_POR_MASK                       (0x01UL << SIM_SRSID_POR_SHIFT)                     /*!< SIM_SRSID: POR Mask                     */
#define SIM_SRSID_POR_SHIFT                      7                                                   /*!< SIM_SRSID: POR Position                 */
#define SIM_SRSID_POR(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_POR_SHIFT))&SIM_SRSID_POR_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_LOCKUP_MASK                    (0x01UL << SIM_SRSID_LOCKUP_SHIFT)                  /*!< SIM_SRSID: LOCKUP Mask                  */
#define SIM_SRSID_LOCKUP_SHIFT                   9                                                   /*!< SIM_SRSID: LOCKUP Position              */
#define SIM_SRSID_LOCKUP(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_LOCKUP_SHIFT))&SIM_SRSID_LOCKUP_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_SW_MASK                        (0x01UL << SIM_SRSID_SW_SHIFT)                      /*!< SIM_SRSID: SW Mask                      */
#define SIM_SRSID_SW_SHIFT                       10                                                  /*!< SIM_SRSID: SW Position                  */
#define SIM_SRSID_SW(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_SW_SHIFT))&SIM_SRSID_SW_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_MDMAP_MASK                     (0x01UL << SIM_SRSID_MDMAP_SHIFT)                   /*!< SIM_SRSID: MDMAP Mask                   */
#define SIM_SRSID_MDMAP_SHIFT                    11                                                  /*!< SIM_SRSID: MDMAP Position               */
#define SIM_SRSID_MDMAP(x)                       (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_MDMAP_SHIFT))&SIM_SRSID_MDMAP_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_SACKERR_MASK                   (0x01UL << SIM_SRSID_SACKERR_SHIFT)                 /*!< SIM_SRSID: SACKERR Mask                 */
#define SIM_SRSID_SACKERR_SHIFT                  13                                                  /*!< SIM_SRSID: SACKERR Position             */
#define SIM_SRSID_SACKERR(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_SACKERR_SHIFT))&SIM_SRSID_SACKERR_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_PINID_MASK                     (0x0FUL << SIM_SRSID_PINID_SHIFT)                   /*!< SIM_SRSID: PINID Mask                   */
#define SIM_SRSID_PINID_SHIFT                    16                                                  /*!< SIM_SRSID: PINID Position               */
#define SIM_SRSID_PINID(x)                       (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_PINID_SHIFT))&SIM_SRSID_PINID_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_REVID_MASK                     (0x0FUL << SIM_SRSID_REVID_SHIFT)                   /*!< SIM_SRSID: REVID Mask                   */
#define SIM_SRSID_REVID_SHIFT                    20                                                  /*!< SIM_SRSID: REVID Position               */
#define SIM_SRSID_REVID(x)                       (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_REVID_SHIFT))&SIM_SRSID_REVID_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_SUBFAMID_MASK                  (0x0FUL << SIM_SRSID_SUBFAMID_SHIFT)                /*!< SIM_SRSID: SUBFAMID Mask                */
#define SIM_SRSID_SUBFAMID_SHIFT                 24                                                  /*!< SIM_SRSID: SUBFAMID Position            */
#define SIM_SRSID_SUBFAMID(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_SUBFAMID_SHIFT))&SIM_SRSID_SUBFAMID_MASK) /*!< SIM_SRSID                               */
#define SIM_SRSID_FAMID_MASK                     (0x0FUL << SIM_SRSID_FAMID_SHIFT)                   /*!< SIM_SRSID: FAMID Mask                   */
#define SIM_SRSID_FAMID_SHIFT                    28                                                  /*!< SIM_SRSID: FAMID Position               */
#define SIM_SRSID_FAMID(x)                       (((uint32_t)(((uint32_t)(x))<<SIM_SRSID_FAMID_SHIFT))&SIM_SRSID_FAMID_MASK) /*!< SIM_SRSID                               */
/* ------- SOPT Bit Fields                          ------ */
#define SIM_SOPT_NMIE_MASK                       (0x01UL << SIM_SOPT_NMIE_SHIFT)                     /*!< SIM_SOPT: NMIE Mask                     */
#define SIM_SOPT_NMIE_SHIFT                      1                                                   /*!< SIM_SOPT: NMIE Position                 */
#define SIM_SOPT_NMIE(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_NMIE_SHIFT))&SIM_SOPT_NMIE_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_RSTPE_MASK                      (0x01UL << SIM_SOPT_RSTPE_SHIFT)                    /*!< SIM_SOPT: RSTPE Mask                    */
#define SIM_SOPT_RSTPE_SHIFT                     2                                                   /*!< SIM_SOPT: RSTPE Position                */
#define SIM_SOPT_RSTPE(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_RSTPE_SHIFT))&SIM_SOPT_RSTPE_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_SWDE_MASK                       (0x01UL << SIM_SOPT_SWDE_SHIFT)                     /*!< SIM_SOPT: SWDE Mask                     */
#define SIM_SOPT_SWDE_SHIFT                      3                                                   /*!< SIM_SOPT: SWDE Position                 */
#define SIM_SOPT_SWDE(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_SWDE_SHIFT))&SIM_SOPT_SWDE_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_ACTRG_MASK                      (0x01UL << SIM_SOPT_ACTRG_SHIFT)                    /*!< SIM_SOPT: ACTRG Mask                    */
#define SIM_SOPT_ACTRG_SHIFT                     5                                                   /*!< SIM_SOPT: ACTRG Position                */
#define SIM_SOPT_ACTRG(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_ACTRG_SHIFT))&SIM_SOPT_ACTRG_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_FTMIC_MASK                      (0x03UL << SIM_SOPT_FTMIC_SHIFT)                    /*!< SIM_SOPT: FTMIC Mask                    */
#define SIM_SOPT_FTMIC_SHIFT                     6                                                   /*!< SIM_SOPT: FTMIC Position                */
#define SIM_SOPT_FTMIC(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_FTMIC_SHIFT))&SIM_SOPT_FTMIC_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_RXDFE_MASK                      (0x03UL << SIM_SOPT_RXDFE_SHIFT)                    /*!< SIM_SOPT: RXDFE Mask                    */
#define SIM_SOPT_RXDFE_SHIFT                     8                                                   /*!< SIM_SOPT: RXDFE Position                */
#define SIM_SOPT_RXDFE(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_RXDFE_SHIFT))&SIM_SOPT_RXDFE_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_RXDCE_MASK                      (0x01UL << SIM_SOPT_RXDCE_SHIFT)                    /*!< SIM_SOPT: RXDCE Mask                    */
#define SIM_SOPT_RXDCE_SHIFT                     12                                                  /*!< SIM_SOPT: RXDCE Position                */
#define SIM_SOPT_RXDCE(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_RXDCE_SHIFT))&SIM_SOPT_RXDCE_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_FTMSYNC_MASK                    (0x01UL << SIM_SOPT_FTMSYNC_SHIFT)                  /*!< SIM_SOPT: FTMSYNC Mask                  */
#define SIM_SOPT_FTMSYNC_SHIFT                   14                                                  /*!< SIM_SOPT: FTMSYNC Position              */
#define SIM_SOPT_FTMSYNC(x)                      (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_FTMSYNC_SHIFT))&SIM_SOPT_FTMSYNC_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_TXDME_MASK                      (0x01UL << SIM_SOPT_TXDME_SHIFT)                    /*!< SIM_SOPT: TXDME Mask                    */
#define SIM_SOPT_TXDME_SHIFT                     15                                                  /*!< SIM_SOPT: TXDME Position                */
#define SIM_SOPT_TXDME(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_TXDME_SHIFT))&SIM_SOPT_TXDME_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_BUSREF_MASK                     (0x07UL << SIM_SOPT_BUSREF_SHIFT)                   /*!< SIM_SOPT: BUSREF Mask                   */
#define SIM_SOPT_BUSREF_SHIFT                    16                                                  /*!< SIM_SOPT: BUSREF Position               */
#define SIM_SOPT_BUSREF(x)                       (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_BUSREF_SHIFT))&SIM_SOPT_BUSREF_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_CLKOE_MASK                      (0x01UL << SIM_SOPT_CLKOE_SHIFT)                    /*!< SIM_SOPT: CLKOE Mask                    */
#define SIM_SOPT_CLKOE_SHIFT                     19                                                  /*!< SIM_SOPT: CLKOE Position                */
#define SIM_SOPT_CLKOE(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_CLKOE_SHIFT))&SIM_SOPT_CLKOE_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_ADHWT_MASK                      (0x07UL << SIM_SOPT_ADHWT_SHIFT)                    /*!< SIM_SOPT: ADHWT Mask                    */
#define SIM_SOPT_ADHWT_SHIFT                     20                                                  /*!< SIM_SOPT: ADHWT Position                */
#define SIM_SOPT_ADHWT(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_ADHWT_SHIFT))&SIM_SOPT_ADHWT_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_DLYACT_MASK                     (0x01UL << SIM_SOPT_DLYACT_SHIFT)                   /*!< SIM_SOPT: DLYACT Mask                   */
#define SIM_SOPT_DLYACT_SHIFT                    23                                                  /*!< SIM_SOPT: DLYACT Position               */
#define SIM_SOPT_DLYACT(x)                       (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_DLYACT_SHIFT))&SIM_SOPT_DLYACT_MASK) /*!< SIM_SOPT                                */
#define SIM_SOPT_DELAY_MASK                      (0xFFUL << SIM_SOPT_DELAY_SHIFT)                    /*!< SIM_SOPT: DELAY Mask                    */
#define SIM_SOPT_DELAY_SHIFT                     24                                                  /*!< SIM_SOPT: DELAY Position                */
#define SIM_SOPT_DELAY(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SOPT_DELAY_SHIFT))&SIM_SOPT_DELAY_MASK) /*!< SIM_SOPT                                */
/* ------- PINSEL Bit Fields                        ------ */
#define SIM_PINSEL_I2C0PS_MASK                   (0x01UL << SIM_PINSEL_I2C0PS_SHIFT)                 /*!< SIM_PINSEL: I2C0PS Mask                 */
#define SIM_PINSEL_I2C0PS_SHIFT                  5                                                   /*!< SIM_PINSEL: I2C0PS Position             */
#define SIM_PINSEL_I2C0PS(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_I2C0PS_SHIFT))&SIM_PINSEL_I2C0PS_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_SPI0PS_MASK                   (0x01UL << SIM_PINSEL_SPI0PS_SHIFT)                 /*!< SIM_PINSEL: SPI0PS Mask                 */
#define SIM_PINSEL_SPI0PS_SHIFT                  6                                                   /*!< SIM_PINSEL: SPI0PS Position             */
#define SIM_PINSEL_SPI0PS(x)                     (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_SPI0PS_SHIFT))&SIM_PINSEL_SPI0PS_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_UART0PS_MASK                  (0x01UL << SIM_PINSEL_UART0PS_SHIFT)                /*!< SIM_PINSEL: UART0PS Mask                */
#define SIM_PINSEL_UART0PS_SHIFT                 7                                                   /*!< SIM_PINSEL: UART0PS Position            */
#define SIM_PINSEL_UART0PS(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_UART0PS_SHIFT))&SIM_PINSEL_UART0PS_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_FTM0PS0_MASK                  (0x01UL << SIM_PINSEL_FTM0PS0_SHIFT)                /*!< SIM_PINSEL: FTM0PS0 Mask                */
#define SIM_PINSEL_FTM0PS0_SHIFT                 8                                                   /*!< SIM_PINSEL: FTM0PS0 Position            */
#define SIM_PINSEL_FTM0PS0(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_FTM0PS0_SHIFT))&SIM_PINSEL_FTM0PS0_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_FTM0PS1_MASK                  (0x01UL << SIM_PINSEL_FTM0PS1_SHIFT)                /*!< SIM_PINSEL: FTM0PS1 Mask                */
#define SIM_PINSEL_FTM0PS1_SHIFT                 9                                                   /*!< SIM_PINSEL: FTM0PS1 Position            */
#define SIM_PINSEL_FTM0PS1(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_FTM0PS1_SHIFT))&SIM_PINSEL_FTM0PS1_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_FTM2PS2_MASK                  (0x01UL << SIM_PINSEL_FTM2PS2_SHIFT)                /*!< SIM_PINSEL: FTM2PS2 Mask                */
#define SIM_PINSEL_FTM2PS2_SHIFT                 14                                                  /*!< SIM_PINSEL: FTM2PS2 Position            */
#define SIM_PINSEL_FTM2PS2(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_FTM2PS2_SHIFT))&SIM_PINSEL_FTM2PS2_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_FTM2PS3_MASK                  (0x01UL << SIM_PINSEL_FTM2PS3_SHIFT)                /*!< SIM_PINSEL: FTM2PS3 Mask                */
#define SIM_PINSEL_FTM2PS3_SHIFT                 15                                                  /*!< SIM_PINSEL: FTM2PS3 Position            */
#define SIM_PINSEL_FTM2PS3(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_FTM2PS3_SHIFT))&SIM_PINSEL_FTM2PS3_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_FTM0CLKPS_MASK                (0x01UL << SIM_PINSEL_FTM0CLKPS_SHIFT)              /*!< SIM_PINSEL: FTM0CLKPS Mask              */
#define SIM_PINSEL_FTM0CLKPS_SHIFT               28                                                  /*!< SIM_PINSEL: FTM0CLKPS Position          */
#define SIM_PINSEL_FTM0CLKPS(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_FTM0CLKPS_SHIFT))&SIM_PINSEL_FTM0CLKPS_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_FTM2CLKPS_MASK                (0x01UL << SIM_PINSEL_FTM2CLKPS_SHIFT)              /*!< SIM_PINSEL: FTM2CLKPS Mask              */
#define SIM_PINSEL_FTM2CLKPS_SHIFT               30                                                  /*!< SIM_PINSEL: FTM2CLKPS Position          */
#define SIM_PINSEL_FTM2CLKPS(x)                  (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_FTM2CLKPS_SHIFT))&SIM_PINSEL_FTM2CLKPS_MASK) /*!< SIM_PINSEL                              */
#define SIM_PINSEL_PWTCLKPS_MASK                 (0x01UL << SIM_PINSEL_PWTCLKPS_SHIFT)               /*!< SIM_PINSEL: PWTCLKPS Mask               */
#define SIM_PINSEL_PWTCLKPS_SHIFT                31                                                  /*!< SIM_PINSEL: PWTCLKPS Position           */
#define SIM_PINSEL_PWTCLKPS(x)                   (((uint32_t)(((uint32_t)(x))<<SIM_PINSEL_PWTCLKPS_SHIFT))&SIM_PINSEL_PWTCLKPS_MASK) /*!< SIM_PINSEL                              */
/* ------- SCGC Bit Fields                          ------ */
#define SIM_SCGC_RTC_MASK                        (0x01UL << SIM_SCGC_RTC_SHIFT)                      /*!< SIM_SCGC: RTC Mask                      */
#define SIM_SCGC_RTC_SHIFT                       0                                                   /*!< SIM_SCGC: RTC Position                  */
#define SIM_SCGC_RTC(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_RTC_SHIFT))&SIM_SCGC_RTC_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_PIT_MASK                        (0x01UL << SIM_SCGC_PIT_SHIFT)                      /*!< SIM_SCGC: PIT Mask                      */
#define SIM_SCGC_PIT_SHIFT                       1                                                   /*!< SIM_SCGC: PIT Position                  */
#define SIM_SCGC_PIT(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_PIT_SHIFT))&SIM_SCGC_PIT_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_PWT_MASK                        (0x01UL << SIM_SCGC_PWT_SHIFT)                      /*!< SIM_SCGC: PWT Mask                      */
#define SIM_SCGC_PWT_SHIFT                       4                                                   /*!< SIM_SCGC: PWT Position                  */
#define SIM_SCGC_PWT(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_PWT_SHIFT))&SIM_SCGC_PWT_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_FTM0_MASK                       (0x01UL << SIM_SCGC_FTM0_SHIFT)                     /*!< SIM_SCGC: FTM0 Mask                     */
#define SIM_SCGC_FTM0_SHIFT                      5                                                   /*!< SIM_SCGC: FTM0 Position                 */
#define SIM_SCGC_FTM0(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_FTM0_SHIFT))&SIM_SCGC_FTM0_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_FTM2_MASK                       (0x01UL << SIM_SCGC_FTM2_SHIFT)                     /*!< SIM_SCGC: FTM2 Mask                     */
#define SIM_SCGC_FTM2_SHIFT                      7                                                   /*!< SIM_SCGC: FTM2 Position                 */
#define SIM_SCGC_FTM2(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_FTM2_SHIFT))&SIM_SCGC_FTM2_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_CRC_MASK                        (0x01UL << SIM_SCGC_CRC_SHIFT)                      /*!< SIM_SCGC: CRC Mask                      */
#define SIM_SCGC_CRC_SHIFT                       10                                                  /*!< SIM_SCGC: CRC Position                  */
#define SIM_SCGC_CRC(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_CRC_SHIFT))&SIM_SCGC_CRC_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_FLASH_MASK                      (0x01UL << SIM_SCGC_FLASH_SHIFT)                    /*!< SIM_SCGC: FLASH Mask                    */
#define SIM_SCGC_FLASH_SHIFT                     12                                                  /*!< SIM_SCGC: FLASH Position                */
#define SIM_SCGC_FLASH(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_FLASH_SHIFT))&SIM_SCGC_FLASH_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_SWD_MASK                        (0x01UL << SIM_SCGC_SWD_SHIFT)                      /*!< SIM_SCGC: SWD Mask                      */
#define SIM_SCGC_SWD_SHIFT                       13                                                  /*!< SIM_SCGC: SWD Position                  */
#define SIM_SCGC_SWD(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_SWD_SHIFT))&SIM_SCGC_SWD_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_I2C_MASK                        (0x01UL << SIM_SCGC_I2C_SHIFT)                      /*!< SIM_SCGC: I2C Mask                      */
#define SIM_SCGC_I2C_SHIFT                       17                                                  /*!< SIM_SCGC: I2C Position                  */
#define SIM_SCGC_I2C(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_I2C_SHIFT))&SIM_SCGC_I2C_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_SPI0_MASK                       (0x01UL << SIM_SCGC_SPI0_SHIFT)                     /*!< SIM_SCGC: SPI0 Mask                     */
#define SIM_SCGC_SPI0_SHIFT                      18                                                  /*!< SIM_SCGC: SPI0 Position                 */
#define SIM_SCGC_SPI0(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_SPI0_SHIFT))&SIM_SCGC_SPI0_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_UART0_MASK                      (0x01UL << SIM_SCGC_UART0_SHIFT)                    /*!< SIM_SCGC: UART0 Mask                    */
#define SIM_SCGC_UART0_SHIFT                     20                                                  /*!< SIM_SCGC: UART0 Position                */
#define SIM_SCGC_UART0(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_UART0_SHIFT))&SIM_SCGC_UART0_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_KBI0_MASK                       (0x01UL << SIM_SCGC_KBI0_SHIFT)                     /*!< SIM_SCGC: KBI0 Mask                     */
#define SIM_SCGC_KBI0_SHIFT                      24                                                  /*!< SIM_SCGC: KBI0 Position                 */
#define SIM_SCGC_KBI0(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_KBI0_SHIFT))&SIM_SCGC_KBI0_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_KBI1_MASK                       (0x01UL << SIM_SCGC_KBI1_SHIFT)                     /*!< SIM_SCGC: KBI1 Mask                     */
#define SIM_SCGC_KBI1_SHIFT                      25                                                  /*!< SIM_SCGC: KBI1 Position                 */
#define SIM_SCGC_KBI1(x)                         (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_KBI1_SHIFT))&SIM_SCGC_KBI1_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_IRQ_MASK                        (0x01UL << SIM_SCGC_IRQ_SHIFT)                      /*!< SIM_SCGC: IRQ Mask                      */
#define SIM_SCGC_IRQ_SHIFT                       27                                                  /*!< SIM_SCGC: IRQ Position                  */
#define SIM_SCGC_IRQ(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_IRQ_SHIFT))&SIM_SCGC_IRQ_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_ADC_MASK                        (0x01UL << SIM_SCGC_ADC_SHIFT)                      /*!< SIM_SCGC: ADC Mask                      */
#define SIM_SCGC_ADC_SHIFT                       29                                                  /*!< SIM_SCGC: ADC Position                  */
#define SIM_SCGC_ADC(x)                          (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_ADC_SHIFT))&SIM_SCGC_ADC_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_ACMP0_MASK                      (0x01UL << SIM_SCGC_ACMP0_SHIFT)                    /*!< SIM_SCGC: ACMP0 Mask                    */
#define SIM_SCGC_ACMP0_SHIFT                     30                                                  /*!< SIM_SCGC: ACMP0 Position                */
#define SIM_SCGC_ACMP0(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_ACMP0_SHIFT))&SIM_SCGC_ACMP0_MASK) /*!< SIM_SCGC                                */
#define SIM_SCGC_ACMP1_MASK                      (0x01UL << SIM_SCGC_ACMP1_SHIFT)                    /*!< SIM_SCGC: ACMP1 Mask                    */
#define SIM_SCGC_ACMP1_SHIFT                     31                                                  /*!< SIM_SCGC: ACMP1 Position                */
#define SIM_SCGC_ACMP1(x)                        (((uint32_t)(((uint32_t)(x))<<SIM_SCGC_ACMP1_SHIFT))&SIM_SCGC_ACMP1_MASK) /*!< SIM_SCGC                                */
/* ------- UUIDL Bit Fields                         ------ */
/* ------- UUIDH Bit Fields                         ------ */
/* ------- UUIDMH Bit Fields                        ------ */
/* ------- CLKDIV Bit Fields                        ------ */
#define SIM_CLKDIV_OUTDIV3_MASK                  (0x01UL << SIM_CLKDIV_OUTDIV3_SHIFT)                /*!< SIM_CLKDIV: OUTDIV3 Mask                */
#define SIM_CLKDIV_OUTDIV3_SHIFT                 20                                                  /*!< SIM_CLKDIV: OUTDIV3 Position            */
#define SIM_CLKDIV_OUTDIV3(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV_OUTDIV3_SHIFT))&SIM_CLKDIV_OUTDIV3_MASK) /*!< SIM_CLKDIV                              */
#define SIM_CLKDIV_OUTDIV2_MASK                  (0x01UL << SIM_CLKDIV_OUTDIV2_SHIFT)                /*!< SIM_CLKDIV: OUTDIV2 Mask                */
#define SIM_CLKDIV_OUTDIV2_SHIFT                 24                                                  /*!< SIM_CLKDIV: OUTDIV2 Position            */
#define SIM_CLKDIV_OUTDIV2(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV_OUTDIV2_SHIFT))&SIM_CLKDIV_OUTDIV2_MASK) /*!< SIM_CLKDIV                              */
#define SIM_CLKDIV_OUTDIV1_MASK                  (0x03UL << SIM_CLKDIV_OUTDIV1_SHIFT)                /*!< SIM_CLKDIV: OUTDIV1 Mask                */
#define SIM_CLKDIV_OUTDIV1_SHIFT                 28                                                  /*!< SIM_CLKDIV: OUTDIV1 Position            */
#define SIM_CLKDIV_OUTDIV1(x)                    (((uint32_t)(((uint32_t)(x))<<SIM_CLKDIV_OUTDIV1_SHIFT))&SIM_CLKDIV_OUTDIV1_MASK) /*!< SIM_CLKDIV                              */
/**
 * @} */ /* End group SIM_Register_Masks_GROUP 
 */

/* SIM - Peripheral instance base addresses */
#define SIM_BasePtr                    0x40048000UL //!< Peripheral base address
#define SIM                            ((SIM_Type *) SIM_BasePtr) //!< Freescale base pointer
#define SIM_BASE_PTR                   (SIM) //!< Freescale style base pointer
/**
 * @} */ /* End group SIM_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SPI_Peripheral_access_layer_GROUP SPI Peripheral Access Layer
* @brief C Struct for SPI
* @{
*/

/* ================================================================================ */
/* ================           SPI0 (file:SPI0_MKE_8Bit)            ================ */
/* ================================================================================ */

/**
 * @brief Serial Peripheral Interface
 */
/**
* @addtogroup SPI_structs_GROUP SPI struct
* @brief Struct for SPI
* @{
*/
typedef struct {                                /*       SPI0 Structure                                               */
   __IO uint8_t   C1;                           /**< 0000: Control register 1                                           */
   __IO uint8_t   C2;                           /**< 0001: Control register 2                                           */
   __IO uint8_t   BR;                           /**< 0002: Baud rate register                                           */
   __I  uint8_t   S;                            /**< 0003: Status register                                              */
   __I  uint8_t   RESERVED0;                   
   __IO uint8_t   D;                            /**< 0005: Data register                                                */
   __I  uint8_t   RESERVED1;                   
   __IO uint8_t   M;                            /**< 0007: Match register:                                              */
} SPI_Type;

/**
 * @} */ /* End group SPI_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SPI0' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SPI_Register_Masks_GROUP SPI Register Masks
* @brief Register Masks for SPI
* @{
*/
/* ------- C1 Bit Fields                            ------ */
#define SPI_C1_LSBFE_MASK                        (0x01UL << SPI_C1_LSBFE_SHIFT)                      /*!< SPI0_C1: LSBFE Mask                     */
#define SPI_C1_LSBFE_SHIFT                       0                                                   /*!< SPI0_C1: LSBFE Position                 */
#define SPI_C1_LSBFE(x)                          (((uint8_t)(((uint8_t)(x))<<SPI_C1_LSBFE_SHIFT))&SPI_C1_LSBFE_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_SSOE_MASK                         (0x01UL << SPI_C1_SSOE_SHIFT)                       /*!< SPI0_C1: SSOE Mask                      */
#define SPI_C1_SSOE_SHIFT                        1                                                   /*!< SPI0_C1: SSOE Position                  */
#define SPI_C1_SSOE(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C1_SSOE_SHIFT))&SPI_C1_SSOE_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_MODE_MASK                         (0x03UL << SPI_C1_MODE_SHIFT)                       /*!< SPI0_C1: MODE Mask                      */
#define SPI_C1_MODE_SHIFT                        2                                                   /*!< SPI0_C1: MODE Position                  */
#define SPI_C1_MODE(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C1_MODE_SHIFT))&SPI_C1_MODE_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_CPHA_MASK                         (0x01UL << SPI_C1_CPHA_SHIFT)                       /*!< SPI0_C1: CPHA Mask                      */
#define SPI_C1_CPHA_SHIFT                        2                                                   /*!< SPI0_C1: CPHA Position                  */
#define SPI_C1_CPHA(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C1_CPHA_SHIFT))&SPI_C1_CPHA_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_CPOL_MASK                         (0x01UL << SPI_C1_CPOL_SHIFT)                       /*!< SPI0_C1: CPOL Mask                      */
#define SPI_C1_CPOL_SHIFT                        3                                                   /*!< SPI0_C1: CPOL Position                  */
#define SPI_C1_CPOL(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C1_CPOL_SHIFT))&SPI_C1_CPOL_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_MSTR_MASK                         (0x01UL << SPI_C1_MSTR_SHIFT)                       /*!< SPI0_C1: MSTR Mask                      */
#define SPI_C1_MSTR_SHIFT                        4                                                   /*!< SPI0_C1: MSTR Position                  */
#define SPI_C1_MSTR(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C1_MSTR_SHIFT))&SPI_C1_MSTR_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_SPTIE_MASK                        (0x01UL << SPI_C1_SPTIE_SHIFT)                      /*!< SPI0_C1: SPTIE Mask                     */
#define SPI_C1_SPTIE_SHIFT                       5                                                   /*!< SPI0_C1: SPTIE Position                 */
#define SPI_C1_SPTIE(x)                          (((uint8_t)(((uint8_t)(x))<<SPI_C1_SPTIE_SHIFT))&SPI_C1_SPTIE_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_SPE_MASK                          (0x01UL << SPI_C1_SPE_SHIFT)                        /*!< SPI0_C1: SPE Mask                       */
#define SPI_C1_SPE_SHIFT                         6                                                   /*!< SPI0_C1: SPE Position                   */
#define SPI_C1_SPE(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_C1_SPE_SHIFT))&SPI_C1_SPE_MASK) /*!< SPI0_C1                                 */
#define SPI_C1_SPIE_MASK                         (0x01UL << SPI_C1_SPIE_SHIFT)                       /*!< SPI0_C1: SPIE Mask                      */
#define SPI_C1_SPIE_SHIFT                        7                                                   /*!< SPI0_C1: SPIE Position                  */
#define SPI_C1_SPIE(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C1_SPIE_SHIFT))&SPI_C1_SPIE_MASK) /*!< SPI0_C1                                 */
/* ------- C2 Bit Fields                            ------ */
#define SPI_C2_SPC0_MASK                         (0x01UL << SPI_C2_SPC0_SHIFT)                       /*!< SPI0_C2: SPC0 Mask                      */
#define SPI_C2_SPC0_SHIFT                        0                                                   /*!< SPI0_C2: SPC0 Position                  */
#define SPI_C2_SPC0(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_C2_SPC0_SHIFT))&SPI_C2_SPC0_MASK) /*!< SPI0_C2                                 */
#define SPI_C2_SPISWAI_MASK                      (0x01UL << SPI_C2_SPISWAI_SHIFT)                    /*!< SPI0_C2: SPISWAI Mask                   */
#define SPI_C2_SPISWAI_SHIFT                     1                                                   /*!< SPI0_C2: SPISWAI Position               */
#define SPI_C2_SPISWAI(x)                        (((uint8_t)(((uint8_t)(x))<<SPI_C2_SPISWAI_SHIFT))&SPI_C2_SPISWAI_MASK) /*!< SPI0_C2                                 */
#define SPI_C2_BIDIROE_MASK                      (0x01UL << SPI_C2_BIDIROE_SHIFT)                    /*!< SPI0_C2: BIDIROE Mask                   */
#define SPI_C2_BIDIROE_SHIFT                     3                                                   /*!< SPI0_C2: BIDIROE Position               */
#define SPI_C2_BIDIROE(x)                        (((uint8_t)(((uint8_t)(x))<<SPI_C2_BIDIROE_SHIFT))&SPI_C2_BIDIROE_MASK) /*!< SPI0_C2                                 */
#define SPI_C2_MODFEN_MASK                       (0x01UL << SPI_C2_MODFEN_SHIFT)                     /*!< SPI0_C2: MODFEN Mask                    */
#define SPI_C2_MODFEN_SHIFT                      4                                                   /*!< SPI0_C2: MODFEN Position                */
#define SPI_C2_MODFEN(x)                         (((uint8_t)(((uint8_t)(x))<<SPI_C2_MODFEN_SHIFT))&SPI_C2_MODFEN_MASK) /*!< SPI0_C2                                 */
#define SPI_C2_SPMIE_MASK                        (0x01UL << SPI_C2_SPMIE_SHIFT)                      /*!< SPI0_C2: SPMIE Mask                     */
#define SPI_C2_SPMIE_SHIFT                       7                                                   /*!< SPI0_C2: SPMIE Position                 */
#define SPI_C2_SPMIE(x)                          (((uint8_t)(((uint8_t)(x))<<SPI_C2_SPMIE_SHIFT))&SPI_C2_SPMIE_MASK) /*!< SPI0_C2                                 */
/* ------- BR Bit Fields                            ------ */
#define SPI_BR_SPR_MASK                          (0x0FUL << SPI_BR_SPR_SHIFT)                        /*!< SPI0_BR: SPR Mask                       */
#define SPI_BR_SPR_SHIFT                         0                                                   /*!< SPI0_BR: SPR Position                   */
#define SPI_BR_SPR(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_BR_SPR_SHIFT))&SPI_BR_SPR_MASK) /*!< SPI0_BR                                 */
#define SPI_BR_SPPR_MASK                         (0x07UL << SPI_BR_SPPR_SHIFT)                       /*!< SPI0_BR: SPPR Mask                      */
#define SPI_BR_SPPR_SHIFT                        4                                                   /*!< SPI0_BR: SPPR Position                  */
#define SPI_BR_SPPR(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_BR_SPPR_SHIFT))&SPI_BR_SPPR_MASK) /*!< SPI0_BR                                 */
/* ------- S Bit Fields                             ------ */
#define SPI_S_MODF_MASK                          (0x01UL << SPI_S_MODF_SHIFT)                        /*!< SPI0_S: MODF Mask                       */
#define SPI_S_MODF_SHIFT                         4                                                   /*!< SPI0_S: MODF Position                   */
#define SPI_S_MODF(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_S_MODF_SHIFT))&SPI_S_MODF_MASK) /*!< SPI0_S                                  */
#define SPI_S_SPTEF_MASK                         (0x01UL << SPI_S_SPTEF_SHIFT)                       /*!< SPI0_S: SPTEF Mask                      */
#define SPI_S_SPTEF_SHIFT                        5                                                   /*!< SPI0_S: SPTEF Position                  */
#define SPI_S_SPTEF(x)                           (((uint8_t)(((uint8_t)(x))<<SPI_S_SPTEF_SHIFT))&SPI_S_SPTEF_MASK) /*!< SPI0_S                                  */
#define SPI_S_SPMF_MASK                          (0x01UL << SPI_S_SPMF_SHIFT)                        /*!< SPI0_S: SPMF Mask                       */
#define SPI_S_SPMF_SHIFT                         6                                                   /*!< SPI0_S: SPMF Position                   */
#define SPI_S_SPMF(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_S_SPMF_SHIFT))&SPI_S_SPMF_MASK) /*!< SPI0_S                                  */
#define SPI_S_SPRF_MASK                          (0x01UL << SPI_S_SPRF_SHIFT)                        /*!< SPI0_S: SPRF Mask                       */
#define SPI_S_SPRF_SHIFT                         7                                                   /*!< SPI0_S: SPRF Position                   */
#define SPI_S_SPRF(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_S_SPRF_SHIFT))&SPI_S_SPRF_MASK) /*!< SPI0_S                                  */
/* ------- D Bit Fields                             ------ */
#define SPI_D_Bits_MASK                          (0xFFUL << SPI_D_Bits_SHIFT)                        /*!< SPI0_D: Bits Mask                       */
#define SPI_D_Bits_SHIFT                         0                                                   /*!< SPI0_D: Bits Position                   */
#define SPI_D_Bits(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_D_Bits_SHIFT))&SPI_D_Bits_MASK) /*!< SPI0_D                                  */
/* ------- M Bit Fields                             ------ */
#define SPI_M_Bits_MASK                          (0xFFUL << SPI_M_Bits_SHIFT)                        /*!< SPI0_M: Bits Mask                       */
#define SPI_M_Bits_SHIFT                         0                                                   /*!< SPI0_M: Bits Position                   */
#define SPI_M_Bits(x)                            (((uint8_t)(((uint8_t)(x))<<SPI_M_Bits_SHIFT))&SPI_M_Bits_MASK) /*!< SPI0_M                                  */
/**
 * @} */ /* End group SPI_Register_Masks_GROUP 
 */

/* SPI0 - Peripheral instance base addresses */
#define SPI0_BasePtr                   0x40076000UL //!< Peripheral base address
#define SPI0                           ((SPI_Type *) SPI0_BasePtr) //!< Freescale base pointer
#define SPI0_BASE_PTR                  (SPI0) //!< Freescale style base pointer
/**
 * @} */ /* End group SPI_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup SYST_Peripheral_access_layer_GROUP SYST Peripheral Access Layer
* @brief C Struct for SYST
* @{
*/

/* ================================================================================ */
/* ================           SYST (file:SYST)                     ================ */
/* ================================================================================ */

/**
 * @brief System timer
 */
/**
* @addtogroup SYST_structs_GROUP SYST struct
* @brief Struct for SYST
* @{
*/
typedef struct {                                /*       SYST Structure                                               */
   __IO uint32_t  CSR;                          /**< 0000: Control and Status Register                                  */
   __IO uint32_t  RVR;                          /**< 0004: Reload Value Register                                        */
   __IO uint32_t  CVR;                          /**< 0008: Current Value Register                                       */
   __I  uint32_t  CALIB;                        /**< 000C: Calibration Value Register                                   */
} SYST_Type;

/**
 * @} */ /* End group SYST_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'SYST' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup SYST_Register_Masks_GROUP SYST Register Masks
* @brief Register Masks for SYST
* @{
*/
/* ------- CSR Bit Fields                           ------ */
#define SYST_CSR_ENABLE_MASK                     (0x01UL << SYST_CSR_ENABLE_SHIFT)                   /*!< SYST_CSR: ENABLE Mask                   */
#define SYST_CSR_ENABLE_SHIFT                    0                                                   /*!< SYST_CSR: ENABLE Position               */
#define SYST_CSR_ENABLE(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_CSR_ENABLE_SHIFT))&SYST_CSR_ENABLE_MASK) /*!< SYST_CSR                                */
#define SYST_CSR_TICKINT_MASK                    (0x01UL << SYST_CSR_TICKINT_SHIFT)                  /*!< SYST_CSR: TICKINT Mask                  */
#define SYST_CSR_TICKINT_SHIFT                   1                                                   /*!< SYST_CSR: TICKINT Position              */
#define SYST_CSR_TICKINT(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CSR_TICKINT_SHIFT))&SYST_CSR_TICKINT_MASK) /*!< SYST_CSR                                */
#define SYST_CSR_CLKSOURCE_MASK                  (0x01UL << SYST_CSR_CLKSOURCE_SHIFT)                /*!< SYST_CSR: CLKSOURCE Mask                */
#define SYST_CSR_CLKSOURCE_SHIFT                 2                                                   /*!< SYST_CSR: CLKSOURCE Position            */
#define SYST_CSR_CLKSOURCE(x)                    (((uint32_t)(((uint32_t)(x))<<SYST_CSR_CLKSOURCE_SHIFT))&SYST_CSR_CLKSOURCE_MASK) /*!< SYST_CSR                                */
#define SYST_CSR_COUNTFLAG_MASK                  (0x01UL << SYST_CSR_COUNTFLAG_SHIFT)                /*!< SYST_CSR: COUNTFLAG Mask                */
#define SYST_CSR_COUNTFLAG_SHIFT                 16                                                  /*!< SYST_CSR: COUNTFLAG Position            */
#define SYST_CSR_COUNTFLAG(x)                    (((uint32_t)(((uint32_t)(x))<<SYST_CSR_COUNTFLAG_SHIFT))&SYST_CSR_COUNTFLAG_MASK) /*!< SYST_CSR                                */
/* ------- RVR Bit Fields                           ------ */
#define SYST_RVR_RELOAD_MASK                     (0xFFFFFFUL << SYST_RVR_RELOAD_SHIFT)               /*!< SYST_RVR: RELOAD Mask                   */
#define SYST_RVR_RELOAD_SHIFT                    0                                                   /*!< SYST_RVR: RELOAD Position               */
#define SYST_RVR_RELOAD(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_RVR_RELOAD_SHIFT))&SYST_RVR_RELOAD_MASK) /*!< SYST_RVR                                */
/* ------- CVR Bit Fields                           ------ */
#define SYST_CVR_CURRENT_MASK                    (0xFFFFFFUL << SYST_CVR_CURRENT_SHIFT)              /*!< SYST_CVR: CURRENT Mask                  */
#define SYST_CVR_CURRENT_SHIFT                   0                                                   /*!< SYST_CVR: CURRENT Position              */
#define SYST_CVR_CURRENT(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CVR_CURRENT_SHIFT))&SYST_CVR_CURRENT_MASK) /*!< SYST_CVR                                */
/* ------- CALIB Bit Fields                         ------ */
#define SYST_CALIB_TENMS_MASK                    (0xFFFFFFUL << SYST_CALIB_TENMS_SHIFT)              /*!< SYST_CALIB: TENMS Mask                  */
#define SYST_CALIB_TENMS_SHIFT                   0                                                   /*!< SYST_CALIB: TENMS Position              */
#define SYST_CALIB_TENMS(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_TENMS_SHIFT))&SYST_CALIB_TENMS_MASK) /*!< SYST_CALIB                              */
#define SYST_CALIB_SKEW_MASK                     (0x01UL << SYST_CALIB_SKEW_SHIFT)                   /*!< SYST_CALIB: SKEW Mask                   */
#define SYST_CALIB_SKEW_SHIFT                    30                                                  /*!< SYST_CALIB: SKEW Position               */
#define SYST_CALIB_SKEW(x)                       (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_SKEW_SHIFT))&SYST_CALIB_SKEW_MASK) /*!< SYST_CALIB                              */
#define SYST_CALIB_NOREF_MASK                    (0x01UL << SYST_CALIB_NOREF_SHIFT)                  /*!< SYST_CALIB: NOREF Mask                  */
#define SYST_CALIB_NOREF_SHIFT                   31                                                  /*!< SYST_CALIB: NOREF Position              */
#define SYST_CALIB_NOREF(x)                      (((uint32_t)(((uint32_t)(x))<<SYST_CALIB_NOREF_SHIFT))&SYST_CALIB_NOREF_MASK) /*!< SYST_CALIB                              */
/**
 * @} */ /* End group SYST_Register_Masks_GROUP 
 */

/* SYST - Peripheral instance base addresses */
#define SYST_BasePtr                   0xE000E010UL //!< Peripheral base address
#define SYST                           ((SYST_Type *) SYST_BasePtr) //!< Freescale base pointer
#define SYST_BASE_PTR                  (SYST) //!< Freescale style base pointer
/**
 * @} */ /* End group SYST_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup UART_Peripheral_access_layer_GROUP UART Peripheral Access Layer
* @brief C Struct for UART
* @{
*/

/* ================================================================================ */
/* ================           UART0 (file:UART0_MKE)               ================ */
/* ================================================================================ */

/**
 * @brief Universal Asynchronous Receiver/Transmitter
 */
/**
* @addtogroup UART_structs_GROUP UART struct
* @brief Struct for UART
* @{
*/
typedef struct {                                /*       UART0 Structure                                              */
   __IO uint8_t   BDH;                          /**< 0000: Baud Rate Register: High                                     */
   __IO uint8_t   BDL;                          /**< 0001: Baud Rate Register: Low                                      */
   __IO uint8_t   C1;                           /**< 0002: Control Register 1                                           */
   __IO uint8_t   C2;                           /**< 0003: Control Register 2                                           */
   __I  uint8_t   S1;                           /**< 0004: Status Register 1                                            */
   __IO uint8_t   S2;                           /**< 0005: Status Register 2                                            */
   __IO uint8_t   C3;                           /**< 0006: Control Register 3                                           */
   __IO uint8_t   D;                            /**< 0007: Data Register                                                */
} UART_Type;

/**
 * @} */ /* End group UART_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'UART0' Position & Mask macros                       ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup UART_Register_Masks_GROUP UART Register Masks
* @brief Register Masks for UART
* @{
*/
/* ------- BDH Bit Fields                           ------ */
#define UART_BDH_SBR_MASK                        (0x1FUL << UART_BDH_SBR_SHIFT)                      /*!< UART0_BDH: SBR Mask                     */
#define UART_BDH_SBR_SHIFT                       0                                                   /*!< UART0_BDH: SBR Position                 */
#define UART_BDH_SBR(x)                          (((uint8_t)(((uint8_t)(x))<<UART_BDH_SBR_SHIFT))&UART_BDH_SBR_MASK) /*!< UART0_BDH                               */
#define UART_BDH_SBNS_MASK                       (0x01UL << UART_BDH_SBNS_SHIFT)                     /*!< UART0_BDH: SBNS Mask                    */
#define UART_BDH_SBNS_SHIFT                      5                                                   /*!< UART0_BDH: SBNS Position                */
#define UART_BDH_SBNS(x)                         (((uint8_t)(((uint8_t)(x))<<UART_BDH_SBNS_SHIFT))&UART_BDH_SBNS_MASK) /*!< UART0_BDH                               */
#define UART_BDH_RXEDGIE_MASK                    (0x01UL << UART_BDH_RXEDGIE_SHIFT)                  /*!< UART0_BDH: RXEDGIE Mask                 */
#define UART_BDH_RXEDGIE_SHIFT                   6                                                   /*!< UART0_BDH: RXEDGIE Position             */
#define UART_BDH_RXEDGIE(x)                      (((uint8_t)(((uint8_t)(x))<<UART_BDH_RXEDGIE_SHIFT))&UART_BDH_RXEDGIE_MASK) /*!< UART0_BDH                               */
#define UART_BDH_LBKDIE_MASK                     (0x01UL << UART_BDH_LBKDIE_SHIFT)                   /*!< UART0_BDH: LBKDIE Mask                  */
#define UART_BDH_LBKDIE_SHIFT                    7                                                   /*!< UART0_BDH: LBKDIE Position              */
#define UART_BDH_LBKDIE(x)                       (((uint8_t)(((uint8_t)(x))<<UART_BDH_LBKDIE_SHIFT))&UART_BDH_LBKDIE_MASK) /*!< UART0_BDH                               */
/* ------- BDL Bit Fields                           ------ */
#define UART_BDL_SBR_MASK                        (0xFFUL << UART_BDL_SBR_SHIFT)                      /*!< UART0_BDL: SBR Mask                     */
#define UART_BDL_SBR_SHIFT                       0                                                   /*!< UART0_BDL: SBR Position                 */
#define UART_BDL_SBR(x)                          (((uint8_t)(((uint8_t)(x))<<UART_BDL_SBR_SHIFT))&UART_BDL_SBR_MASK) /*!< UART0_BDL                               */
/* ------- C1 Bit Fields                            ------ */
#define UART_C1_PT_MASK                          (0x01UL << UART_C1_PT_SHIFT)                        /*!< UART0_C1: PT Mask                       */
#define UART_C1_PT_SHIFT                         0                                                   /*!< UART0_C1: PT Position                   */
#define UART_C1_PT(x)                            (((uint8_t)(((uint8_t)(x))<<UART_C1_PT_SHIFT))&UART_C1_PT_MASK) /*!< UART0_C1                                */
#define UART_C1_PE_MASK                          (0x01UL << UART_C1_PE_SHIFT)                        /*!< UART0_C1: PE Mask                       */
#define UART_C1_PE_SHIFT                         1                                                   /*!< UART0_C1: PE Position                   */
#define UART_C1_PE(x)                            (((uint8_t)(((uint8_t)(x))<<UART_C1_PE_SHIFT))&UART_C1_PE_MASK) /*!< UART0_C1                                */
#define UART_C1_ILT_MASK                         (0x01UL << UART_C1_ILT_SHIFT)                       /*!< UART0_C1: ILT Mask                      */
#define UART_C1_ILT_SHIFT                        2                                                   /*!< UART0_C1: ILT Position                  */
#define UART_C1_ILT(x)                           (((uint8_t)(((uint8_t)(x))<<UART_C1_ILT_SHIFT))&UART_C1_ILT_MASK) /*!< UART0_C1                                */
#define UART_C1_WAKE_MASK                        (0x01UL << UART_C1_WAKE_SHIFT)                      /*!< UART0_C1: WAKE Mask                     */
#define UART_C1_WAKE_SHIFT                       3                                                   /*!< UART0_C1: WAKE Position                 */
#define UART_C1_WAKE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C1_WAKE_SHIFT))&UART_C1_WAKE_MASK) /*!< UART0_C1                                */
#define UART_C1_M_MASK                           (0x01UL << UART_C1_M_SHIFT)                         /*!< UART0_C1: M Mask                        */
#define UART_C1_M_SHIFT                          4                                                   /*!< UART0_C1: M Position                    */
#define UART_C1_M(x)                             (((uint8_t)(((uint8_t)(x))<<UART_C1_M_SHIFT))&UART_C1_M_MASK) /*!< UART0_C1                                */
#define UART_C1_RSRC_MASK                        (0x01UL << UART_C1_RSRC_SHIFT)                      /*!< UART0_C1: RSRC Mask                     */
#define UART_C1_RSRC_SHIFT                       5                                                   /*!< UART0_C1: RSRC Position                 */
#define UART_C1_RSRC(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C1_RSRC_SHIFT))&UART_C1_RSRC_MASK) /*!< UART0_C1                                */
#define UART_C1_UARTSWAI_MASK                    (0x01UL << UART_C1_UARTSWAI_SHIFT)                  /*!< UART0_C1: UARTSWAI Mask                 */
#define UART_C1_UARTSWAI_SHIFT                   6                                                   /*!< UART0_C1: UARTSWAI Position             */
#define UART_C1_UARTSWAI(x)                      (((uint8_t)(((uint8_t)(x))<<UART_C1_UARTSWAI_SHIFT))&UART_C1_UARTSWAI_MASK) /*!< UART0_C1                                */
#define UART_C1_LOOPS_MASK                       (0x01UL << UART_C1_LOOPS_SHIFT)                     /*!< UART0_C1: LOOPS Mask                    */
#define UART_C1_LOOPS_SHIFT                      7                                                   /*!< UART0_C1: LOOPS Position                */
#define UART_C1_LOOPS(x)                         (((uint8_t)(((uint8_t)(x))<<UART_C1_LOOPS_SHIFT))&UART_C1_LOOPS_MASK) /*!< UART0_C1                                */
/* ------- C2 Bit Fields                            ------ */
#define UART_C2_SBK_MASK                         (0x01UL << UART_C2_SBK_SHIFT)                       /*!< UART0_C2: SBK Mask                      */
#define UART_C2_SBK_SHIFT                        0                                                   /*!< UART0_C2: SBK Position                  */
#define UART_C2_SBK(x)                           (((uint8_t)(((uint8_t)(x))<<UART_C2_SBK_SHIFT))&UART_C2_SBK_MASK) /*!< UART0_C2                                */
#define UART_C2_RWU_MASK                         (0x01UL << UART_C2_RWU_SHIFT)                       /*!< UART0_C2: RWU Mask                      */
#define UART_C2_RWU_SHIFT                        1                                                   /*!< UART0_C2: RWU Position                  */
#define UART_C2_RWU(x)                           (((uint8_t)(((uint8_t)(x))<<UART_C2_RWU_SHIFT))&UART_C2_RWU_MASK) /*!< UART0_C2                                */
#define UART_C2_RE_MASK                          (0x01UL << UART_C2_RE_SHIFT)                        /*!< UART0_C2: RE Mask                       */
#define UART_C2_RE_SHIFT                         2                                                   /*!< UART0_C2: RE Position                   */
#define UART_C2_RE(x)                            (((uint8_t)(((uint8_t)(x))<<UART_C2_RE_SHIFT))&UART_C2_RE_MASK) /*!< UART0_C2                                */
#define UART_C2_TE_MASK                          (0x01UL << UART_C2_TE_SHIFT)                        /*!< UART0_C2: TE Mask                       */
#define UART_C2_TE_SHIFT                         3                                                   /*!< UART0_C2: TE Position                   */
#define UART_C2_TE(x)                            (((uint8_t)(((uint8_t)(x))<<UART_C2_TE_SHIFT))&UART_C2_TE_MASK) /*!< UART0_C2                                */
#define UART_C2_ILIE_MASK                        (0x01UL << UART_C2_ILIE_SHIFT)                      /*!< UART0_C2: ILIE Mask                     */
#define UART_C2_ILIE_SHIFT                       4                                                   /*!< UART0_C2: ILIE Position                 */
#define UART_C2_ILIE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C2_ILIE_SHIFT))&UART_C2_ILIE_MASK) /*!< UART0_C2                                */
#define UART_C2_RIE_MASK                         (0x01UL << UART_C2_RIE_SHIFT)                       /*!< UART0_C2: RIE Mask                      */
#define UART_C2_RIE_SHIFT                        5                                                   /*!< UART0_C2: RIE Position                  */
#define UART_C2_RIE(x)                           (((uint8_t)(((uint8_t)(x))<<UART_C2_RIE_SHIFT))&UART_C2_RIE_MASK) /*!< UART0_C2                                */
#define UART_C2_TCIE_MASK                        (0x01UL << UART_C2_TCIE_SHIFT)                      /*!< UART0_C2: TCIE Mask                     */
#define UART_C2_TCIE_SHIFT                       6                                                   /*!< UART0_C2: TCIE Position                 */
#define UART_C2_TCIE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C2_TCIE_SHIFT))&UART_C2_TCIE_MASK) /*!< UART0_C2                                */
#define UART_C2_TIE_MASK                         (0x01UL << UART_C2_TIE_SHIFT)                       /*!< UART0_C2: TIE Mask                      */
#define UART_C2_TIE_SHIFT                        7                                                   /*!< UART0_C2: TIE Position                  */
#define UART_C2_TIE(x)                           (((uint8_t)(((uint8_t)(x))<<UART_C2_TIE_SHIFT))&UART_C2_TIE_MASK) /*!< UART0_C2                                */
/* ------- S1 Bit Fields                            ------ */
#define UART_S1_PF_MASK                          (0x01UL << UART_S1_PF_SHIFT)                        /*!< UART0_S1: PF Mask                       */
#define UART_S1_PF_SHIFT                         0                                                   /*!< UART0_S1: PF Position                   */
#define UART_S1_PF(x)                            (((uint8_t)(((uint8_t)(x))<<UART_S1_PF_SHIFT))&UART_S1_PF_MASK) /*!< UART0_S1                                */
#define UART_S1_FE_MASK                          (0x01UL << UART_S1_FE_SHIFT)                        /*!< UART0_S1: FE Mask                       */
#define UART_S1_FE_SHIFT                         1                                                   /*!< UART0_S1: FE Position                   */
#define UART_S1_FE(x)                            (((uint8_t)(((uint8_t)(x))<<UART_S1_FE_SHIFT))&UART_S1_FE_MASK) /*!< UART0_S1                                */
#define UART_S1_NF_MASK                          (0x01UL << UART_S1_NF_SHIFT)                        /*!< UART0_S1: NF Mask                       */
#define UART_S1_NF_SHIFT                         2                                                   /*!< UART0_S1: NF Position                   */
#define UART_S1_NF(x)                            (((uint8_t)(((uint8_t)(x))<<UART_S1_NF_SHIFT))&UART_S1_NF_MASK) /*!< UART0_S1                                */
#define UART_S1_OR_MASK                          (0x01UL << UART_S1_OR_SHIFT)                        /*!< UART0_S1: OR Mask                       */
#define UART_S1_OR_SHIFT                         3                                                   /*!< UART0_S1: OR Position                   */
#define UART_S1_OR(x)                            (((uint8_t)(((uint8_t)(x))<<UART_S1_OR_SHIFT))&UART_S1_OR_MASK) /*!< UART0_S1                                */
#define UART_S1_IDLE_MASK                        (0x01UL << UART_S1_IDLE_SHIFT)                      /*!< UART0_S1: IDLE Mask                     */
#define UART_S1_IDLE_SHIFT                       4                                                   /*!< UART0_S1: IDLE Position                 */
#define UART_S1_IDLE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_S1_IDLE_SHIFT))&UART_S1_IDLE_MASK) /*!< UART0_S1                                */
#define UART_S1_RDRF_MASK                        (0x01UL << UART_S1_RDRF_SHIFT)                      /*!< UART0_S1: RDRF Mask                     */
#define UART_S1_RDRF_SHIFT                       5                                                   /*!< UART0_S1: RDRF Position                 */
#define UART_S1_RDRF(x)                          (((uint8_t)(((uint8_t)(x))<<UART_S1_RDRF_SHIFT))&UART_S1_RDRF_MASK) /*!< UART0_S1                                */
#define UART_S1_TC_MASK                          (0x01UL << UART_S1_TC_SHIFT)                        /*!< UART0_S1: TC Mask                       */
#define UART_S1_TC_SHIFT                         6                                                   /*!< UART0_S1: TC Position                   */
#define UART_S1_TC(x)                            (((uint8_t)(((uint8_t)(x))<<UART_S1_TC_SHIFT))&UART_S1_TC_MASK) /*!< UART0_S1                                */
#define UART_S1_TDRE_MASK                        (0x01UL << UART_S1_TDRE_SHIFT)                      /*!< UART0_S1: TDRE Mask                     */
#define UART_S1_TDRE_SHIFT                       7                                                   /*!< UART0_S1: TDRE Position                 */
#define UART_S1_TDRE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_S1_TDRE_SHIFT))&UART_S1_TDRE_MASK) /*!< UART0_S1                                */
/* ------- S2 Bit Fields                            ------ */
#define UART_S2_RAF_MASK                         (0x01UL << UART_S2_RAF_SHIFT)                       /*!< UART0_S2: RAF Mask                      */
#define UART_S2_RAF_SHIFT                        0                                                   /*!< UART0_S2: RAF Position                  */
#define UART_S2_RAF(x)                           (((uint8_t)(((uint8_t)(x))<<UART_S2_RAF_SHIFT))&UART_S2_RAF_MASK) /*!< UART0_S2                                */
#define UART_S2_LBKDE_MASK                       (0x01UL << UART_S2_LBKDE_SHIFT)                     /*!< UART0_S2: LBKDE Mask                    */
#define UART_S2_LBKDE_SHIFT                      1                                                   /*!< UART0_S2: LBKDE Position                */
#define UART_S2_LBKDE(x)                         (((uint8_t)(((uint8_t)(x))<<UART_S2_LBKDE_SHIFT))&UART_S2_LBKDE_MASK) /*!< UART0_S2                                */
#define UART_S2_BRK13_MASK                       (0x01UL << UART_S2_BRK13_SHIFT)                     /*!< UART0_S2: BRK13 Mask                    */
#define UART_S2_BRK13_SHIFT                      2                                                   /*!< UART0_S2: BRK13 Position                */
#define UART_S2_BRK13(x)                         (((uint8_t)(((uint8_t)(x))<<UART_S2_BRK13_SHIFT))&UART_S2_BRK13_MASK) /*!< UART0_S2                                */
#define UART_S2_RWUID_MASK                       (0x01UL << UART_S2_RWUID_SHIFT)                     /*!< UART0_S2: RWUID Mask                    */
#define UART_S2_RWUID_SHIFT                      3                                                   /*!< UART0_S2: RWUID Position                */
#define UART_S2_RWUID(x)                         (((uint8_t)(((uint8_t)(x))<<UART_S2_RWUID_SHIFT))&UART_S2_RWUID_MASK) /*!< UART0_S2                                */
#define UART_S2_RXINV_MASK                       (0x01UL << UART_S2_RXINV_SHIFT)                     /*!< UART0_S2: RXINV Mask                    */
#define UART_S2_RXINV_SHIFT                      4                                                   /*!< UART0_S2: RXINV Position                */
#define UART_S2_RXINV(x)                         (((uint8_t)(((uint8_t)(x))<<UART_S2_RXINV_SHIFT))&UART_S2_RXINV_MASK) /*!< UART0_S2                                */
#define UART_S2_RXEDGIF_MASK                     (0x01UL << UART_S2_RXEDGIF_SHIFT)                   /*!< UART0_S2: RXEDGIF Mask                  */
#define UART_S2_RXEDGIF_SHIFT                    6                                                   /*!< UART0_S2: RXEDGIF Position              */
#define UART_S2_RXEDGIF(x)                       (((uint8_t)(((uint8_t)(x))<<UART_S2_RXEDGIF_SHIFT))&UART_S2_RXEDGIF_MASK) /*!< UART0_S2                                */
#define UART_S2_LBKDIF_MASK                      (0x01UL << UART_S2_LBKDIF_SHIFT)                    /*!< UART0_S2: LBKDIF Mask                   */
#define UART_S2_LBKDIF_SHIFT                     7                                                   /*!< UART0_S2: LBKDIF Position               */
#define UART_S2_LBKDIF(x)                        (((uint8_t)(((uint8_t)(x))<<UART_S2_LBKDIF_SHIFT))&UART_S2_LBKDIF_MASK) /*!< UART0_S2                                */
/* ------- C3 Bit Fields                            ------ */
#define UART_C3_PEIE_MASK                        (0x01UL << UART_C3_PEIE_SHIFT)                      /*!< UART0_C3: PEIE Mask                     */
#define UART_C3_PEIE_SHIFT                       0                                                   /*!< UART0_C3: PEIE Position                 */
#define UART_C3_PEIE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C3_PEIE_SHIFT))&UART_C3_PEIE_MASK) /*!< UART0_C3                                */
#define UART_C3_FEIE_MASK                        (0x01UL << UART_C3_FEIE_SHIFT)                      /*!< UART0_C3: FEIE Mask                     */
#define UART_C3_FEIE_SHIFT                       1                                                   /*!< UART0_C3: FEIE Position                 */
#define UART_C3_FEIE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C3_FEIE_SHIFT))&UART_C3_FEIE_MASK) /*!< UART0_C3                                */
#define UART_C3_NEIE_MASK                        (0x01UL << UART_C3_NEIE_SHIFT)                      /*!< UART0_C3: NEIE Mask                     */
#define UART_C3_NEIE_SHIFT                       2                                                   /*!< UART0_C3: NEIE Position                 */
#define UART_C3_NEIE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C3_NEIE_SHIFT))&UART_C3_NEIE_MASK) /*!< UART0_C3                                */
#define UART_C3_ORIE_MASK                        (0x01UL << UART_C3_ORIE_SHIFT)                      /*!< UART0_C3: ORIE Mask                     */
#define UART_C3_ORIE_SHIFT                       3                                                   /*!< UART0_C3: ORIE Position                 */
#define UART_C3_ORIE(x)                          (((uint8_t)(((uint8_t)(x))<<UART_C3_ORIE_SHIFT))&UART_C3_ORIE_MASK) /*!< UART0_C3                                */
#define UART_C3_TXINV_MASK                       (0x01UL << UART_C3_TXINV_SHIFT)                     /*!< UART0_C3: TXINV Mask                    */
#define UART_C3_TXINV_SHIFT                      4                                                   /*!< UART0_C3: TXINV Position                */
#define UART_C3_TXINV(x)                         (((uint8_t)(((uint8_t)(x))<<UART_C3_TXINV_SHIFT))&UART_C3_TXINV_MASK) /*!< UART0_C3                                */
#define UART_C3_TXDIR_MASK                       (0x01UL << UART_C3_TXDIR_SHIFT)                     /*!< UART0_C3: TXDIR Mask                    */
#define UART_C3_TXDIR_SHIFT                      5                                                   /*!< UART0_C3: TXDIR Position                */
#define UART_C3_TXDIR(x)                         (((uint8_t)(((uint8_t)(x))<<UART_C3_TXDIR_SHIFT))&UART_C3_TXDIR_MASK) /*!< UART0_C3                                */
#define UART_C3_T8_MASK                          (0x01UL << UART_C3_T8_SHIFT)                        /*!< UART0_C3: T8 Mask                       */
#define UART_C3_T8_SHIFT                         6                                                   /*!< UART0_C3: T8 Position                   */
#define UART_C3_T8(x)                            (((uint8_t)(((uint8_t)(x))<<UART_C3_T8_SHIFT))&UART_C3_T8_MASK) /*!< UART0_C3                                */
#define UART_C3_R8_MASK                          (0x01UL << UART_C3_R8_SHIFT)                        /*!< UART0_C3: R8 Mask                       */
#define UART_C3_R8_SHIFT                         7                                                   /*!< UART0_C3: R8 Position                   */
#define UART_C3_R8(x)                            (((uint8_t)(((uint8_t)(x))<<UART_C3_R8_SHIFT))&UART_C3_R8_MASK) /*!< UART0_C3                                */
/* ------- D Bit Fields                             ------ */
#define UART_D_RT_MASK                           (0xFFUL << UART_D_RT_SHIFT)                         /*!< UART0_D: RT Mask                        */
#define UART_D_RT_SHIFT                          0                                                   /*!< UART0_D: RT Position                    */
#define UART_D_RT(x)                             (((uint8_t)(((uint8_t)(x))<<UART_D_RT_SHIFT))&UART_D_RT_MASK) /*!< UART0_D                                 */
/**
 * @} */ /* End group UART_Register_Masks_GROUP 
 */

/* UART0 - Peripheral instance base addresses */
#define UART0_BasePtr                  0x4006A000UL //!< Peripheral base address
#define UART0                          ((UART_Type *) UART0_BasePtr) //!< Freescale base pointer
#define UART0_BASE_PTR                 (UART0) //!< Freescale style base pointer
/**
 * @} */ /* End group UART_Peripheral_access_layer_GROUP 
 */
/**
* @addtogroup WDOG_Peripheral_access_layer_GROUP WDOG Peripheral Access Layer
* @brief C Struct for WDOG
* @{
*/

/* ================================================================================ */
/* ================           WDOG (file:WDOG_MKE)                 ================ */
/* ================================================================================ */

/**
 * @brief Watchdog timer
 */
/**
* @addtogroup WDOG_structs_GROUP WDOG struct
* @brief Struct for WDOG
* @{
*/
typedef struct {                                /*       WDOG Structure                                               */
   __IO uint8_t   CS1;                          /**< 0000: Control and Status Register 1                                */
   __IO uint8_t   CS2;                          /**< 0001: Control and Status Register 2                                */
   union {                                      /**< 0000: (size=0002)                                                  */
      __IO uint16_t  CNT;                       /**< 0002: Counter Register: (Note: CNTL:CNTH)                          */
      struct {                                  /**< 0000: (size=0002)                                                  */
         __I  uint8_t   CNTH;                   /**< 0002: Counter Register: High (see CNT for description)             */
         __I  uint8_t   CNTL;                   /**< 0003: Counter Register: Low (see CNT for description)              */
      };
   };
   union {                                      /**< 0000: (size=0002)                                                  */
      __IO uint16_t  TOVAL;                     /**< 0004: Timeout Value Register: (Note TOVALL:TOVALH)                 */
      struct {                                  /**< 0000: (size=0002)                                                  */
         __IO uint8_t   TOVALH;                 /**< 0004: Timeout Value Register: High (see TOVAL for description)     */
         __IO uint8_t   TOVALL;                 /**< 0005: Timeout Value Register: Low (see TOVAL for description)      */
      };
   };
   union {                                      /**< 0000: (size=0002)                                                  */
      __IO uint16_t  WIN;                       /**< 0006: Window Register:(Note WINL:WINH)                             */
      struct {                                  /**< 0000: (size=0002)                                                  */
         __IO uint8_t   WINH;                   /**< 0006: Window Register: High (see WIN for description)              */
         __IO uint8_t   WINL;                   /**< 0007: Window Register: Low (see WIN for description)               */
      };
   };
} WDOG_Type;

/**
 * @} */ /* End group WDOG_structs_GROUP 
 */

/* -------------------------------------------------------------------------------- */
/* -----------     'WDOG' Position & Mask macros                        ----------- */
/* -------------------------------------------------------------------------------- */

/**
* @addtogroup WDOG_Register_Masks_GROUP WDOG Register Masks
* @brief Register Masks for WDOG
* @{
*/
/* ------- CS1 Bit Fields                           ------ */
#define WDOG_CS1_STOP_MASK                       (0x01UL << WDOG_CS1_STOP_SHIFT)                     /*!< WDOG_CS1: STOP Mask                     */
#define WDOG_CS1_STOP_SHIFT                      0                                                   /*!< WDOG_CS1: STOP Position                 */
#define WDOG_CS1_STOP(x)                         (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_STOP_SHIFT))&WDOG_CS1_STOP_MASK) /*!< WDOG_CS1                                */
#define WDOG_CS1_WAIT_MASK                       (0x01UL << WDOG_CS1_WAIT_SHIFT)                     /*!< WDOG_CS1: WAIT Mask                     */
#define WDOG_CS1_WAIT_SHIFT                      1                                                   /*!< WDOG_CS1: WAIT Position                 */
#define WDOG_CS1_WAIT(x)                         (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_WAIT_SHIFT))&WDOG_CS1_WAIT_MASK) /*!< WDOG_CS1                                */
#define WDOG_CS1_DBG_MASK                        (0x01UL << WDOG_CS1_DBG_SHIFT)                      /*!< WDOG_CS1: DBG Mask                      */
#define WDOG_CS1_DBG_SHIFT                       2                                                   /*!< WDOG_CS1: DBG Position                  */
#define WDOG_CS1_DBG(x)                          (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_DBG_SHIFT))&WDOG_CS1_DBG_MASK) /*!< WDOG_CS1                                */
#define WDOG_CS1_TST_MASK                        (0x03UL << WDOG_CS1_TST_SHIFT)                      /*!< WDOG_CS1: TST Mask                      */
#define WDOG_CS1_TST_SHIFT                       3                                                   /*!< WDOG_CS1: TST Position                  */
#define WDOG_CS1_TST(x)                          (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_TST_SHIFT))&WDOG_CS1_TST_MASK) /*!< WDOG_CS1                                */
#define WDOG_CS1_UPDATE_MASK                     (0x01UL << WDOG_CS1_UPDATE_SHIFT)                   /*!< WDOG_CS1: UPDATE Mask                   */
#define WDOG_CS1_UPDATE_SHIFT                    5                                                   /*!< WDOG_CS1: UPDATE Position               */
#define WDOG_CS1_UPDATE(x)                       (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_UPDATE_SHIFT))&WDOG_CS1_UPDATE_MASK) /*!< WDOG_CS1                                */
#define WDOG_CS1_INT_MASK                        (0x01UL << WDOG_CS1_INT_SHIFT)                      /*!< WDOG_CS1: INT Mask                      */
#define WDOG_CS1_INT_SHIFT                       6                                                   /*!< WDOG_CS1: INT Position                  */
#define WDOG_CS1_INT(x)                          (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_INT_SHIFT))&WDOG_CS1_INT_MASK) /*!< WDOG_CS1                                */
#define WDOG_CS1_EN_MASK                         (0x01UL << WDOG_CS1_EN_SHIFT)                       /*!< WDOG_CS1: EN Mask                       */
#define WDOG_CS1_EN_SHIFT                        7                                                   /*!< WDOG_CS1: EN Position                   */
#define WDOG_CS1_EN(x)                           (((uint8_t)(((uint8_t)(x))<<WDOG_CS1_EN_SHIFT))&WDOG_CS1_EN_MASK) /*!< WDOG_CS1                                */
/* ------- CS2 Bit Fields                           ------ */
#define WDOG_CS2_CLK_MASK                        (0x03UL << WDOG_CS2_CLK_SHIFT)                      /*!< WDOG_CS2: CLK Mask                      */
#define WDOG_CS2_CLK_SHIFT                       0                                                   /*!< WDOG_CS2: CLK Position                  */
#define WDOG_CS2_CLK(x)                          (((uint8_t)(((uint8_t)(x))<<WDOG_CS2_CLK_SHIFT))&WDOG_CS2_CLK_MASK) /*!< WDOG_CS2                                */
#define WDOG_CS2_PRES_MASK                       (0x01UL << WDOG_CS2_PRES_SHIFT)                     /*!< WDOG_CS2: PRES Mask                     */
#define WDOG_CS2_PRES_SHIFT                      4                                                   /*!< WDOG_CS2: PRES Position                 */
#define WDOG_CS2_PRES(x)                         (((uint8_t)(((uint8_t)(x))<<WDOG_CS2_PRES_SHIFT))&WDOG_CS2_PRES_MASK) /*!< WDOG_CS2                                */
#define WDOG_CS2_FLG_MASK                        (0x01UL << WDOG_CS2_FLG_SHIFT)                      /*!< WDOG_CS2: FLG Mask                      */
#define WDOG_CS2_FLG_SHIFT                       6                                                   /*!< WDOG_CS2: FLG Position                  */
#define WDOG_CS2_FLG(x)                          (((uint8_t)(((uint8_t)(x))<<WDOG_CS2_FLG_SHIFT))&WDOG_CS2_FLG_MASK) /*!< WDOG_CS2                                */
#define WDOG_CS2_WIN_MASK                        (0x01UL << WDOG_CS2_WIN_SHIFT)                      /*!< WDOG_CS2: WIN Mask                      */
#define WDOG_CS2_WIN_SHIFT                       7                                                   /*!< WDOG_CS2: WIN Position                  */
#define WDOG_CS2_WIN(x)                          (((uint8_t)(((uint8_t)(x))<<WDOG_CS2_WIN_SHIFT))&WDOG_CS2_WIN_MASK) /*!< WDOG_CS2                                */
/* ------- CNT Bit Fields                           ------ */
/* ------- CNTH Bit Fields                          ------ */
/* ------- CNTL Bit Fields                          ------ */
/* ------- TOVAL Bit Fields                         ------ */
/* ------- TOVALH Bit Fields                        ------ */
/* ------- TOVALL Bit Fields                        ------ */
/* ------- WIN Bit Fields                           ------ */
/* ------- WINH Bit Fields                          ------ */
/* ------- WINL Bit Fields                          ------ */
/**
 * @} */ /* End group WDOG_Register_Masks_GROUP 
 */

/* WDOG - Peripheral instance base addresses */
#define WDOG_BasePtr                   0x40052000UL //!< Peripheral base address
#define WDOG                           ((WDOG_Type *) WDOG_BasePtr) //!< Freescale base pointer
#define WDOG_BASE_PTR                  (WDOG) //!< Freescale style base pointer
/**
 * @} */ /* End group WDOG_Peripheral_access_layer_GROUP 
 */
/* --------------------  End of section using anonymous unions  ------------------- */
#if defined(__CC_ARM)
  #pragma pop
#elif defined(__ICCARM__)
  /* leave anonymous unions enabled */
#elif defined(__GNUC__)
  /* anonymous unions are enabled by default */
#elif defined(__TMS470__)
  /* anonymous unions are enabled by default */
#elif defined(__TASKING__)
  #pragma warning restore
#else
  #warning Not supported compiler type
#endif
/**
 * @} */ /* End group Peripheral_access_layer_GROUP 
 */

#ifdef __cplusplus
}
#endif


#endif  /* MCU_SKEAZN84 */

