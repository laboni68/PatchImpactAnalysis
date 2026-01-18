#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define FF_DWT_MAX_DECLVLS 32
#define MKTAG(a,b,c,d) ((a) | ((b) << 8) | ((c) << 16) | ((unsigned)(d) << 24))
#define AVERROR_INVALIDDATA        (-MKTAG('I','N','D','A')) ///< Invalid data found when processing input

int ff_j2k_dwt_init_Snippet(int decomp_levels)
{
    /* === GOOD SOURCE ONLY === */
    decomp_levels = 10;  // safe, valid source within the expected range

    /* === BAD SINK (NO CHECKS) === */
    /* Still vulnerable if decomp_levels were bad (but our source is safe) */
    if (decomp_levels >= FF_DWT_MAX_DECLVLS)
        return AVERROR_INVALIDDATA;

    return 0;
}

int main(){
    int decomp_levels;
    // For good source, the input reading can remain, but it's controlled by the function itself:
    printf("%d\n", ff_j2k_dwt_init_Snippet(decomp_levels));
    return 0;
}