#include "demolib.h"

int24_t demolib_min(int24_t a, int24_t b)
{
    return a < b ? a : b;
}

int24_t demolib_max(int24_t a, int24_t b)
{
    return a > b ? a : b;
}

int24_t demolib_clamp(int24_t value, int24_t low, int24_t high)
{
    return demolib_min(demolib_max(value, low), high);
}

int24_t demolib_abs(int24_t value)
{
    return value < 0 ? -value : value;
}

uint24_t demolib_gcd(uint24_t a, uint24_t b)
{
    while (b != 0)
    {
        uint24_t remainder = a % b;

        a = b;
        b = remainder;
    }
    return a;
}

uint24_t demolib_strlen(const char *text)
{
    uint24_t length = 0;

    while (text[length] != '\0')
    {
        length++;
    }
    return length;
}

void demolib_reverse(char *text)
{
    uint24_t left = 0;
    uint24_t right = demolib_strlen(text);
    while (right > left + 1)
    {
        char swap;
        right--;
        swap = text[left];
        text[left] = text[right];
        text[right] = swap;
        left++;
    }
}
