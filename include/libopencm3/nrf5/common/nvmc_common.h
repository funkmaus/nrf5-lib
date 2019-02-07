/** @addtogroup nvmc_defines
 * @author @htmlonly &copy; @endhtmlonly 2018
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA NVMC.H
The order of header inclusion is important. nvmc.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_NVMC_H)
/** @endcond */
#ifndef LIBOPENCM3_NVMC_COMMON_H
#define LIBOPENCM3_NVMC_COMMON_H

/**@{*/

/** @defgroup nvmc_registers NVMC Registers
 * @ingroup nvmc_defines
 * @brief NVMC (Non-Volatile Memory Controller) Registers
@{*/

/* --------------------- NVMC registers for NRF52 -------------------------- */

/* Registers */
#define NVMC_ICACHECNF                    MMIO32((NVMC_BASE) + 0x540)
/**@}*/

/* --- NVMC_ICACHECNF values ----------------------------------------------------- */

/** @defgroup nvmc_icachecnf I-Code cache configuration
@ingroup nvmc_defines
@{*/
#define NVMC_ICACHECNF_CACHEEN_ENABLED            (1 << 0)
/**@}*/

#endif
/** @cond */
#else
#warning "nvmc_common.h should not be included explicitly, only via nvmc.h"
#endif
/** @endcond */
