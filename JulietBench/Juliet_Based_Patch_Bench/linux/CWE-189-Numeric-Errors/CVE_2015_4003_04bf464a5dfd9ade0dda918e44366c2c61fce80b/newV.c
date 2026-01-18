#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define u8 uint8_t

int oz_usb_handle_ep_data_Snippet(int len,u8 body_unit_size ){
			int n;
			if (!body_unit_size)
				return -1;
            int size_oz_multiple_fixed = 7; //sizeof(struct oz_multiple_fixed) = 7 bytes
			n = (len - size_oz_multiple_fixed +1)
				/ body_unit_size;
            return n;
}

int main(){
 return 0;
} 