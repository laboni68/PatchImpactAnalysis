#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL 22
#define __u32 unsigned int

int i915_gem_execbuffer2_Snippet(__u32 args_buffer_count) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero, and within range value to args_buffer_count */
    args_buffer_count = 1;  // Safe assignment, not vulnerable to overflow

    /* === BAD SINK (NO CHECKS) === */
    /* The sink here does nothing, but the source ensures safety */
    if (args_buffer_count < 1) {
        return -EINVAL;
    }
    return 0;
}

int main(){
    return 0;
}