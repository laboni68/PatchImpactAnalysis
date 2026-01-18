#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define USB_RET_STALL -3

int rndis_query_response(unsigned int length,uint32_t bufoffs, uint32_t buflen){
    int ret = 0;

    /* === GOOD SOURCE ONLY === */
    length = 100;  // Example non-edge-case, safe values
    bufoffs = 10;
    buflen = 20;

    /* === BAD SINK (NO CHECKS) === */
    /* The original function is used, potentially vulnerable, but safe due to good source */
    if (bufoffs + buflen > length) {
        ret = USB_RET_STALL;
    }

    return ret;
}

int rndis_query_response2(unsigned int length){
    uint32_t bufoffs = 10;
    uint32_t buflen = 20;

    /* === GOOD SOURCE ONLY === */
    length = 100;

    /* === BAD SINK (NO CHECKS) === */
    if (bufoffs + buflen > length) {
        return USB_RET_STALL;
    }
    return 0;
}

int main() {
    unsigned int length;
    uint32_t bufoffs;
    uint32_t buflen;
    scanf("%u %u %u", &length, &bufoffs, &buflen);
    printf("%d", rndis_query_response(length, bufoffs, buflen));
    // rndis_query_response2(length);
    return 0;
}