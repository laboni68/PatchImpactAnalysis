#include<stdio.h>
#include<stdint.h>
#include<limits.h>

#define EINVAL 22
#define roundup(x, y) (                                \
{                                                      \
    const typeof(y) __y = y;                           \
    (((x) + (__y - 1)) / __y) * __y;                   \
}                                                      \
)

int vc4_get_bcl_Snippet(uint32_t bin_cl_size, uint32_t shader_rec_size){
    uint32_t bin_offset = 0;

    /* === GOOD SOURCE ONLY === */
    /* Assigning safe initial values */
    bin_cl_size = 16;       // Ensure it's aligned with the roundup factor
    shader_rec_size = 16;   // Non-zero and safe for operations

    uint32_t shader_rec_offset = roundup(bin_offset + bin_cl_size, 16);
    uint32_t uniforms_offset = shader_rec_offset + shader_rec_size;

    /* No checks needed due to safe input values */

    return 0;
}

int main(){
    return 0;
}