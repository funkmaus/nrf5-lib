/** @defgroup gpio_defines GPIO Defines
@brief <b>Defined Constants and Types for the NRF52xx General Purpose I/O</b>
@ingroup NRF52xx_defines
@version 1.0.0
@date 15 August 2018
@author @htmlonly &copy; @endhtmlonly 2018 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */

#ifndef LIBOPENCM3_GPIO_H
#define LIBOPENCM3_GPIO_H

#include <libopencm3/nrf5/common/gpio_common.h>

/** @defgroup gpio_registers GPIO Registers
 * @ingroup gpio_defines
 * @brief GPIO Registers
@{*/

/* --------------------- GPIO registers for NRF52 -------------------------- */

/* Registers */
#define GPIO_LATCH                     MMIO32((GPIO_BASE) + 0x520)
#define GPIO_DETECTMODE                MMIO32((GPIO_BASE) + 0x524)
/**@}*/

/* --- GPIO_LATCH values --------------------------------------------------- */
/** @defgroup gpio_latch Indicating what GPIO pins that have met the 
criteria set in the PIN_CNF[n].SENSE registers
@ingroup gpio_defines
@{*/
#define GPIO_LATCH_PIN_LATCHED(n)                 (1 << n)
#define GPIO_LATCH_PIN_NOTLATCHED(n)              (0 << n)
/**@}*/

/* --- GPIO_DETECTMODE values ---------------------------------------------- */
/** @defgroup gpio_detectmode Select mode for signal behaviour
@ingroup gpio_defines
@{*/
#define GPIO_DETECTMODE_DETECTMODE_DEFAULT        (0)
#define GPIO_DETECTMODE_DETECTMODE_LDETECT        (1)
/**@}*/


#endif