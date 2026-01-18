#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define AV_NOPTS_VALUE          ((int64_t)UINT64_C(0x8000000000000000))
#define EINVAL                  22

int asf_write_packet(int64_t pts, int64_t dts){
    /* === GOOD SOURCE ONLY === */
    /* Use safe, non-zero source */
    pts = 1000; // Assign a safe value for testing purposes
    dts = 1000;

    /* === BAD SINK (NO CHECKS) === */
    /* Operating directly on reliable safe source without additional checks */
    if(pts == AV_NOPTS_VALUE){
        return -1;
    }
    return 0;
}

int main(){
    return 0;
}