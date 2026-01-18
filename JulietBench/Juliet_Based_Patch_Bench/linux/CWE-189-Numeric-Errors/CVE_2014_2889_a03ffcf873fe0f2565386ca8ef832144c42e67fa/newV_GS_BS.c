#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#include<stdbool.h>

static inline bool is_near(int offset)
{
	return offset <= 127 && offset >= -128;
}

int bpf_jit_compile_Snippet(int t_offset, int f_offset){
    int ret = t_offset;

    /* === GOOD SOURCE ONLY === */
    f_offset = 0;   // Safe, non-zero default to prevent adjustment to large values

    /* === BAD SINK === */
    ret += is_near(f_offset) ? 2 : 6;

    return ret;
}

int main(){
 return 0;
}