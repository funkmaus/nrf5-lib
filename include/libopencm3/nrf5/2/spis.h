/** @defgroup ppi_defines SPIS Defines
@brief <b>Defined Constants and Types for the NRF52xx SPIS</b>
@ingroup NRF52xx_defines
@version 1.0.0
@date 14 February 2019
@author @htmlonly &copy; @endhtmlonly 2019 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */

#ifndef LIBOPENCM3_SPIS_H
#define LIBOPENCM3_SPIS_H

#include <libopencm3/nrf5/common/spis_common.h>    

/**@{*/
/** @defgroup spis_reg_base SPIS register base addresses
 * @ingroup spis_defines
 * @{
 */
#define SPIS0                            SPIS0_BASE
#define SPIS2                            SPIS2_BASE
/**@}*/

/** @defgroup spis_registers SPIS Registers
 * @ingroup spis_defines
 * @brief SPIS Registers
@{*/
/* --------------------- SPIS registers for NRF52 ------------------------- */
#define SPIS_EVENTS_ENDRX(spis_base)             MMIO32((spis_base) + 0x110)

struct SPIS_PSEL_TYPE{
	uint32_t SCK;
	uint32_t MISO;
	uint32_t MOSI;
	uint32_t CSN;
};
#define SPIS_PSEL(spis_base)      (*(volatile struct SPIS_PSEL_TYPE*)((spis_base) + 0x508))

struct SPIS_RXD_TYPE{
	uint32_t PTR;
	uint32_t MAXCNT;
	uint32_t AMOUNT;
};
#define SPIS_RXD(spis_base)       (*(volatile struct SPIS_RXD_TYPE*)((spis_base) + 0x534))

struct SPIS_TXD_TYPE{
	uint32_t PTR;
	uint32_t MAXCNT;
	uint32_t AMOUNT;
};
#define SPIS_TXD(spis_base)       (*(volatile struct SPIS_TXD_TYPE*)((spis_base) + 0x544))

/* --- SPIS_INTENSET values ------------------------------------------------ */
/** @defgroup spis_intenset Enable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENSET_ENDRX_SET               (1 << 4)
/**@}*/

/* --- SPIS_INTENCLR values ------------------------------------------------ */
/** @defgroup spis_intenclr Disable interrupt
@ingroup spis_defines
@{*/
#define SPIS_INTENCLR_ENDRX_CLEAR            (1 << 4)
/**@}*/

/* --- SPIS_PSEL.SCK values ------------------------------------------------ */
/** @defgroup spis_psel_sck Select pin for SCK
@ingroup spis_defines
@{*/
#define SPIS_PSEL_SCK_PIN(n)                     (n)
#define SPIS_PSEL_SCK_CONNECT_CONNECTED          (0 << 31)
#define SPIS_PSEL_SCK_CONNECT_DISCONNECTED       (1 << 31)
/**@}*/

/* --- SPIS_PSEL.MISO values ----------------------------------------------- */
/** @defgroup spis_psel_miso Select pin for MISO signal
@ingroup spis_defines
@{*/
#define SPIS_PSEL_MISO_PIN(n)                    (n)
#define SPIS_PSEL_MISO_CONNECT_CONNECTED         (0 << 31)
#define SPIS_PSEL_MISO_CONNECT_DISCONNECTED      (1 << 31)
/**@}*/

/* --- SPIS_PSEL.MOSI values ----------------------------------------------- */
/** @defgroup spis_psel_mosi Select pin for MOSI signal
@ingroup spis_defines
@{*/
#define SPIS_PSEL_MOSI_PIN(n)                    (n)
#define SPIS_PSEL_MOSI_CONNECT_CONNECTED         (0 << 31)
#define SPIS_PSEL_MOSI_CONNECT_DISCONNECTED      (1 << 31)
/**@}*/

/* --- SPIS_PSEL.CSN values ------------------------------------------------ */
/** @defgroup spis_psel_csn Select pin for CSN signal
@ingroup spis_defines
@{*/
#define SPIS_PSEL_CSN_PIN(n)                     (n)
#define SPIS_PSEL_CSN_CONNECT_CONNECTED          (0 << 31)
#define SPIS_PSEL_CSN_CONNECT_DISCONNECTED       (1 << 31)
/**@}*/

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

//fkt

END_DECLS

/**@}*/

#endif

