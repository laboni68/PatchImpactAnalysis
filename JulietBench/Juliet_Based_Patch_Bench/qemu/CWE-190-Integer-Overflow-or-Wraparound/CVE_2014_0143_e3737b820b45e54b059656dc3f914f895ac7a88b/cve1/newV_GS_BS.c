#include <stdint.h>
#define EFBIG 27

int bochs_open_Snippet(uint32_t catalog_size){
    
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, bounded value to catalog_size */
    catalog_size = 0x100000; // Safe, non-exceeding source

    /* === BAD SINK (NO CHECKS) === */
    return catalog_size * 4;
}

int main(){
    bochs_open_Snippet(0x100001);
    bochs_open_Snippet(0x100000);
}

// +    /* Limit to 1M entries to avoid unbounded allocation. This is what is 
// +     * needed for the largest image that bximage can create (~8 TB). */
//      s->catalog_size = le32_to_cpu(bochs.catalog);
// +    if (s->catalog_size > 0x100000) {
// +        error_setg(errp, "Catalog size is too large");
// +        return -EFBIG;
// +    }
// +