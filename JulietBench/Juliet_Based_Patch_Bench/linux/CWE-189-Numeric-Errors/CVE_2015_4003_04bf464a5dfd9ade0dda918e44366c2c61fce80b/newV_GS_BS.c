#include<stdio.h>
#include<stdint.h>
#include<limits.h>

#define u8 uint8_t

int oz_usb_handle_ep_data_Snippet(int len, u8 body_unit_size) {
	/* === GOOD SOURCE ONLY === */
	body_unit_size = 1;  // Assign a safe, non-zero value to body_unit_size
	int size_oz_multiple_fixed = 7; //sizeof(struct oz_multiple_fixed) = 7 bytes

	/* === BAD SINK (NO CHECKS) === */
	/* Still vulnerable if body_unit_size were zero (but our source is safe) */
	int n = (len - size_oz_multiple_fixed + 1) / body_unit_size;
	return n;
}

int main() {
	return 0;
}