#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#define EINVAL 22

enum aper_size_type {
	U8_APER_SIZE,
	U16_APER_SIZE,
	U32_APER_SIZE,
	LVL2_APER_SIZE,
	FIXED_APER_SIZE
};
typedef   signed long         off_t;
#define _AC(X,Y)	X
#define PAGE_SHIFT	13
#define PAGE_SIZE	(_AC(1,UL) << PAGE_SHIFT)

// int agp_generic_insert_memory_Snippet(enum aper_size_type size_type, int temp_num_entries, off_t pg_start, size_t mem_page_count){
int agp_generic_insert_memory_Snippet(off_t pg_start, size_t mem_page_count, int num_entries){
	// int num_entries;
    int agp_memory_reserved = 28; //a random concrete value is set
	// switch (size_type) {
	// case U8_APER_SIZE:
	// 	num_entries = temp_num_entries;
	// 	break;
	// case U16_APER_SIZE:
	// 	num_entries = temp_num_entries;
	// 	break;
	// case U32_APER_SIZE:
	// 	num_entries = temp_num_entries;
	// 	break;
	// case FIXED_APER_SIZE:
	// 	num_entries = temp_num_entries;
	// 	break;
	// case LVL2_APER_SIZE:
	// 	/* The generic routines can't deal with 2 level gatt's */
	// 	return -EINVAL;
	// 	break;
	// default:
	// 	num_entries = 0;
	// 	break;
	// }

	num_entries -= agp_memory_reserved/PAGE_SIZE;
	if (num_entries < 0) num_entries = 0;

	if ((pg_start + mem_page_count) > num_entries)
		return -EINVAL;
    return 0;

}
int main(){
 return 0;
} 