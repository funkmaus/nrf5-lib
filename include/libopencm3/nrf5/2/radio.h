/** @defgroup radio_defines RADIO Defines
@brief <b>Defined Constants and Types for the NRF52xx RADIO</b>
@ingroup NRF52xx_defines
@version 1.0.0
@date 15 August 2018
@author @htmlonly &copy; @endhtmlonly 2018 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */


#ifndef LIBOPENCM3_RADIO_H
#define LIBOPENCM3_RADIO_H

#include <libopencm3/nrf5/common/radio_common.h> 

/**@{*/

/** @defgroup radio_registers RADIO Registers
 * @ingroup radio_defines
 * @brief RADIO Registers
@{*/
/* --------------------- RADIO registers for NRF52 ------------------------- */
#define RADIO_EVENTS_CRCOK               MMIO32((RADIO_BASE) + 0x130)
#define RADIO_EVENTS_CRCERROR            MMIO32((RADIO_BASE) + 0x134)
#define RADIO_MODECNF0                   MMIO32((RADIO_BASE) + 0x650)

/* --- RADIO_MODECNF0 values ----------------------------------------------- */
/** @defgroup radio_modecnf0 Configurates radio mode
@ingroup radio_defines
@{*/
#define RADIO_MODECNF0_RU_DEFAULT         (0 << 0)
#define RADIO_MODECNF0_RU_FAST            (1 << 0)
#define RADIO_MODECNF0_DTX_B1             (0 << 8)
#define RADIO_MODECNF0_DTX_B0             (1 << 8)
#define RADIO_MODECNF0_DTX_CENTER         (0x2 << 8)
#define RADIO_MODECNF0_DTX_Center         (0x2 << 8)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

uint32_t radio_crc_ok(void);
void radio_crc_ok_reset(void);

END_DECLS

/**@}*/

#endif

