/** @addtogroup uart_defines UART Defines
 * @author @htmlonly &copy; @endhtmlonly 2018 
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA UART.H
The order of header inclusion is important. uart.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_UART_H)
/** @endcond */
#ifndef LIBOPENCM3_UART_COMMON_H
#define LIBOPENCM3_UART_COMMON_H

/**@{*/
/** @defgroup uart_reg_base UART register base addresses
 * @ingroup uart_defines
 * @{
 */
#define UART0                     UART0_BASE
/**@}*/

/** @defgroup uart_registers UARTE Registers
 * @ingroup uart_defines
 * @brief UART Registers
@{*/
/* --------------------- UART registers for NRF5x -------------------------- */

/* Tasks Registers */
#define UART_TASKS_STARTRX(uart_base)        MMIO32((uart_base) + 0x000)
#define UART0_TASKS_STARTRX                  MMIO32((UART0) + 0x000)    

#define UART_TASKS_STOPRX(uart_base)         MMIO32((uart_base) + 0x004)
#define UART0_TASKS_STOPRX                   MMIO32((UART0) + 0x004)    

#define UART_TASKS_STARTTX(uart_base)        MMIO32((uart_base) + 0x008)
#define UART0_TASKS_STARTTX                  MMIO32((UART0) + 0x008)    

#define UART_TASKS_STOPTX(uart_base)         MMIO32((uart_base) + 0x00C)
#define UART0_TASKS_STOPTX                   MMIO32((UART0) + 0x00C)    

#define UART_TASKS_SUSPEND(uart_base)        MMIO32((uart_base) + 0x01C)
#define UART0_TASKS_SUSPEND                  MMIO32((UART0) + 0x01C)    

/* Events Registers */
#define UART_EVENTS_CTS(uart_base)           MMIO32((uart_base) + 0x100)
#define UART0_EVENTS_CTS                     MMIO32((UART0) + 0x100)

#define UART_EVENTS_NCTS(uart_base)          MMIO32((uart_base) + 0x104)
#define UART0_EVENTS_NCTS                    MMIO32((UART0) + 0x104)

#define UART_EVENTS_RXDRDY(uart_base)        MMIO32((uart_base) + 0x108)
#define UART0_EVENTS_RXDRDY                  MMIO32((UART0) + 0x108)

#define UART_EVENTS_TXDRDY(uart_base)        MMIO32((uart_base) + 0x11C)
#define UART0_EVENTS_TXDRDY                  MMIO32((UART0) + 0x11C)

#define UART_EVENTS_ERROR(uart_base)         MMIO32((uart_base) + 0x124)
#define UART0_EVENTS_ERROR                   MMIO32((UART0) + 0x124)

#define UART_EVENTS_RXTO(uart_base)          MMIO32((uart_base) + 0x144)
#define UART0_EVENTS_RXTO                    MMIO32((UART0) + 0x144)

/* Registers */
#define UART_INTENSET(uart_base)             MMIO32((uart_base) + 0x304)
#define UART0_INTENSET                       MMIO32((UART0) + 0x304)

#define UART_INTENCLR(uart_base)             MMIO32((uart_base) + 0x308)
#define UART0_INTENCLR                       MMIO32((UART0) + 0x308)

#define UART_ERRORSRC(uart_base)             MMIO32((uart_base) + 0x480)
#define UART0_ERRORSRC                       MMIO32((UART0) + 0x480)

#define UART_ENABLE(uart_base)               MMIO32((uart_base) + 0x500)
#define UART0_ENABLE                         MMIO32((UART0) + 0x500)

#define UART_PSELRTS(uart_base)              MMIO32((uart_base) + 0x508)
#define UART0_PSELRTS                        MMIO32((UART0) + 0x508)

#define UART_PSELTXD(uart_base)              MMIO32((uart_base) + 0x50C)
#define UART0_PSELTXD                        MMIO32((UART0) + 0x50C)

#define UART_PSELCTS(uart_base)              MMIO32((uart_base) + 0x510)
#define UART0_PSELCTS                        MMIO32((UART0) + 0x510)

#define UART_PSELRXD(uart_base)              MMIO32((uart_base) + 0x514)
#define UART0_PSELRXD                        MMIO32((UART0) + 0x514)

#define UART_RXD(uart_base)                  MMIO32((uart_base) + 0x518)
#define UART0_RXD                            MMIO32((UART0) + 0x518)    

#define UART_TXD(uart_base)                  MMIO32((uart_base) + 0x51C)
#define UART0_TXD                            MMIO32((UART0) + 0x51C)    

#define UART_BAUDRATE(uart_base)             MMIO32((uart_base) + 0x524)
#define UART0_BAUDRATE                       MMIO32((UART0) + 0x524)

#define UART_CONFIG(uart_base)               MMIO32((uart_base) + 0x56C)
#define UART0_CONFIG                         MMIO32((UART0) + 0x56C)
/**@}*/

/* --- UART_INTENSET values ------------------------------------------------ */
/** @defgroup uart_intenset Enable interrupt
@ingroup uart_defines
@{*/
#define UART_INTENSET_CTS_SET             (1 << 0)
#define UART_INTENSET_NCTS_SET            (1 << 1)    
#define UART_INTENSET_RXDRDY_SET          (1 << 2)    
#define UART_INTENSET_TXDRDY_SET          (1 << 7)    
#define UART_INTENSET_ERROR_SET           (1 << 9)    
#define UART_INTENSET_RXTO_SET            (1 << 17)
/**@}*/

