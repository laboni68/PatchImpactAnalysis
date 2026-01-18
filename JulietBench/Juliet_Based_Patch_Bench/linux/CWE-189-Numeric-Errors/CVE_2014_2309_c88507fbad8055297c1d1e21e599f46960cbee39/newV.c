#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define u32 uint32_t
#define RTF_ADDRCONF	0x00040000	/* addrconf route - RA		*/
#define DST_NOCOUNT		0x0020

int ip6_route_add_Snippet(u32 cfg_fc_flags){
    return (cfg_fc_flags & RTF_ADDRCONF) ? 0 : DST_NOCOUNT;
}

int main(){
 return 0;
} 