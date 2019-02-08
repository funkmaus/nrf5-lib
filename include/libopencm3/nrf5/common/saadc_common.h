/** @addtogroup saadc_defines SAADC Defines
 * @author @htmlonly &copy; @endhtmlonly 2018 
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA SAADC.H
The order of header inclusion is important. saadc.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_SAADC_H)
/** @endcond */
#ifndef LIBOPENCM3_SAADC_COMMON_H
#define LIBOPENCM3_SAADC_COMMON_H

/** @defgroup saadc_registers SAADC Registers
 * @ingroup saadc_defines
 * @brief SAADC Registers
@{*/
/* --------------------- SAADC registers for NRF52 ------------------------- */

/* Tasks Registers */
#define SAADC_TASKS_START                     MMIO32((SAADC_BASE) + 0x000)
#define SAADC_TASKS_SAMPLE                    MMIO32((SAADC_BASE) + 0x004)
#define SAADC_TASKS_STOP                      MMIO32((SAADC_BASE) + 0x008)
#define SAADC_TASKS_CALIBRATEOFFSE            MMIO32((SAADC_BASE) + 0x00C)

/* Events Registers */
#define SAADC_EVENTS_STARTED                  MMIO32((SAADC_BASE) + 0x100)
#define SAADC_EVENTS_END                      MMIO32((SAADC_BASE) + 0x104)
#define SAADC_EVENTS_DONE                     MMIO32((SAADC_BASE) + 0x108)
#define SAADC_EVENTS_RESULTDONE               MMIO32((SAADC_BASE) + 0x10C)
#define SAADC_EVENTS_CALIBRATEDON             MMIO32((SAADC_BASE) + 0x110)
#define SAADC_EVENTS_STOPPED                  MMIO32((SAADC_BASE) + 0x114)

typedef struct {

        uint32_t LIMITH;
        uint32_t LIMITL;

} SAADC_EVENTS_CH_Type;

#define SAADC_EVENTS_CH   ((volatile SAADC_EVENTS_CH_Type *)((SAADC_BASE) + 0x118))

#define SAADC_EVENTS_CH_LIMITH                PTRIO64((SAADC_BASE) + 0x118)
#define SAADC_EVENTS_CH_LIMITL                PTRIO64((SAADC_BASE) + 0x11C)
#define SAADC_EVENTS_CH0_LIMITH               MMIO32((SAADC_BASE) + 0x118)
#define SAADC_EVENTS_CH0_LIMITL               MMIO32((SAADC_BASE) + 0x11C)
#define SAADC_EVENTS_CH1_LIMITH               MMIO32((SAADC_BASE) + 0x120)
#define SAADC_EVENTS_CH1_LIMITL               MMIO32((SAADC_BASE) + 0x124)
#define SAADC_EVENTS_CH2_LIMITH               MMIO32((SAADC_BASE) + 0x128)
#define SAADC_EVENTS_CH2_LIMITL               MMIO32((SAADC_BASE) + 0x12C)
#define SAADC_EVENTS_CH3_LIMITH               MMIO32((SAADC_BASE) + 0x130)
#define SAADC_EVENTS_CH3_LIMITL               MMIO32((SAADC_BASE) + 0x134)
#define SAADC_EVENTS_CH4_LIMITH               MMIO32((SAADC_BASE) + 0x138)
#define SAADC_EVENTS_CH4_LIMITL               MMIO32((SAADC_BASE) + 0x13C)
#define SAADC_EVENTS_CH5_LIMITH               MMIO32((SAADC_BASE) + 0x140)
#define SAADC_EVENTS_CH5_LIMITL               MMIO32((SAADC_BASE) + 0x144)
#define SAADC_EVENTS_CH6_LIMITH               MMIO32((SAADC_BASE) + 0x148)
#define SAADC_EVENTS_CH6_LIMITL               MMIO32((SAADC_BASE) + 0x14C)
#define SAADC_EVENTS_CH7_LIMITH               MMIO32((SAADC_BASE) + 0x150)
#define SAADC_EVENTS_CH7_LIMITL               MMIO32((SAADC_BASE) + 0x154)

