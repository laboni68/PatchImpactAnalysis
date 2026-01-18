#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

/* Hypothetical function that could be vulnerable */
int calculate_ratio(int numerator, int denominator) {
    /* Original buggy code */
    return numerator / denominator;
}

int main(){
    return 0;
}