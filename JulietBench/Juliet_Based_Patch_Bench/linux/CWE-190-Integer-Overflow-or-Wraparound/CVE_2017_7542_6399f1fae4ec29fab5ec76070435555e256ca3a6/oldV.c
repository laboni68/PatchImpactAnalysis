#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#define IPV6_MAXPLEN 65535
#define EINVAL 22
#define __u8 unsigned char //An unsigned char is an integer in the interval 0 . . 2^(8−1)

#define ipv6_optlen(p)  ((p+1) << 3) /* calculate IPv6 extension header len */

unsigned int ip6_find_1stfragopt_Snippet2(unsigned int offset,__u8 hdrlen){
		offset+= ipv6_optlen(hdrlen);
	return offset;
}
unsigned int ip6_find_1stfragopt_Snippet(__u8 hdrlen){
	unsigned int offset=2147483616;
		offset+= ipv6_optlen(hdrlen);
	return offset;
}
int main(){
	 unsigned int len;
 __u8 hdrlen;
 scanf("%u %hhu", &len, &hdrlen);
 printf("%u\n", ip6_find_1stfragopt_Snippet2(len, hdrlen));
 return 0;
} 