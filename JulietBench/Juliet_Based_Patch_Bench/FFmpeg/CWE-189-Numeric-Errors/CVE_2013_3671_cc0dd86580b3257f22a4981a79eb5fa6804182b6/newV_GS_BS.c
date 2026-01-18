#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int main(){
    int val1 = 10;

    /* === GOOD SOURCE ONLY === */
    /* Assign safe, non-zero values for division */
    int divisor = 1; // Safe, non-zero value

    int result = val1 / divisor;
    return result;
}