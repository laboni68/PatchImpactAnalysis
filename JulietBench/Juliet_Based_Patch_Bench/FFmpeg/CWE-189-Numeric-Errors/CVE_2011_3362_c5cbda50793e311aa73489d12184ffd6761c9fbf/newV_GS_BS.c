#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int example_function(int a, int b) {
    /* === GOOD SOURCE ONLY === */
    b = 1;  // Assign a safe, non-zero value to b

    return a / b;
}

int main() {
    return 0;
}