#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

/* Get the next entry on the list and randomize it using a random shift */
int next_random_slot_Snippet(int rand, int  count)
{
    int state_pos = rand % count;
    int state_count = count;
	if (state_pos >= state_count)
		state_pos = 0;
	return state_pos;
}


int main(){
 return 0;
} 