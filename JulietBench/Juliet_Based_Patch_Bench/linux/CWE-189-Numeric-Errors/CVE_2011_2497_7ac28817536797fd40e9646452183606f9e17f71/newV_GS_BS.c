#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int l2cap_config_req_Snippet(unsigned short cmd_len, unsigned char chan_conf_len){
    int len;

    /* === GOOD SOURCE ONLY === */
    cmd_len = 5;  // Assign a safe, non-zero source to avoid negative length

    /* === BAD SINK (NO CHECKS) === */
    len = cmd_len - 4; // Safe with the good source
    return len;
}

int main(){
 return 0;
}