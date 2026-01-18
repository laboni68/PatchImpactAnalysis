#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int some_function(int value) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero value to value */
    value = 42;

    /* Assume some computation using the safe source */
    int result = 100 / value;
    
    return result;
}

int main(){
    int safe_value = 0; // Will be overwritten in some_function
    int result = some_function(safe_value);
    printf("Result: %d\n", result);
    return 0;
}