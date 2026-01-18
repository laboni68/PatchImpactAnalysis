#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
/* Get the next entry on the list and randomize it using a random shift */
int next_random_slot_Snippet(int rand, int  count)
{
    int state_pos = 0;
    int state_count = count;
    int state_rand=rand;
	return (state_pos + state_rand) % state_count;
}
int main(){
 return 0;
} 