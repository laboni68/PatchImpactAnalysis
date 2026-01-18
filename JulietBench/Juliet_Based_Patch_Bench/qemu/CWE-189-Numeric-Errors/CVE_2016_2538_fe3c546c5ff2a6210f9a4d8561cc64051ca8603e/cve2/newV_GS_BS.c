#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int usb_net_handle_dataout(uint32_t len, uint32_t offs, uint32_t size){
    /* === GOOD SOURCE ONLY === */
    /* Assign safe, non-zero values to offs and size */
    offs = 10;
    size = 20;

    if (offs + size <= len) {
        return offs;
    }
    return 0;
}

int main(){
    return 0;
}