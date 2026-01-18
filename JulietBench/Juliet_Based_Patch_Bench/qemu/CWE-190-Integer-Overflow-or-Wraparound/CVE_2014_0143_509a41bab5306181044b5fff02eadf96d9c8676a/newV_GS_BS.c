#include <limits.h>

#include <stdint.h>

#include <stdio.h>


int cloop_open_Snippet(uint32_t n_blocks){

    uint32_t offsets_size;


    /* === GOOD SOURCE ONLY === */

    /* Set to a value that will not cause overflow */

    n_blocks = 1;  // Safe, non-abusive value


    
    offsets_size = n_blocks * sizeof(uint64_t);

    return offsets_size;

}

int main(){

    uint32_t n_blocks = 1; // Safe, controlled source

    printf("%d\n", cloop_open_Snippet(n_blocks));

    return 0;

}