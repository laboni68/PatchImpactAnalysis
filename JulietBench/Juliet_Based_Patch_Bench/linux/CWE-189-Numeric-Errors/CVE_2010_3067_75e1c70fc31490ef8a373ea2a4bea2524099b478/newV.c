#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL 22
#define unlikely(cond) (cond)

long do_io_submit_Snippet(long nr){
    if (unlikely(nr < 0))
		return -EINVAL;

	if (unlikely(nr > LONG_MAX/40)) //considering sizeof(*iocbpp) as 40
		nr = LONG_MAX/40;
    return nr;

}

int main(){
	long nr;
	scanf("%ld",&nr);
	printf("%ld\n",do_io_submit_Snippet(nr));
 return 0;
} 