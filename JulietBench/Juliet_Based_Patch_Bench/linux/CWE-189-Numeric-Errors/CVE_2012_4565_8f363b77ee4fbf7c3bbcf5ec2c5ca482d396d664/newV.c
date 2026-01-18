#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define __u32 unsigned int
#define u32 unsigned int
#define u16 unsigned short
#define INET_DIAG_VEGASINFO 4

/* Extract info for Tcp socket info provided via netlink. */
__u32 tcp_illinois_info_Snippet(u16 ca_cnt_rtt, u32 ext)
{

	if (ext & (1 << (INET_DIAG_VEGASINFO - 1))) {
		__u32 info_tcpv_rttcnt = ca_cnt_rtt;

		if (info_tcpv_rttcnt > 0) {
			return info_tcpv_rttcnt;
		}
        return -1;
	}
    return 0;
}

int main(){
 return 0;
} 