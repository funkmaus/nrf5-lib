/** @defgroup radio_file RADIO
@ingroup NRF52xx
@brief <b>libopencm3 NRF52xx RADIO</b>
@version 1.0.0
@date 15 August 2018
@author @htmlonly &copy; @endhtmlonly 2018 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
*/

/**@{*/

#include <libopencm3/nrf5/radio.h>
#include <libopencm3/nrf5/clock.h>

/*---------------------------------------------------------------------------*/
/** @brief RADIO CRC check status

Return 1 if packet received with CRC ok
*/

uint32_t radio_crc_ok(void)
{
	return RADIO_EVENTS_CRCOK;
}

/*---------------------------------------------------------------------------*/
/** @brief RADIO Reset CRC check event

Clear CRCOK event and ready to check CRC for the next transmission/reception
*/

void radio_crc_ok_reset(void)
{
	RADIO_EVENTS_CRCOK = 0;
}

/**@}*/