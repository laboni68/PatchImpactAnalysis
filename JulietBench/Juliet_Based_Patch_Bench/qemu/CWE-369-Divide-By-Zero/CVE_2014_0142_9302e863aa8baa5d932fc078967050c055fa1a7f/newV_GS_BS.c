#include <stdio.h>
#include <stdint.h>
#include <limits.h> 

#define EFBIG 27

int parallels_open_Snippet(unsigned int tracks) {
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero value to tracks */
    tracks = 1;

    /* === BAD SINK (NO CHECKS) === */
    /* The operation is safe because we set tracks to a safe value */
    return 513 * tracks;
}

int main() {
    unsigned int tracks;
    tracks = 1;  // Manually setting a safe source
    printf("%d", parallels_open_Snippet(tracks));
    return 0;
}