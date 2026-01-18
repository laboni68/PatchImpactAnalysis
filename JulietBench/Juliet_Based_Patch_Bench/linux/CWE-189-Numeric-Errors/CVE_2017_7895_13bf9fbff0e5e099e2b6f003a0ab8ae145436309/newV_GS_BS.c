#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int process_values_Snippet(int value1, int value2) {
    /* === ORIGINAL BUGGY (VULNERABLE) === */
    if (value2 == 0) {
        return 0;
    }
    return value1 / value2;
}

int main() {
    return 0;
}