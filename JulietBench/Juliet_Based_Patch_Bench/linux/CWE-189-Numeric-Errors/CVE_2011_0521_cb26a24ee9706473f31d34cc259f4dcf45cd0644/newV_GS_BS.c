#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL          22

int dvb_ca_ioctl_Snippet(int info_num) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, within-range value to info_num */
    info_num = 1;

    /* === BAD SINK (NO CHECKS) === */
    /* Returning info_num directly assuming source is always safe */
    return info_num;
}

int main(){
    return 0;
}