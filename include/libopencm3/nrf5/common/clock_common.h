/** @addtogroup clock_defines
 * @author @htmlonly &copy; @endhtmlonly 2018 
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA CLOCK.H
The order of header inclusion is important. clock.h includes the device
specific memorymap.h header before including this header file.
*/

/** @cond */
#ifdef LIBOPENCM3_CLOCK_H
/** @endcond */

#ifndef LIBOPENCM3_CLOCK_COMMON_H
#define LIBOPENCM3_CLOCK_COMMON_H

/**@{*/

/** @defgroup clock_registers Clock Control Registers
 * @ingroup clock_defines
 * @brief Clock Control Registers
@{*/

/* --------------------- CLOCK registers for NRF5x ------------------------- */
/** Tasks Registers */
#define CLOCK_TASKS_HFCLKSTART                  MMIO32(CLOCK_BASE + 0x000)
#define CLOCK_TASKS_HFCLKSTOP                   MMIO32(CLOCK_BASE + 0x004)
#define CLOCK_TASKS_LFCLKSTART                  MMIO32(CLOCK_BASE + 0x008)
#define CLOCK_TASKS_LFCLKSTOP                   MMIO32(CLOCK_BASE + 0x00C)
#define CLOCK_TASKS_CAL                         MMIO32(CLOCK_BASE + 0x010)
#define CLOCK_TASKS_CTSTART                     MMIO32(CLOCK_BASE + 0x014)
#define CLOCK_TASKS_CTSTOP                      MMIO32(CLOCK_BASE + 0x018)

/** Events Registers */
#define CLOCK_EVENTS_HFCLKSTARTED               MMIO32(CLOCK_BASE + 0x100)
#define CLOCK_EVENTS_LFCLKSTARTED               MMIO32(CLOCK_BASE + 0x104)
#define CLOCK_EVENTS_DONE                       MMIO32(CLOCK_BASE + 0x10C)
#define CLOCK_EVENTS_CTTO                       MMIO32(CLOCK_BASE + 0x110)

/** Registers */
#define CLOCK_INTENSET                          MMIO32(CLOCK_BASE + 0x304)
#define CLOCK_INTENCLR                          MMIO32(CLOCK_BASE + 0x308)
#define CLOCK_HFCLKRUN                          MMIO32(CLOCK_BASE + 0x408)
#define CLOCK_HFCLKSTAT                         MMIO32(CLOCK_BASE + 0x40C)
#define CLOCK_LFCLKRUN                          MMIO32(CLOCK_BASE + 0x414)
#define CLOCK_LFCLKSTAT                         MMIO32(CLOCK_BASE + 0x418)
#define CLOCK_LFCLKSRCCOPY                      MMIO32(CLOCK_BASE + 0x41C)
#define CLOCK_LFCLKSRC                          MMIO32(CLOCK_BASE + 0x518)
#define CLOCK_CTIV                              MMIO32(CLOCK_BASE + 0x538)
/**@}*/

/* --- CLOCK_INTENSET values ----------------------------------------------- */
/** @defgroup clock_intenset Enable interrupt
@ingroup clock_defines
@{*/
#define CLOCK_INTENSET_HFCLKSTARTED                (1 << 0)
#define CLOCK_INTENSET_LFCLKSTARTED                (1 << 1)
#define CLOCK_INTENSET_DONE                        (1 << 3)
#define CLOCK_INTENSET_CTTO                        (1 << 4)
/**@}*/

/* --- CLOCK_INTENCLR values ----------------------------------------------- */
/** @defgroup clock_intenset Disable interrupt
@ingroup clock_defines
@{*/
#define CLOCK_INTENCLR_HFCLKSTARTED                (1 << 0)
#define CLOCK_INTENCLR_LFCLKSTARTED                (1 << 1)
#define CLOCK_INTENCLR_DONE                        (1 << 3)
#define CLOCK_INTENCLR_CTTO                        (1 << 4)
/**@}*/

