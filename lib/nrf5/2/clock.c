/** @defgroup clock_file Clock Control
@ingroup NRF52xx
@brief <b>libopencm3 NRF52xx Clock Control</b>
@version 1.0.0
@date 15 August 2018
@author @htmlonly &copy; @endhtmlonly 2018 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
*/

/**@{*/

#include <libopencm3/cm3/assert.h>
#include <libopencm3/nrf5/clock.h>

/*---------------------------------------------------------------------------*/
/** @brief Clock Enable bypass of LFCLK with external source.

If Bypass enabled, LFCLK crystal oscillator will use rail-to-rail external
source
*/

void clock_lfclk_extsource_bypass(void)
{
	CLOCK_LFCLKSRC |= CLOCK_LFCLKSRC_BYPASS_ENABLED;
}

/*---------------------------------------------------------------------------*/
/** @brief Clock Enable LFCLK external source.

*/

void clock_lfclk_extsource_enable(void)
{
	CLOCK_LFCLKSRC |= CLOCK_LFCLKSRC_EXTERNAL_ENABLED;
}


/**@}*/