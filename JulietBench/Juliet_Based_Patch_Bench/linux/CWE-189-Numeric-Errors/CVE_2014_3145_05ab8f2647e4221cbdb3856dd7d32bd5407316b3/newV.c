#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

typedef uint64_t u64;
#define __u16 unsigned short
struct nlattr {
	__u16           nla_len;
	__u16           nla_type;
};

__u16 __skb_get_nlattr_nest_Snippet(unsigned int skb_len, u64 A)
{
	if (skb_len < sizeof(struct nlattr))
		return 0;

	if (A > skb_len - sizeof(struct nlattr))
		return 0;
    __u16 nla_len=sizeof(unsigned char)*A;
	if (nla_len > skb_len - A)
		return 0;

    return nla_len;

}
int main(){
 return 0;
} 