/* Registers */
#define SAADC_INTEN                           MMIO32((SAADC_BASE) + 0x300)
#define SAADC_INTENSET                        MMIO32((SAADC_BASE) + 0x304)
#define SAADC_INTENCLR                        MMIO32((SAADC_BASE) + 0x308)
#define SAADC_STATUS                          MMIO32((SAADC_BASE) + 0x400)
#define SAADC_ENABLE                          MMIO32((SAADC_BASE) + 0x500)

struct SAADC_CH_TYPE{
	uint32_t PSELP;
	uint32_t PSELN;
	uint32_t CONFIG;
	uint32_t LIMIT;
};
#define SAADC_CH    ((volatile struct SAADC_CH_TYPE*)((SAADC_BASE) + 0x510))

#define SAADC_CH_PSELP(n)                  MMIO32((SAADC_BASE) + 0x510 + 4*n)
#define SAADC_CH_PSELN(n)                  MMIO32((SAADC_BASE) + 0x514 + 4*n)
#define SAADC_CH_CONFIG(n)                 MMIO32((SAADC_BASE) + 0x518 + 4*n)
#define SAADC_CH_LIMIT(n)                  MMIO32((SAADC_BASE) + 0x51C + 4*n)
#define SAADC_CH0_PSELP                    MMIO32((SAADC_BASE) + 0x510)
#define SAADC_CH0_PSELN                    MMIO32((SAADC_BASE) + 0x514)
#define SAADC_CH0_CONFIG                   MMIO32((SAADC_BASE) + 0x518)
#define SAADC_CH0_LIMIT                    MMIO32((SAADC_BASE) + 0x51C)
#define SAADC_CH1_PSELP                    MMIO32((SAADC_BASE) + 0x520)
#define SAADC_CH1_PSELN                    MMIO32((SAADC_BASE) + 0x524)
#define SAADC_CH1_CONFIG                   MMIO32((SAADC_BASE) + 0x528)
#define SAADC_CH1_LIMIT                    MMIO32((SAADC_BASE) + 0x52C)
#define SAADC_CH2_PSELP                    MMIO32((SAADC_BASE) + 0x530)
#define SAADC_CH2_PSELN                    MMIO32((SAADC_BASE) + 0x534)
#define SAADC_CH2_CONFIG                   MMIO32((SAADC_BASE) + 0x538)
#define SAADC_CH2_LIMIT                    MMIO32((SAADC_BASE) + 0x53C)
#define SAADC_CH3_PSELP                    MMIO32((SAADC_BASE) + 0x540)
#define SAADC_CH3_PSELN                    MMIO32((SAADC_BASE) + 0x544)
#define SAADC_CH3_CONFIG                   MMIO32((SAADC_BASE) + 0x548)
#define SAADC_CH3_LIMIT                    MMIO32((SAADC_BASE) + 0x54C)
#define SAADC_CH4_PSELP                    MMIO32((SAADC_BASE) + 0x550)
#define SAADC_CH4_PSELN                    MMIO32((SAADC_BASE) + 0x554)
#define SAADC_CH4_CONFIG                   MMIO32((SAADC_BASE) + 0x558)
#define SAADC_CH4_LIMIT                    MMIO32((SAADC_BASE) + 0x55C)
#define SAADC_CH5_PSELP                    MMIO32((SAADC_BASE) + 0x560)
#define SAADC_CH5_PSELN                    MMIO32((SAADC_BASE) + 0x564)
#define SAADC_CH5_CONFIG                   MMIO32((SAADC_BASE) + 0x568)
#define SAADC_CH5_LIMIT                    MMIO32((SAADC_BASE) + 0x56C)
#define SAADC_CH6_PSELP                    MMIO32((SAADC_BASE) + 0x570)
#define SAADC_CH6_PSELN                    MMIO32((SAADC_BASE) + 0x574)
#define SAADC_CH6_CONFIG                   MMIO32((SAADC_BASE) + 0x578)
#define SAADC_CH6_LIMIT                    MMIO32((SAADC_BASE) + 0x57C)
#define SAADC_CH7_PSELP                    MMIO32((SAADC_BASE) + 0x580)
#define SAADC_CH7_PSELN                    MMIO32((SAADC_BASE) + 0x584)
#define SAADC_CH7_CONFIG                   MMIO32((SAADC_BASE) + 0x588)
#define SAADC_CH7_LIMIT                    MMIO32((SAADC_BASE) + 0x58C)
#define SAADC_RESOLUTION                   MMIO32((SAADC_BASE) + 0x5F0)
#define SAADC_OVERSAMPLE                   MMIO32((SAADC_BASE) + 0x5F4)
#define SAADC_SAMPLERATE                   MMIO32((SAADC_BASE) + 0x5F8)

