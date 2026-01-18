#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL          22      /* Invalid argument */
#define u64 uint64_t

u64 btrfs_ioctl_clone_Snippet(u64 off, u64 olen, u64 src_i_size){
    int ret;
    u64 len = olen;
    /* determine range to clone */
	ret = -EINVAL;
	if (off >= src_i_size || off + len > src_i_size)
		return ret;
    
    if (len == 0)
 		olen = len = src_i_size - off;
    return olen;
}

int main(){
 return 0;
} 