#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#define EINVAL 22

unsigned long midi_synth_load_patch_Snippet( int count, int sysex_len, int hdr_size){
    unsigned long   left;
    /* Patch header too short */
	if (count < hdr_size)
		return -EINVAL;

	count -= hdr_size;
    /* Sysex record too short */
	if ((unsigned)count < (unsigned)sysex_len)
		sysex_len = count;

	left = sysex_len;
    return left;
}

int main(){
 return 0;
} 