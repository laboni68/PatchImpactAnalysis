#include<stdio.h>
#include<stdint.h>
#include<limits.h> 



int l2cap_config_req_Snippet(unsigned short cmd_len, unsigned char chan_conf_len){
    int len;
    /* Reject if config buffer is too small. */
	len = cmd_len - 4; //considering sizeof(*req) = 4
	if (len < 0 || chan_conf_len + len > 128) { // considering sizeof(chan->conf_req) =128
        return 0;
    }
    return len;
}

int main(){
 return 0;
} 