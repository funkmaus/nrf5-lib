/** @addtogroup spis_defines SPIS Defines
 * @author @htmlonly &copy; @endhtmlonly 2019 
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA SPIS.H
The order of header inclusion is important. spis.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_SPIS_H)
/** @endcond */
#ifndef LIBOPENCM3_SPIS_COMMON_H
#define LIBOPENCM3_SPIS_COMMON_H

/**@{*/
/** @defgroup spis_reg_base SPIS register base addresses
 * @ingroup spis_defines
 * @{
 */
#define SPIS1                            SPIS1_BASE
/**@}*/

/** @defgroup spis_registers SPIS Registers
 * @ingroup spis_defines
 * @brief SPIS Registers
@{*/
/* --------------------- SPIS registers for NRF5x ------------------------- */

/* Tasks Registers */
#define SPIS_TASKS_ACQUIRE(spis_base)            MMIO32((spis_base) + 0x024)

#define SPIS_TASKS_RELEASE(spis_base)            MMIO32((spis_base) + 0x028)

/*Events Register*/
#define SPIS_EVENTS_END(spis_base)               MMIO32((spis_base) + 0x104)

#define SPIS_EVENTS_ACQUIRED(spis_base)          MMIO32((spis_base) + 0x128)

/***/
#define SPIS_SHORTS(spis_base)                   MMIO32((spis_base) + 0x200)

#define SPIS_INTENSET(spis_base)                 MMIO32((spis_base) + 0x304)

#define SPIS_INTENCLR(spis_base)                 MMIO32((spis_base) + 0x308)

#define SPIS_SEMSTAT(spis_base)                  MMIO32((spis_base) + 0x400)

#define SPIS_STATUS(spis_base)                   MMIO32((spis_base) + 0x440)

#define SPIS_ENABLE(spis_base)                   MMIO32((spis_base) + 0x500)

#define SPIS_CONFIG(spis_base)                   MMIO32((spis_base) + 0x554)

#define SPIS_DEF(spis_base)                      MMIO32((spis_base) + 0x55C)

#define SPIS_ORC(spis_base)                      MMIO32((spis_base) + 0x5C0)
/**@}*/

/* --- SPIS_SHORTS values -------------------------------------------------- */
/** @defgroup spis_shorts Set shortcut between END event and ACQUIRE task
@ingroup spis_defines
@{*/
#define SPIS_SHORTS_END_ACQUIRE_ENABLED             (1 << 2)
/**@}*/

/* --- SPIS_INTENSET values ------------------------------------------------ */
/** @defgroup spis_intenset Enable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENSET_END_SET                 (1 << 1)
#define SPIS_INTENSET_ACQUIRED_SET            (1 << 10)
/**@}*/

/* --- SPIS_INTENCLR values ------------------------------------------------ */
/** @defgroup spis_intenclr Disable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENCLR_END_CLEAR              (1 << 1)
#define SPIS_INTENCLR_ACQUIRED_CLEAR         (1 << 10)
/**@}*/

/* --- SPIS_SEMSTAT values ------------------------------------------------- */
/** @defgroup spis_semstat Read semaphore status
@ingroup spis_defines
@{*/
#define SPIS_SEMSTAT_SEMSTAT_FREE               (0)
#define SPIS_SEMSTAT_SEMSTAT_CPU                (1)
#define SPIS_SEMSTAT_SEMSTAT_SPIS               (2)
#define SPIS_SEMSTAT_SEMSTAT_CPUPENDING         (3)
/**@}*/

/* --- SPIS_STATUS values -------------------------------------------------- */
/** @defgroup spis_status Read status from last transaction and clear error
@ingroup spis_defines
@{*/
#define SPIS_STATUS_OVERREAD_NOTPRESENT         (0)
#define SPIS_STATUS_OVERREAD_PRESENT            (1)
#define SPIS_STATUS_OVERREAD_CLEAR              (1)
#define SPIS_STATUS_OVERFLOW_NOTPRESENT         (0 << 1)
#define SPIS_STATUS_OVERFLOW_PRESENT            (1 << 1)
#define SPIS_STATUS_OVERFLOW_CLEAR              (1 << 1)
/**@}*/

/* --- SPIS_ENABLE values -------------------------------------------------- */
/** @defgroup spis_enable Enable SPI Slave
@ingroup spis_defines
@{*/
#define SPIS_ENABLE_ENABLE_ENABLED               (2)
#define SPIS_ENABLE_ENABLE_DISABLED              (0)
/**@}*/

/* --- SPIS_CONFIG values -------------------------------------------------- */
/** @defgroup spis_config Bit order, Serial clock phase and polarity
configuration
@ingroup spis_defines
@{*/
#define SPIS_CONFIG_ORDER_MSBFIRST               (0 << 0)
#define SPIS_CONFIG_ORDER_LSBFIRST               (1 << 0)
//Sample on leading edge of clock, shift serial data on trailing edge
#define SPIS_CONFIG_CPHA_LEADING                 (0 << 1)
//Sample on trailing edge of clock, shift serial data on leading edge
#define SPIS_CONFIG_CPHA_TRAILING                (1 << 1)
//Serial clock polarity
#define SPIS_CONFIG_CPOL_ACTIVEHIGH              (0 << 2) 
#define SPIS_CONFIG_CPOL_ACTIVELOW               (1 << 2)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

//funktion();
//funktion();
//funktion();
//funktion();

END_DECLS

/**@}*/

#endif
/** @cond */
#else
#warning "spis_common.h should not be included explicitly, only via spis.h"
#endif
/** @endcond */

