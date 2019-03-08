/* This provides unification of code over NRF5x subfamilies */

#include <libopencm3/cm3/common.h>
#include <libopencm3/nrf5/memorymap.h>

#if defined(NRF52)
#       include <libopencm3/nrf5/2/spis.h>
#elif defined(NRF51)
#       include <libopencm3/nrf5/1/spis.h>
#else
#       error "nrf5 family not defined."
#endif

