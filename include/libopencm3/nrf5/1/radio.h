/** @defgroup radio_defines RADIO Defines
@brief <b>Defined Constants and Types for the NRF51xx RADIO</b>
@ingroup NRF51xx_defines
@version 1.0.0
@date 4 January 2019
@author @htmlonly &copy; @endhtmlonly 2019 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */

#ifndef LIBOPENCM3_RADIO_H
#define LIBOPENCM3_RADIO_H

#include <libopencm3/nrf5/common/radio_common.h> 

/* Registers */
#define RADIO_TEST                       MMIO32((RADIO_BASE) + 0x540)
#define RADIO_OVERRIDE0                  MMIO32((RADIO_BASE) + 0x724)
#define RADIO_OVERRIDE1                  MMIO32((RADIO_BASE) + 0x728)
#define RADIO_OVERRIDE2                  MMIO32((RADIO_BASE) + 0x72C)
#define RADIO_OVERRIDE3                  MMIO32((RADIO_BASE) + 0x730)
#define RADIO_OVERRIDE4                  MMIO32((RADIO_BASE) + 0x734)

#endif

