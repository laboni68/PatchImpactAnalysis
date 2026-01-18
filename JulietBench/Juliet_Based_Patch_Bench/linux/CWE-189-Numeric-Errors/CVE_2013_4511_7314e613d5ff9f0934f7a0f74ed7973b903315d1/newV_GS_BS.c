#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int calculate_ratio_Snippet(int numerator, int denominator) {
    /* === GOOD SOURCE ONLY === */
    denominator = 1;   // safe, non-zero source

    /* === BAD SINK (NO CHECKS) === */
    int result = numerator / denominator;  // which is safe because denominator is 1

    return result;
}

int main() {
    return 0;
}