#include <stdint.h>
#include <stdio.h>

#define EFBIG 27

int qcow2_open_Snippet(int l1_size) {

    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, well-defined value to l1_size */
    l1_size = 1;  // Safe, non-zero value

    if (l1_size > 0x2000000) {
        return -EFBIG;
    }

    return 0;
}

int main(){
    printf("%d\n", qcow2_open_Snippet(0));  // The actual argument value won't affect the result due to good source
    return 0;
}