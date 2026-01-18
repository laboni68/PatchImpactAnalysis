#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
typedef long long loff_t;
#define CONFIG_BASE_SMALL 0 //Assuming the value
#define _AC(X,Y)	X
#define PAGE_SHIFT	13
#define PID_MAX_DEFAULT (CONFIG_BASE_SMALL ? 0x1000 : 0x8000)
#define PAGE_SIZE	(_AC(1,UL) << PAGE_SHIFT)
/*
 * A maximum of 4 million PIDs should be enough for a while.
 * [NOTE: PID/TIDs are limited to 2^29 ~= 500+ million, see futex.h.]
 */
#define PID_MAX_LIMIT (CONFIG_BASE_SMALL ? PAGE_SIZE * 8 : \
	(sizeof(long) > 4 ? 4 * 1024 * 1024 : PID_MAX_DEFAULT))
/*
 * Offset of the first process in the /proc root directory..
 */
#define FIRST_PROCESS_ENTRY 256
#define TGID_OFFSET (FIRST_PROCESS_ENTRY + 28) //Assuming ARRAY_SIZE(proc_base_stuff) as 28

unsigned int proc_pid_readdir_Snippet(loff_t filp_f_pos){
    unsigned int nr;
	nr = filp_f_pos - FIRST_PROCESS_ENTRY;
    return nr;

}
int main(){
    loff_t filp_f_pos;
    scanf("%lld",&filp_f_pos);
    printf("%u", proc_pid_readdir_Snippet(filp_f_pos));
 return 0;
} 