#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

static long add_bytes_c_Snippet(int w) {
    long i, a = 1;
    uint8_t src = 50; // assuming a concrete value

    // === GOOD SOURCE ONLY ===
    // Use a good source: ensure 'w' is set to a safe value
    w = sizeof(long) + 5; // Safe, ensures 'w - sizeof(long)' is non-negative

    for (i = 0; i <= w - (int)sizeof(long); i += sizeof(long)) {
        a = (long)(src + i);
    }
    return a;
}

int main() {
    int w;
    // Overwrite user input to ensure a good source
    w = sizeof(long) + 5;
    printf("%ld\n", add_bytes_c_Snippet(w));
    return 0;
}