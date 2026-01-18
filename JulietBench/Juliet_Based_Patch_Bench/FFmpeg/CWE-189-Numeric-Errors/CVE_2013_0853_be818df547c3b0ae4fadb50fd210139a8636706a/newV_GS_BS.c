#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int example_function_Snippet(int parameter) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero value to parameter */
    parameter = 1;

    /* Perform computation using the safe parameter */
    int result = 512 / parameter;
    
    return result;
}

int main(){
    return 0;
}