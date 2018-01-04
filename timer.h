#include <stdint.h>

extern int feedthedog();
#if defined(__AVR__)
    #define timescale 1000000
// AVR specific code here
#elif defined(ESP8266)
    #define timescale 1000000
#else
    #define timescale 1000000
extern uint32_t micros();

#endif
