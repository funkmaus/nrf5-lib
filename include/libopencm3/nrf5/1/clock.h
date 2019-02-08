/** @defgroup clock_defines Clock Control Defines
@brief <b>Defined Constants and Types for the NRF51xx Clock Control</b>
@ingroup NRF51xx_defines
@version 1.0.0
@date 4 January 2019
@author @htmlonly &copy; @endhtmlonly 2019 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */

#ifndef LIBOPENCM3_CLOCK_H
#define LIBOPENCM3_CLOCK_H

#include <libopencm3/nrf5/common/clock_common.h>

/** @defgroup clock_registers Clock Control Registers
 * @ingroup clock_defines
 * @brief Clock Control Registers
@{*/

/* --------------------- CLOCK registers for NRF51 ------------------------- */
#define CLOCK_XTALFREQ                          MMIO32(CLOCK_BASE + 0x550)
/**@}*/

/* --- CLOCK_XTALFREQ values ----------------------------------------------- */
/** @defgroup clock_xtalfreq register. Select nominal frequency of external
crystal for HFCLK
@ingroup clock_defines
@{*/
#define CLOCK_XTALFREQ_XTALFREQ_16MHZ        (0xFF)
#define CLOCK_XTALFREQ_XTALFREQ_32MHZ        (0x00)
/**@}*/

#endif
