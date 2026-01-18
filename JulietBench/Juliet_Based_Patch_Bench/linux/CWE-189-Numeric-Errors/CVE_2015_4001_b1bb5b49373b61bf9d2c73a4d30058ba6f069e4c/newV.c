#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define u8 uint8_t
#define u16 uint16_t

unsigned int oz_hcd_get_desc_cnf_Snippet( u8 length, u16 offset, u16 total_size, unsigned int required_size)
{
	//if (status == 0) { //considering status = 0
		unsigned int copy_len;
		// unsigned int required_size = urb->transfer_buffer_length;

		if (required_size > total_size)
			required_size = total_size;
		copy_len = required_size-offset;
		if (length <= copy_len)
			copy_len = length;
    return copy_len;
   // }
}
int main(){
 return 0;
} 