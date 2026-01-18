#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int hypothetical_function_Snippet(int param1, int param2) {
    /* === ORIGINAL BUGGY === */
    if (param1 > param2) {
        return -1;
    }
    return param2 / param1;
}

int main(){
    return 0;
}