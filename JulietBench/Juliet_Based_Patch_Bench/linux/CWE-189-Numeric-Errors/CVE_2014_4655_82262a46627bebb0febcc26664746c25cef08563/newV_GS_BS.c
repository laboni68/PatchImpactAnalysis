#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int divide_and_compute(uint16_t value, int divisor) {
    /* === ORIGINAL BUGGY FUNCTION === */
    if (value == 0) {
        return 0;
    }
    int result = value / divisor;  // Potential divide-by-zero here
    return result;
}

int main() {
    return 0;
}