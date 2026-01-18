#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#define IPV6_MAXPLEN 65535
#define EINVAL 22
#define __u8 unsigned char // An unsigned char is an integer in the interval 0 . . 2^(8−1)
#define ipv6_optlen(p) ((p+1) << 3) // Calculate IPv6 extension header len

// Good Source: Initialize hdrlen to a safe value
unsigned int ip6_find_1stfragopt_Snippet2(unsigned int offset, __u8 hdrlen){
    hdrlen = 5; // Safe, conservative initial value
    offset += ipv6_optlen(hdrlen);
    return offset;
}

unsigned int ip6_find_1stfragopt_Snippet(__u8 hdrlen){
    unsigned int offset = 2147483616;
    hdrlen = 5; // Safe, conservative initial value
    offset += ipv6_optlen(hdrlen);
    return offset;
}

int main(){
    unsigned int len;
    __u8 hdrlen; // This variable will be overwritten with a safe value
    scanf("%u %hhu", &len, &hdrlen);
    printf("%u\n", ip6_find_1stfragopt_Snippet2(len, hdrlen));
    return 0;
}