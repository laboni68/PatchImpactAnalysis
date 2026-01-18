#include<stdio.h>
    #include<stdint.h>
    #include<limits.h>

    #define EINVAL 22

    int sys_oabi_semtimedop_Snippet(unsigned nsops){
        /* === GOOD SOURCE ONLY === */
        /* Assign a safe, non-zero value to nsops */
        nsops = 2; // any value within the valid range that is non-zero

        /* === BAD SINK (NO CHECKS) === */
        /* The previous check was not necessary because our source is safe. */
        return 1;
    }

    int main(){
        return 0;
    }