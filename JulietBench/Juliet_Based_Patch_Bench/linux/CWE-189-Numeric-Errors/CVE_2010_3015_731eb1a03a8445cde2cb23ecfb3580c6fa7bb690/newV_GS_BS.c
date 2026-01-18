#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define __u32 unsigned int
typedef __u32 ext4_lblk_t;

int ext4_ext_get_blocks_Snippet(ext4_lblk_t ee_block, ext4_lblk_t iblock){
    unsigned short ee_len = 50; // considering the value of ee_len as 50
    unsigned int allocated = 0;

    /* === GOOD SOURCE ONLY === */
    /* Assign safe values to ee_block and iblock */
    ee_block = 0;  // safe, starting point block
    iblock = 0;    // safe, starting point block

    /* === BAD SINK (NO RANGE CHECK) === */
    /* Vulnerable if source values were not controlled */
    if (iblock >= ee_block && iblock < ee_block + ee_len) {
        /* number of remaining blocks in the extent */
        allocated = ee_len - (iblock - ee_block);
    }

    return allocated;
}

int main(){
    return 0;
}