/** @addtogroup power_defines
 * @author @htmlonly &copy; @endhtmlonly 2018
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA POWER.H
The order of header inclusion is important. power.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_POWER_H)
/** @endcond */
#ifndef LIBOPENCM3_POWER_COMMON_H
#define LIBOPENCM3_POWER_COMMON_H

/**@{*/

/** @defgroup power_registers POWER Registers
 * @ingroup power_defines
 * @brief POWER Registers
@{*/

/* --------------------- POWER registers for NRF52 -------------------------- */

/* Registers */
#define POWER_DCDCEN                       MMIO32((POWER_BASE) + 0x578)
/**@}*/

/* --- POWER_DCDCEN values -------------------------------------------------- */


#define POWER_DCDCEN_DCDCEN_ENABLED                (1 << 0)
#define POWER_DCDCEN_DCDCEN_DISABLED               (0 << 0)

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

END_DECLS
/**@}*/
#endif
/** @cond */
#else
#warning "power_common.h should not be included explicitly, only via power.h"
#endif
/** @endcond */