struct SAADC_RESULT_TYPE{
	uint32_t PTR;
	uint32_t MAXCNT;
	uint32_t AMOUNT;
};
#define SAADC_RESULT   (*(volatile struct SAADC_RESULT_TYPE*)((SAADC_BASE) + 0x62C))
#define SAADC_RESULT_PTR                   MMIO32((SAADC_BASE) + 0x62C)
#define SAADC_RESULT_MAXCNT                MMIO32((SAADC_BASE) + 0x630)
#define SAADC_RESULT_AMOUNT                MMIO32((SAADC_BASE) + 0x634)
/**@}*/

/* --- SAADC_INTEN values -------------------------------------------------- */
/** @defgroup saadc_inten Enable or disable interrupt
@ingroup saadc_defines
@{*/
#define SAADC_INTEN_STARTED_DISABLED                   (0 << 0)
#define SAADC_INTEN_STARTED_ENABLED                    (1 << 0)
#define SAADC_INTEN_END_DISABLED                       (0 << 1)
#define SAADC_INTEN_END_ENABLED                        (1 << 1)
#define SAADC_INTEN_DONE_DISABLED                      (0 << 2)
#define SAADC_INTEN_DONE_ENABLED                       (1 << 2)
#define SAADC_INTEN_RESULTDONE_DISABLED                (0 << 3)
#define SAADC_INTEN_RESULTDONE_ENABLED                 (1 << 3)
#define SAADC_INTEN_CALIBRATEDONE_DISABLED             (0 << 4)
#define SAADC_INTEN_CALIBRATEDONE_ENABLED              (1 << 4)
#define SAADC_INTEN_STOPPED_DISABLED                   (0 << 5)
#define SAADC_INTEN_STOPPED_ENABLED                    (1 << 5)
#define SAADC_INTEN_CHLIMITH_DISABLED(n)               (0 << (6+2*n))
#define SAADC_INTEN_CHLIMITH_ENABLED(n)                (1 << (6+2*n))
#define SAADC_INTEN_CHLIMITL_DISABLED(n)               (0 << (7+2*n))
#define SAADC_INTEN_CHLIMITL_ENABLED(n)                (1 << (7+2*n))
/**@}*/

/* --- SAADC_INTENSET values ----------------------------------------------- */
/** @defgroup saadc_intenset Enable interrupt
@ingroup saadc_defines
@{*/
#define SAADC_INTENSET_STARTED_SET                     (1 << 0)
#define SAADC_INTENSET_STARTED_ENABLED                 (1 << 0)
#define SAADC_INTENSET_END_SET                         (1 << 1)
#define SAADC_INTENSET_END_ENABLED                     (1 << 1)
#define SAADC_INTENSET_DONE_SET                        (1 << 2)
#define SAADC_INTENSET_DONE_ENABLED                    (1 << 2)
#define SAADC_INTENSET_RESULTDONE_SET                  (1 << 3)
#define SAADC_INTENSET_RESULTDONE_ENABLED              (1 << 3)
#define SAADC_INTENSET_CALIBRATEDONE_SET               (1 << 4)
#define SAADC_INTENSET_CALIBRATEDONE_ENABLED           (1 << 4)
#define SAADC_INTENSET_STOPPED_SET                     (1 << 5)
#define SAADC_INTENSET_STOPPED_ENABLED                 (1 << 5)
#define SAADC_INTENSET_CHLIMITH_SET(n)                 (1 << (6+2*n))
#define SAADC_INTENSET_CHLIMITH_ENABLED(n)             (1 << (6+2*n))
#define SAADC_INTENSET_CHLIMITL_SET(n)                 (1 << (7+2*n))
#define SAADC_INTENSET_CHLIMITL_ENABLED(n)             (1 << (7+2*n))
/**@}*/