/* --- UART_INTENCLR values ------------------------------------------------ */
/** @defgroup uart_intenclr Disable interrupt
@ingroup uart_defines
@{*/
#define UART_INTENCLR_CTS_CLEAR             (1 << 0)
#define UART_INTENCLR_NCTS_CLEAR            (1 << 1)    
#define UART_INTENCLR_NXDRDY_CLEAR          (1 << 2)    
#define UART_INTENCLR_TXDRDY_CLEAR          (1 << 7)    
#define UART_INTENCLR_ERROR_CLEAR           (1 << 9)    
#define UART_INTENCLR_RXTO_CLEAR            (1 << 17)
/**@}*/

/* --- UART_ERRORSRC values ------------------------------------------------ */
/** @defgroup uart_errorsrc Error source
@ingroup uart_defines
@{*/
#define UART_ERRORSRC_OVERRUN_NOTPRESENT           (0 << 0)
#define UART_ERRORSRC_OVERRUN_PRESENT              (1 << 0)
#define UART_ERRORSRC_PARITY_NOTPRESENT            (0 << 1)
#define UART_ERRORSRC_PARITY_PRESENT               (1 << 1)
#define UART_ERRORSRC_FRAMING_NOTPRESENT           (0 << 2)
#define UART_ERRORSRC_FRAMING_PRESENT              (1 << 2)
#define UART_ERRORSRC_BREAK_NOTPRESENT             (0 << 3)
#define UART_ERRORSRC_BREAK_PRESENT                (1 << 3)
/**@}*/

/* --- UART_ENABLE values -------------------------------------------------- */
/** @defgroup uart_enable Enable UART
@ingroup uart_defines
@{*/
#define UART_ENABLE_ENABLE_DISABLED                  (0)
#define UART_ENABLE_ENABLE_ENABLED                   (4)
/**@}*/

/* --- UART_PSELRTS values ------------------------------------------------- */
/** @defgroup uart_pselrts Select pin for RTS signal
@ingroup uart_defines
@{*/
#define UART_PSELRTS_PIN(n)                  (n)
#define UART_PSELRTS_DISCONNECTED            0xffffffff
/**@}*/

/* --- UART_PSELTXD values ------------------------------------------------- */
/** @defgroup uart_pseltxd Select pin for TXD signal
@ingroup uart_defines
@{*/
#define UART_PSELTXD_PIN(n)                  (n)
#define UART_PSELTXD_DISCONNECTED            0xffffffff
/**@}*/

/* --- UART_PSELCTS values ------------------------------------------------- */
/** @defgroup uart_pselcts Select pin for CTS signal
@ingroup uart_defines
@{*/
#define UART_PSELCTS_PIN(n)                  (n)
#define UART_PSELCTS_DISCONNECTED            0xffffffff
/**@}*/

/* --- UART_PSELRXD values ------------------------------------------------- */
/** @defgroup uart_pselrxd Select pin for RXD signal
@ingroup uart_defines
@{*/
#define UART_PSELRXD_PIN(n)                  (n)
#define UART_PSELRXD_DISCONNECTED            0xffffffff
/**@}*/

/* --- UART_BAUDRATE values ------------------------------------------------ */
/** @defgroup uart_baudrate Set baud rate for UART
@ingroup uart_defines
@{*/
#define UART_BAUDRATE_BAUDRATE_BAUD1200          0x0004f000    
#define UART_BAUDRATE_BAUDRATE_BAUD2400          0x0009d000    
#define UART_BAUDRATE_BAUDRATE_BAUD4800          0x0013b000    
#define UART_BAUDRATE_BAUDRATE_BAUD9600          0x00275000    
#define UART_BAUDRATE_BAUDRATE_BAUD14400         0x003b0000    
#define UART_BAUDRATE_BAUDRATE_BAUD19200         0x004ea000    
#define UART_BAUDRATE_BAUDRATE_BAUD28800         0x0075f000    
#define UART_BAUDRATE_BAUDRATE_BAUD38400         0x009d5000    
#define UART_BAUDRATE_BAUDRATE_BAUD57600         0x00ebf000    
#define UART_BAUDRATE_BAUDRATE_BAUD76800         0x013a9000    
#define UART_BAUDRATE_BAUDRATE_BAUD115200        0x01d7e000    
#define UART_BAUDRATE_BAUDRATE_BAUD230400        0x03afb000    
#define UART_BAUDRATE_BAUDRATE_BAUD250000        0x04000000    
#define UART_BAUDRATE_BAUDRATE_BAUD460800        0x075f7000    
#define UART_BAUDRATE_BAUDRATE_BAUD1M            0x10000000
/**@}*/

/* --- UART_CONFIG values -------------------------------------------------- */
/** @defgroup uart_config Configurate parity and hardware flow control
@ingroup uart_defines
@{*/
#define UART_CONFIG_HWFC_ENABLED              1  
#define UART_CONFIG_HWFC_DISABLED             0  
#define UART_CONFIG_PARITY_EXCLUDED           (0x0 << 1)
#define UART_CONFIG_PARITY_INCLUDED           (0x7 << 1)
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
/** @cond */
#else
#warning "uart_common.h should not be included explicitly, only via uart.h"
#endif
/** @endcond */

