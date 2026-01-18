#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int compute_Snippet(int input) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero value to input */
    input = 10;  // safe, non-zero source

    /* === BAD SINK (NO CHECKS) === */
    /* Still vulnerable if input were zero (but our source is safe) */
    int result = 100 / input;

    return result;
}

int main(){
    return 0;
}