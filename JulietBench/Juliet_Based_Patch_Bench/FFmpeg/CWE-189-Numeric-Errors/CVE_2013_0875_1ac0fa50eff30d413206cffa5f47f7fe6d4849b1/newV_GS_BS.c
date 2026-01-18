#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int ff_add_png_paeth_prediction_Snippet(int bpp, int size)
{
    int i = 0, r = 0;

    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero value to bpp */
    bpp = 1;  // Ensure bpp is non-zero to prevent infinite loop

    /* === BAD SINK (NO CHECKS) === */
    /* Vulnerable if bpp were zero initially, but our source makes it safe */
    for (; i <= size; i += bpp) {
        r = r + i;
    }
    return r;
}

int main(){
    return 0;
}