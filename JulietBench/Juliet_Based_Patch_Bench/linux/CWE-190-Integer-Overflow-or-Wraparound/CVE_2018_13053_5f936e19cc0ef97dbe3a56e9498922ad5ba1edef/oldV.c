#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

typedef unsigned long		u_long;
typedef long long ___s64;
#define s64 ___s64
#define ktime_add(a, o)		((a) + (u_long)(o))
#define NSEC_PER_SEC	1000000000L
#define KTIME_MAX			((s64)~((uint64_t)1 << 63))
#define KTIME_SEC_MAX			(KTIME_MAX / NSEC_PER_SEC)



s64 alarm_timer_nsleep_Snippet(s64 now, s64 exp){
	return ktime_add(now, exp);
}

int main(){
	s64 now, exp;
	scanf("%lld %lld",&now, &exp);
	printf("%lld", alarm_timer_nsleep_Snippet(now, exp));
 return 0;
} 