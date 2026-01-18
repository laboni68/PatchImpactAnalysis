#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int64_t cveSnippet(unsigned int sample_size){
    int64_t current_offset;

    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, known value to sample_size */
    sample_size = 1000;  // Safe, within bounds

    current_offset = sample_size;
    return current_offset;
}

int main(){
    return 0;
}