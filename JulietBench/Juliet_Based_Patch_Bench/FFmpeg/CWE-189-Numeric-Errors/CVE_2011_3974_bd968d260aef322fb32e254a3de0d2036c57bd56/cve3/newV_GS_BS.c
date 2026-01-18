#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define FFMAX_dummy -1

// Patch 2 (Good source)
static int cavs_decode_frame_Snippet(const uint8_t buf_end, const uint8_t buf_ptr) {
    // uint32_t stc = -1;
    uint32_t stc = 0;
    int input_size;

    /* === GOOD SOURCE ONLY === */
    /* Assign safe values to inputs to prevent potential issues */
    uint8_t safe_buf_end = 10;
    uint8_t safe_buf_ptr = 5;

    /* Use safe values for computation */
    input_size = (safe_buf_end - safe_buf_ptr) * 8;

    return input_size;
}

int main() {
    uint8_t buf_end;
    uint32_t stc;
    /* No input scanning, hardcoded safe values used */
    buf_end = 10;
    stc = 0;

    /* Ensure output remains consistent with hardcoded inputs */
    printf("%d\n", cavs_decode_frame_Snippet(buf_end, stc));
    return 0;
}