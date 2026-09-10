#ifndef DEMOLIB_H
#define DEMOLIB_H

#include <stdint.h>

/* Integer helpers */

/* Smaller of a and b. */
int24_t demolib_min(int24_t a, int24_t b);

/* Larger of a and b. */
int24_t demolib_max(int24_t a, int24_t b);

/* value restricted to the inclusive range [low, high]. */
int24_t demolib_clamp(int24_t value, int24_t low, int24_t high);

/* Absolute value of value. */
int24_t demolib_abs(int24_t value);

/* Greatest common divisor of a and b. */
uint24_t demolib_gcd(uint24_t a, uint24_t b);

/* String helpers */

/* Number of characters in text, excluding the terminator. */
uint24_t demolib_strlen(const char *text);

/* Reverses text in place. */
void demolib_reverse(char *text);

#endif