/* --- SAADC_INTENCLR values ----------------------------------------------- */
/** @defgroup saadc_intenclr Disable interrupt
@ingroup saadc_defines
@{*/
#define SAADC_INTENCLR_STARTED_CLEAR                   (1 << 0)
#define SAADC_INTENCLR_STARTED_ENABLED                 (1 << 0)
#define SAADC_INTENCLR_END_CLEAR                       (1 << 1)
#define SAADC_INTENCLR_END_ENABLED                     (1 << 1)
#define SAADC_INTENCLR_DONE_CLEAR                      (1 << 2)
#define SAADC_INTENCLR_DONE_ENABLED                    (1 << 2)
#define SAADC_INTENCLR_RESULTDONE_CLEAR                (1 << 3)
#define SAADC_INTENCLR_RESULTDONE_ENABLED              (1 << 3)
#define SAADC_INTENCLR_CALIBRATEDONE_CLEAR             (1 << 4)
#define SAADC_INTENCLR_CALIBRATEDONE_ENABLED           (1 << 4)
#define SAADC_INTENCLR_STOPPED_CLEAR                   (1 << 5)
#define SAADC_INTENCLR_STOPPED_ENABLED                 (1 << 5)
#define SAADC_INTENCLR_CHLIMITH_CLEAR(n)               (1 << (6+2*n))
#define SAADC_INTENCLR_CHLIMITH_ENABLED(n)             (1 << (6+2*n))
#define SAADC_INTENCLR_CHLIMITL_CLEAR(n)               (1 << (7+2*n))
#define SAADC_INTENCLR_CHLIMITL_ENABLED(n)             (1 << (7+2*n))
/**@}*/

/* --- SAADC_STATUS values ------------------------------------------------- */
/** @defgroup saadc_status ADC Status
@ingroup saadc_defines
@{*/
#define SAADC_STATUS_STATUS_READY                      (0)
#define SAADC_STATUS_STATUS_BUSY                       (1)
/**@}*/

/* --- SAADC_ENABLE values ------------------------------------------------- */
/** @defgroup saadc_enable Enable SAADC
@ingroup saadc_defines
@{*/
#define SAADC_ENABLE_ENABLE_DISABLED                   (0)
#define SAADC_ENABLE_ENABLE_ENABLED                    (1)
/**@}*/

/* ------------------------------------------------------------------------- */
/* SAADC Pin definitions (for convenience) */
/** @defgroup saadc_pin_id SAADC Pin Identifiers
@ingroup saadc_defines
@{*/
#define NC                                            (0)
#define AIN0                                          (1)
#define AIN1                                          (2)
#define AIN2                                          (3)
#define AIN3                                          (4)
#define AIN4                                          (5)
#define AIN5                                          (6)
#define AIN6                                          (7)
#define AIN7                                          (8)
#define VDD                                           (9)
/**@}*/

/* --- SAADC_CH[x].PSELP values -------------------------------------------- */
/** @defgroup saadc_ch_pselp Select positive pin
@ingroup saadc_defines
@{*/
#define SAADC_CH_PSELP_PSELP_NC                       (0)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT0             (1)
#define SAADC_CH_PSELP_PSELP_AIN0                     (1)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT1             (2)
#define SAADC_CH_PSELP_PSELP_AIN1                     (2)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT2             (3)
#define SAADC_CH_PSELP_PSELP_AIN2                     (3)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT3             (4)
#define SAADC_CH_PSELP_PSELP_AIN3                     (4)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT4             (5)
#define SAADC_CH_PSELP_PSELP_AIN4                     (5)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT5             (6)
#define SAADC_CH_PSELP_PSELP_AIN5                     (6)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT6             (7)
#define SAADC_CH_PSELP_PSELP_AIN6                     (7)
#define SAADC_CH_PSELP_PSELP_ANALOGINPUT7             (8)
#define SAADC_CH_PSELP_PSELP_AIN7                     (8)
#define SAADC_CH_PSELP_PSELP_VDD                      (9)
/**@}*/

