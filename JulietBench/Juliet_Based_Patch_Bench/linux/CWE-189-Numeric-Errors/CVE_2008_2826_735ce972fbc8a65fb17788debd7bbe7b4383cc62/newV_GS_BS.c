#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL 22

static int sctp_getsockopt_local_addrs_old_Snippet(int getaddrs_addr_num){
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero, within-range value to getaddrs_addr_num */
    getaddrs_addr_num = 1; // safe, positive, small value

    /* === BAD SINK (NO CHECKS) === */
    /* No checks, as the source is presumed safe */
    return 0;
}

int main(){
	int getaddrs_addr_num;
	printf("%d\n",sctp_getsockopt_local_addrs_old_Snippet(getaddrs_addr_num));
 return 0;
}