/* --- CLOCK_HFCLKRUN values ----------------------------------------------- */
/** @defgroup clock_hfclkrun Status indicating that HFCLKSTART task has been
triggered
@ingroup clock_defines
@{*/
#define CLOCK_HFCLKRUN_STATUS_TRIGGERED            (1 << 0)
#define CLOCK_HFCLKRUN_STATUS_NOTTRIGGERED         (0 << 0)
/**@}*/

/* --- CLOCK_HFCLKSTAT values ---------------------------------------------- */
/** @defgroup clock_hfclkstat HFCLK Status
@ingroup clock_defines
@{*/
#define CLOCK_HFCLKSTAT_SRC_RC                     (0 << 0)
#define CLOCK_HFCLKSTAT_SRC_XTAL                   (1 << 0)
#define CLOCK_HFCLKSTAT_STATE_NOTRUNNING           (0 << 16)
#define CLOCK_HFCLKSTAT_STATE_RUNNING              (1 << 16)
/**@}*/

/* --- CLOCK_LFCLKRUN values ----------------------------------------------- */
/** @defgroup clock_lfclkrun Status indicating that LFCLKRUN task has been
triggered
@ingroup clock_defines
@{*/
#define CLOCK_LFCLKRUN_STATUS_TRIGGERED            (1)
#define CLOCK_LFCLKRUN_STATUS_NOTTRIGGERED         (0)
/**@}*/

/* --- CLOCK_LFCLKSTAT values ---------------------------------------------- */
/** @defgroup clock_lfclkstat LFCLK Status
@ingroup clock_defines
@{*/
#define CLOCK_LFCLKSTAT_SRC_RC                     (0 << 0)
#define CLOCK_LFCLKSTAT_SRC_XTAL                   (1 << 0)
#define CLOCK_LFCLKSTAT_SRC_SYNTH                  (0x2 << 0)
#define CLOCK_LFCLKSTAT_STATE_NOTRUNNING           (0 << 16)
#define CLOCK_LFCLKSTAT_STATE_RUNNING              (1 << 16)
/**@}*/

/* --- CLOCK_LFCLKSRCCOPY values ------------------------------------------- */
/** @defgroup clock_lfclksrccopy Copy of LFCLKSRC register, set when 
LFCLKSTART task was triggered
@ingroup clock_defines
@{*/
#define CLOCK_LFCLKSRCCOPY_SRC_RC                  (0)
#define CLOCK_LFCLKSRCCOPY_SRC_XTAL                (1)
#define CLOCK_LFCLKSRCCOPY_SRC_SYNTH               (2)
/**@}*/

/* --- CLOCK_LFCLKSRC values ----------------------------------------------- */
/** @defgroup clock_lfclksrc Clock source for the LFCLK
@ingroup clock_defines
@{*/
#define RC                                         (0 << 0)
#define CLOCK_LFCLKSRC_SRC_RC                      (0 << 0)
#define XTAL                                       (1 << 0)
#define CLOCK_LFCLKSRC_SRC_XTAL                    (1 << 0)
#define SYNTH                                      (0x2 << 0)
#define CLOCK_LFCLKSRC_SRC_SYNTH                   (0x2 << 0)
/**@}*/

/* --- CLOCK_CTIV values --------------------------------------------------- */
/** @defgroup clock_ctiv Retained register. Calibration timer interval
@ingroup clock_defines
@{*/
#define CLOCK_CTIV_CTIV(n)                         (n*4)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void clock_hfclk_start(void);
void clock_hfclk_stop(void);
void clock_lfclk_start(void);
void clock_lfclk_stop(void);
void clock_cal_start(void);
uint32_t clock_cal_done(void);
void clock_cal_reset(void);
void clock_cal_interval(uint8_t interval);
void clock_ct_start(void);
void clock_ct_stop(void);
uint32_t clock_ct_timeout(void);
void clock_ct_timeout_reset(void);
uint32_t clock_hfclk_trigger_status(void);
uint32_t clock_lfclk_trigger_status(void);
uint16_t clock_hfclk_run_status(void);
uint16_t clock_lfclk_run_status(void);
void clock_lfclk_source(char source);

END_DECLS


/**@}*/

#endif
/** @cond */
#else
#warning "clock_common.h should not be included explicitly, only via clock.h"
#endif
/** @endcond */