/* --- SAADC_CH[x].PSELN values -------------------------------------------- */
/** @defgroup saadc_ch_pseln Select negative pin
@ingroup saadc_defines
@{*/
#define SAADC_CH_PSELN_PSELN_NC                       (0)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT0             (1)
#define SAADC_CH_PSELN_PSELN_AIN0                     (1)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT1             (2)
#define SAADC_CH_PSELN_PSELN_AIN1                     (2)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT2             (3)
#define SAADC_CH_PSELN_PSELN_AIN2                     (3)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT3             (4)
#define SAADC_CH_PSELN_PSELN_AIN3                     (4)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT4             (5)
#define SAADC_CH_PSELN_PSELN_AIN4                     (5)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT5             (6)
#define SAADC_CH_PSELN_PSELN_AIN5                     (6)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT6             (7)
#define SAADC_CH_PSELN_PSELN_AIN6                     (7)
#define SAADC_CH_PSELN_PSELN_ANALOGINPUT7             (8)
#define SAADC_CH_PSELN_PSELN_AIN7                     (8)
#define SAADC_CH_PSELN_PSELN_VDD                      (9)
/**@}*/

/* --- SAADC_CH[x].CONFIG values ------------------------------------------- */
/** @defgroup saadc_ch_config Pin configuration
@ingroup saadc_defines
@{*/
#define RESP_BYPASS                                   (0 << 0)
#define SAADC_CH_CONFIG_RESP_BYPASS                   (0 << 0)
#define RESP_PULLDOWN                                 (1 << 0)
#define SAADC_CH_CONFIG_RESP_PULLDOWN                 (1 << 0)
#define RESP_PULLUP                                   (0x2 << 0)
#define SAADC_CH_CONFIG_RESP_PULLUP                   (0x2 << 0)
#define RESP_VDD1_2                                   (0x3 << 0)
#define SAADC_CH_CONFIG_RESP_VDD1_2                   (0x3 << 0)
#define RESN_BYPASS                                   (0 << 4)
#define SAADC_CH_CONFIG_RESN_BYPASS                   (0 << 4)
#define RESN_PULLDOWN                                 (1 << 4)
#define SAADC_CH_CONFIG_RESN_PULLDOWN                 (1 << 4)
#define RESN_PULLUP                                   (0x2 << 4)
#define SAADC_CH_CONFIG_RESN_PULLUP                   (0x2 << 4)
#define RESN_VDD1_2                                   (0x3 << 4)
#define SAADC_CH_CONFIG_RESN_VDD1_2                   (0x3 << 4)
#define GAIN1_6                                       (0 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN1_6                  (0 << 8)
#define GAIN1_5                                       (1 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN1_5                  (1 << 8)
#define GAIN1_4                                       (0x2 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN1_4                  (0x2 << 8)
#define GAIN1_3                                       (0x3 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN1_3                  (0x3 << 8)
#define GAIN1_2                                       (0x4 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN1_2                  (0x4 << 8)
#define GAIN1                                         (0x5 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN1                    (0x5 << 8)
#define GAIN2                                         (0x6 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN2                    (0x6 << 8)
#define GAIN4                                         (0x7 << 8)
#define SAADC_CH_CONFIG_GAIN_GAIN4                    (0x7 << 8)
#define REFSEL_INTERNAL                               (0 << 12)
#define SAADC_CH_CONFIG_REFSEL_INTERNAL               (0 << 12)
#define REFSEL_VDD1_4                                 (1 << 12)
#define SAADC_CH_CONFIG_REFSEL_VDD1_4                 (1 << 12)
#define TACQ_3US                                      (0 << 16)
#define SAADC_CH_CONFIG_TACQ_3US                      (0 << 16)
#define TACQ_5US                                      (1 << 16)
#define SAADC_CH_CONFIG_TACQ_5US                      (1 << 16)
#define TACQ_10US                                     (0x2 << 16)
#define SAADC_CH_CONFIG_TACQ_10US                     (0x2 << 16)
#define TACQ_15US                                     (0x3 << 16)
#define SAADC_CH_CONFIG_TACQ_15US                     (0x3 << 16)
#define TACQ_20US                                     (0x4 << 16)
#define SAADC_CH_CONFIG_TACQ_20US                     (0x4 << 16)
#define TACQ_40US                                     (0x5 << 16)
#define SAADC_CH_CONFIG_TACQ_40US                     (0x5 << 16)
#define MODE_SE                                       (0 << 16)
#define SAADC_CH_CONFIG_MODE_SE                       (0 << 20)
#define MODE_DIFF                                     (1 << 20)
#define SAADC_CH_CONFIG_MODE_DIFF                     (1 << 20)
#define SAADC_CH_CONFIG_BURST_DISABLED                (0 << 24)
#define SAADC_CH_CONFIG_BURST_ENABLED                 (1 << 24)
/**@}*/

