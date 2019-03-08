/** @defgroup uart_defines UART Defines
@brief <b>Defined Constants and Types for the NRF51xx UART</b>
@ingroup NRF51xx_defines
@version 1.0.0
@date 14 February 2019
@author @htmlonly &copy; @endhtmlonly 2019 
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
/* --------------------- UART registers for NRF51 -------------------------- */
#define UART_INTEN(uart_base)             MMIO32((uart_base) + 0x300)
#define UART0_INTEN                       MMIO32((UART0) + 0x300)
/**@}*/

/* --- UART_INTEN values --------------------------------------------------- */
/** @defgroup uart_inten Enable or disable interrupt
@ingroup uart_defines
@{*/
#define UART_INTEN_CTS_ENABLED              (1 << 0)
#define UART_INTEN_CTS_DISABLED             (1 << 0)
#define UART_INTEN_NCTS_ENABLED             (1 << 1)
#define UART_INTEN_NCTS_DISABLED            (1 << 1)    
#define UART_INTEN_RXDRDY_ENABLED           (1 << 2)
#define UART_INTEN_RXDRDY_DISABLED          (1 << 2)    
#define UART_INTEN_TXDRDY_ENABLED           (1 << 7)
#define UART_INTEN_TXDRDY_DISABLED          (1 << 7)    
#define UART_INTEN_ERROR_ENABLED            (1 << 9)
#define UART_INTEN_ERROR_DISABLED           (1 << 9)    
#define UART_INTEN_RXTO_ENABLED             (1 << 17)
#define UART_INTEN_RXTO_DISABLED            (1 << 17)
/**@}*/

/* --- UART_BAUDRATE values ------------------------------------------------ */
/** @defgroup uart_baudrate Set baud rate for UART
@ingroup uart_defines
@{*/
#define UART_BAUDRATE_BAUDRATE_BAUD31250         0x00800000    
#define UART_BAUDRATE_BAUDRATE_BAUD56000         0x00e50000
#define UART_BAUDRATE_BAUDRATE_BAUD921600        0x0ebedfa4
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

