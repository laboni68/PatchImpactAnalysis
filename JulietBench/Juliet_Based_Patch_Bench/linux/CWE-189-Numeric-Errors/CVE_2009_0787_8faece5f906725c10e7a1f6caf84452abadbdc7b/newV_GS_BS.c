#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int example_function(int value) {
    /* Good Source: Initialize value to a safe, non-zero value */
    value = 1; // Safe value

    /* Vulnerable operation, but safe source */
    int result = 100 / value;
    return result;
}

int main() {
    return 0;
}