/* --- SAADC_CH[x].LIMIT values -------------------------------------------- */
/** @defgroup saadc_ch_limit Set limits
@ingroup saadc_defines
@{*/
#define SAADC_CH_LIMIT_LOW(n)                         ((uint16_t)(n) << 0)
#define SAADC_CH_LIMIT_HIGH(n)                        ((uint16_t)(n) << 16)
/**@}*/

/* --- SAADC_RESOLUTION values --------------------------------------------- */
/** @defgroup saadc_resolution Set resolution
@ingroup saadc_defines
@{*/
#define SAADC_RESOLUTION_VAL(n)                        ((n-8)/2)
#define VAL_8BIT                                       (0)
#define SAADC_RESOLUTION_VAL_8BIT                      (0)
#define VAL_10BIT                                      (1)
#define SAADC_RESOLUTION_VAL_10BIT                     (1)
#define VAL_12BIT                                      (2)
#define SAADC_RESOLUTION_VAL_12BIT                     (2)
#define VAL_14BIT                                      (3)
#define SAADC_RESOLUTION_VAL_14BIT                     (3)
/**@}*/

/* --- SAADC_OVERSAMPLE values --------------------------------------------- */
/** @defgroup saadc_oversample Oversampling configuration
@ingroup saadc_defines
@{*/
#define BYPASS                                         (0)
#define SAADC_OVERSAMPLE_OVERSAMPLE_BYPASS             (0)
#define OVER2X                                         (1)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER2X             (1)
#define OVER4X                                         (2)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER4X             (2)
#define OVER8X                                         (3)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER8X             (3)
#define OVER16X                                        (4)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER16X            (4)
#define OVER32X                                        (5)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER32X            (5)
#define OVER64X                                        (6)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER64X            (6)
#define OVER128X                                       (7)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER128X           (7)
#define OVER256X                                       (8)
#define SAADC_OVERSAMPLE_OVERSAMPLE_OVER256X           (8)
/**@}*/

/* --- SAADC_SAMPLERATE values --------------------------------------------- */
/** @defgroup saadc_samplerate Set sample rate and select mode
@ingroup saadc_defines
@{*/
#define SAADC_SAMPLERATE_CC(n)                         (((n)&0x7ff) << 0)
#define MODE_TASK                                      (0 << 12)
#define SAADC_SAMPLERATE_MODE_TASK                     (0 << 12)
#define MODE_TIMERS                                    (1 << 12)
#define SAADC_SAMPLERATE_MODE_TIMERS                   (1 << 12)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void saadc_pin_pos(uint8_t channel, uint32_t pselp);
void saadc_pin_neg(uint8_t channel, uint32_t pseln);
void saadc_resistor_pos(uint8_t channel, uint32_t resp);
void saadc_resistor_neg(uint8_t channel, uint32_t resn);
void saadc_gain(uint8_t channel, uint32_t gain);
void saadc_set_reference(uint8_t channel, uint32_t refsel);
void saadc_acquisition_time(uint8_t channel, uint32_t tacq);
void saadc_differential_mode(uint8_t channel, uint32_t mode);
void saadc_burst_enable(uint8_t channel);
void saadc_limit(uint8_t channel, int16_t low, int16_t high);
void saadc_resolution(uint8_t res);
void saadc_oversample(uint32_t oversample);
void saadc_samplerate(uint16_t cc, uint32_t mode);
void saadc_result_buffer(uint32_t *ptr, uint16_t maxcnt);
void saadc_enable(void);
void saadc_disable(void);
void saadc_sample_start(void);
void saadc_start(void);
void saadc_stop(void);
uint32_t saadc_limit_high(uint8_t channel);
uint32_t saadc_limit_low(uint8_t channel);
void saadc_limit_reset(uint8_t channel);
uint32_t saadc_sample_end(void);
uint32_t saadc_status(void);

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "saadc_common.h should not be included explicitly, only via saadc.h"
#endif
/** @endcond */

