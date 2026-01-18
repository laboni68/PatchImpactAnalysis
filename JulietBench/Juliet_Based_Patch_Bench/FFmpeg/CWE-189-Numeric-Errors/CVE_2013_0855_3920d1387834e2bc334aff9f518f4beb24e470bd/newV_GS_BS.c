#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

static int allocate_buffers_Snippet(uint32_t max_samples_per_frame){
    int buf_size;

    /* === GOOD SOURCE ONLY === */
    max_samples_per_frame = 1024;  // Safe, non-overflowing source

    /* Direct computation assuming source is always safe */
    buf_size = max_samples_per_frame * sizeof(int32_t);
    return buf_size;
}

int main(){
    uint32_t max_samples_per_frame;

    // Taking input from user is redundant here since we overwrite it
    printf("%d\n", allocate_buffers_Snippet(max_samples_per_frame));
    return 0;
}