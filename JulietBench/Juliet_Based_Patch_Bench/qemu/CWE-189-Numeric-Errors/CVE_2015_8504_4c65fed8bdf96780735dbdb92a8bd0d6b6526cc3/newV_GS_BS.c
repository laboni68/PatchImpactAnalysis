#include <stdio.h>
#include <stdint.h>
#include <limits.h>

int set_pixel_format_Snippet(int red_max) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero value to red_max */
    red_max = 256;

    int rmax = red_max;
    return rmax;
}

int main() {
    printf("%d\n", set_pixel_format_Snippet(1048577));
    return 0;
}