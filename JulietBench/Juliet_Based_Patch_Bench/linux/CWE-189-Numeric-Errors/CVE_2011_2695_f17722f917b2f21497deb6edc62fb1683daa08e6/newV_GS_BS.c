#include<stdio.h>
#include<stdint.h>
#include<limits.h>

/* Maximum logical block in a file; ext4_extent's ee_block is __le32 */
#define EXT_MAX_BLOCK	0xffffffff
#define __u32 unsigned int
/* data type for file logical block number */
typedef __u32 ext4_lblk_t;


unsigned int ext4_ext_next_leaf_block(int depth)
{
    /* === GOOD SOURCE ONLY === */
    /* Provide a safe, non-zero default value for depth */
    depth = 1;

	if (depth == 0)
		return EXT_MAX_BLOCK;
    return 1;
}


int main(){
 return 0;
}