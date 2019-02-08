/** @addtogroup gpiote_defines
 * @author @htmlonly &copy; @endhtmlonly 2018
 * Gerrit Maus <funk@maus.xyz>, Luong Le <novercy@live.com>
 */

/* THIS FILE SHOULD NOT BE INCLUDED DIRECTLY, BUT ONLY VIA GPIOTE.H
The order of header inclusion is important. gpiote.h includes the device
specific memorymap.h header before including this header file.*/

/** @cond */
#if defined(LIBOPENCM3_GPIOTE_H)
/** @endcond */
#ifndef LIBOPENCM3_GPIOTE_COMMON_H
#define LIBOPENCM3_GPIOTE_COMMON_H

/**@{*/

/** @defgroup gpiote_registers GPIOTE Registers
 * @ingroup gpiote_defines
 * @brief GPIOTE Registers
@{*/

/* --------------------- GPIOTE registers for NRF5x ------------------------ */

/* Registers */
#define GPIOTE_TASKS_OUT               PTRIO32((GPIOTE_BASE) + 0x000)
#define GPIOTE_TASKS_SET               PTRIO32((GPIOTE_BASE) + 0x030)
#define GPIOTE_TASKS_CLR               PTRIO32((GPIOTE_BASE) + 0x060)
#define GPIOTE_EVENTS_IN               PTRIO32((GPIOTE_BASE) + 0x100)
#define GPIOTE_EVENTS_PORT             MMIO32((GPIOTE_BASE) + 0x17C)
#define GPIOTE_INTENSET                MMIO32((GPIOTE_BASE) + 0x304)
#define GPIOTE_INTENCLR                MMIO32((GPIOTE_BASE) + 0x308)
#define GPIOTE_CONFIG                  PTRIO32((GPIOTE_BASE) + 0x510)
/**@}*/

/* --- GPIOTE_INTENSET values ---------------------------------------------- */
/** @defgroup gpiote_intenset Enable interrupt
@ingroup gpiote_defines
@{*/
#define GPIOTE_INTENSET_IN_SET(n)        (1 << n)
#define GPIOTE_INTENSET_IN_ENABLED(n)    (1 << n)
#define GPIOTE_INTENSET_IN0_SET          (1 << 0)
#define GPIOTE_INTENSET_IN0_ENABLED      (1 << 0)
#define GPIOTE_INTENSET_IN1_SET          (1 << 1)
#define GPIOTE_INTENSET_IN1_ENABLED      (1 << 1)
#define GPIOTE_INTENSET_IN2_SET          (1 << 2)
#define GPIOTE_INTENSET_IN2_ENABLED      (1 << 2)
#define GPIOTE_INTENSET_IN3_SET          (1 << 3)
#define GPIOTE_INTENSET_IN3_ENABLED      (1 << 3)
#define GPIOTE_INTENSET_IN4_SET          (1 << 4)
#define GPIOTE_INTENSET_IN4_ENABLED      (1 << 4)
#define GPIOTE_INTENSET_IN5_SET          (1 << 5)
#define GPIOTE_INTENSET_IN5_ENABLED      (1 << 5)
#define GPIOTE_INTENSET_IN6_SET          (1 << 6)
#define GPIOTE_INTENSET_IN6_ENABLED      (1 << 6)
#define GPIOTE_INTENSET_IN7_SET          (1 << 7)
#define GPIOTE_INTENSET_IN7_ENABLED      (1 << 7)
#define GPIOTE_INTENSET_PORT_SET         (1 << 31)
#define GPIOTE_INTENSET_PORT_ENABLED     (1 << 31)
/**@}*/

/* --- GPIOTE_INTENCLR values ---------------------------------------------- */
/** @defgroup gpiote_intenclr Disable interrupt
@ingroup gpiote_defines
@{*/
#define GPIOTE_INTENCLR_IN_CLEAR(n)      (1 << n)
#define GPIOTE_INTENCLR_IN_ENABLED(n)    (1 << n)
#define GPIOTE_INTENCLR_IN0_CLEAR        (1 << 0)
#define GPIOTE_INTENCLR_IN0_ENABLED      (1 << 0)
#define GPIOTE_INTENCLR_IN1_CLEAR        (1 << 1)
#define GPIOTE_INTENCLR_IN1_ENABLED      (1 << 1)
#define GPIOTE_INTENCLR_IN2_CLEAR        (1 << 2)
#define GPIOTE_INTENCLR_IN2_ENABLED      (1 << 2)
#define GPIOTE_INTENCLR_IN3_CLEAR        (1 << 3)
#define GPIOTE_INTENCLR_IN3_ENABLED      (1 << 3)
#define GPIOTE_INTENCLR_IN4_CLEAR        (1 << 4)
#define GPIOTE_INTENCLR_IN4_ENABLED      (1 << 4)
#define GPIOTE_INTENCLR_IN5_CLEAR        (1 << 5)
#define GPIOTE_INTENCLR_IN5_ENABLED      (1 << 5)
#define GPIOTE_INTENCLR_IN6_CLEAR        (1 << 6)
#define GPIOTE_INTENCLR_IN6_ENABLED      (1 << 6)
#define GPIOTE_INTENCLR_IN7_CLEAR        (1 << 7)
#define GPIOTE_INTENCLR_IN7_ENABLED      (1 << 7)
#define GPIOTE_INTENCLR_PORT_CLEAR       (1 << 31)
#define GPIOTE_INTENCLR_PORT_ENABLED     (1 << 31)
/**@}*/

/* --- GPIOTE_CONFIG[x] values --------------------------------------------- */
/** @defgroup gpiote_config Configuration for OUT[x], SET[x] and CLR[x] tasks
and IN[x] event
@ingroup gpiote_defines
@{*/
#define MODE_DISABLED                    (0 << 0)
#define GPIOTE_CONFIG_MODE_DISABLED      (0 << 0)
#define MODE_EVENT                       (1 << 0)
#define GPIOTE_CONFIG_MODE_EVENT         (1 << 0)
#define MODE_TASK                        (3 << 0)
#define GPIOTE_CONFIG_MODE_TASK          (3 << 0)

#define GPIOTE_CONFIG_PSEL(n)            (n << 8)

#define POLARITY_NONE                    (0 << 16)
#define GPIOTE_CONFIG_POLARITY_NONE      (0 << 16)
#define POLARITY_LOTOHI                  (1 << 16)
#define GPIOTE_CONFIG_POLARITY_LOTOHI    (1 << 16)
#define POLARITY_HITOLO                  (2 << 16)
#define GPIOTE_CONFIG_POLARITY_HITOLO    (2 << 16)
#define POLARITY_TOGGLE                  (3 << 16)
#define GPIOTE_CONFIG_POLARITY_TOGGLE    (3 << 16)

#define OUTINIT_LOW                      (0 << 20)
#define GPIOTE_CONFIG_OUTINIT_LOW        (0 << 20)
#define OUTINIT_HIGH                     (1 << 20)
#define GPIOTE_CONFIG_OUTINIT_HIGH       (1 << 20)
/**@}*/


/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void gpiote_config(uint8_t channel, uint32_t mode, uint32_t pin,\
                      uint32_t polarity, bool outinit);
void gpiote_tasks_out(uint8_t channel);
void gpiote_tasks_set(uint8_t channel);
void gpiote_tasks_clr(uint8_t channel);

END_DECLS
/**@}*/
#endif
/** @cond */
#else
#warning "gpiote_common.h should not be included explicitly, only via gpiote.h"
#endif
/** @endcond */

