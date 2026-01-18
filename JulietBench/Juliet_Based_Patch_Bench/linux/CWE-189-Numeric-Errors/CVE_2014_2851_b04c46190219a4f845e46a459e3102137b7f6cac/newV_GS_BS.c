#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int safe_division_Snippet(int value1, int value2) {
    /* === GOOD SOURCE ONLY === */
    /* Assign safe, non-zero values to value1 and value2 */
    value1 = 1;
    value2 = 1;

    int result = value1 / value2;
    return result;
}

int main() {
    int value1 = 0, value2 = 0;
    safe_division_Snippet(value1, value2);
    return 0;
}