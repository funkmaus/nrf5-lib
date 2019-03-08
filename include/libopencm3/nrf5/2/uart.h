/** @defgroup uart_defines UART Defines
@brief <b>Defined Constants and Types for the NRF52xx UART</b>
@ingroup NRF52xx_defines
@version 1.0.0
@date 15 August 2018
@author @htmlonly &copy; @endhtmlonly 2018 
Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>

LGPL License Terms @ref lgpl_license
 */

#ifndef LIBOPENCM3_UART_H
#define LIBOPENCM3_UART_H

#include <libopencm3/nrf5/common/uart_common.h>

/**@{*/
/** @defgroup uart_registers UARTE Registers
 * @ingroup uart_defines
 * @brief UART Registers
@{*/
/* --------------------- UART registers for NRF52 -------------------------- */
#define UART_SHORTS(uart_base)               MMIO32((uart_base) + 0x200)
#define UART0_SHORTS                         MMIO32((UART0) + 0x200)
/**@}*/

/* --- UART_SHORTS values -------------------------------------------------- */
/** @defgroup uart_shorts Set shortcut between ENDRX-STARTRX and ENDRX-STOPRX
@ingroup uart_defines
@{*/
#define UART_SHORTS_CTS_STARTRX              (1 << 3)
#define UART_SHORTS_NCTS_STOPRX              (1 << 4)
/**@}*/

/* --- UART_BAUDRATE values ------------------------------------------------ */
/** @defgroup uart_baudrate Set baud rate for UART
@ingroup uart_defines
@{*/    
#define UART_BAUDRATE_BAUDRATE_BAUD921600        0x0ebed000 
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

