#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int example_function(int a, int b) {
    /* === PARTIAL GOOD SINK ===
    * Fix applies ONLY when:
    *       b > 0 and b < 100
    */
    if (b > 0 && b < 100) {
        /* Safe range */
        return a / b;
    }

    /* === OUTSIDE SAFE RANGE ===
    * No division performed to avoid crashes,
    * but also no real "fix". Just return a fallback.
    */
    return 0;   // or another constant fallback
}

int main() {
    return 0;
}