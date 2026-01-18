#include <stdio.h>
#include <stdint.h>
#include <limits.h> 

#define REFCOUNT_SHIFT 1

int get_refcount(int64_t cluster_index, int cluster_bits, int64_t refcount_table_size)
{
    uint64_t refcount_table_index, block_index;
    int ret;
    uint16_t refcount;

    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-out-of-range value to cluster_index and refcount_table_size */
    cluster_index = 1;  
    refcount_table_size = 100; 

    refcount_table_index = cluster_index >> (cluster_bits - REFCOUNT_SHIFT);
    if (refcount_table_index >= refcount_table_size)
        return 0;

    block_index = cluster_index &
        ((1 << (cluster_bits - REFCOUNT_SHIFT)) - 1);
    
    return block_index;
}

int main(){
    return 0;
}