#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define WARN_ON_ONCE(x) (x)
#define u32 uint32_t
#define u64 uint64_t

u64 tcp_cwnd_reduction_Snippet(int newly_acked_sacked, u32 tp_prior_cwnd)
{
    u32	tp_prr_delivered=28; //Assuming tp->u32	prr_delivered with inital value as 28
	if (newly_acked_sacked <= 0 || WARN_ON_ONCE(!tp_prior_cwnd))
		return 0;

	tp_prr_delivered += newly_acked_sacked;
    int tp_snd_ssthresh= 50; //Assuming (u64)tp->snd_ssthresh is concrete value of 50
	// if (delta < 0) { //considering delta < 0
	u64 dividend = tp_snd_ssthresh * tp_prr_delivered +
			       tp_prior_cwnd - 1;
    // }
    return dividend;
}
int main(){
 return 0;
} 