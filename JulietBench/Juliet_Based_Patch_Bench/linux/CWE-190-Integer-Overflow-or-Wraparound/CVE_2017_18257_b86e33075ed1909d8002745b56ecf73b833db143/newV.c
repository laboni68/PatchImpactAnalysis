#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

static int __get_data_block_Snippet(unsigned int m_len, unsigned i_blkbits)
{
	size_t b_size;
	// map.m_len = b_size >> i_blkbits;
	b_size = (uint64_t)m_len << i_blkbits;
	return b_size;
}

int main(){
 return 0;
} 