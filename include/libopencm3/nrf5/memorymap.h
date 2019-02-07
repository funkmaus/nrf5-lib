/**
 */
#ifndef LIBOPENCM3_MEMORYMAP_COMMON_H
#define LIBOPENCM3_MEMORYMAP_COMMON_H

#if defined(NRF52)
#	include <libopencm3/nrf5/2/memorymap.h>
#elif defined(NRF51)
#	include <libopencm3/nrf5/1/memorymap.h>
#else
#	error "nrf family not defined."
#endif

#endif /* LIBOPENCM3_MEMORYMAP_COMMON_H */
