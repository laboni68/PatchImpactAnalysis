#include<stdio.h>
    #include<stdint.h>
    #include<limits.h>

    int function_Snippet(int value) {
        // GOOD SOURCE ONLY
        value = 1;  // Assign a safe, non-zero value to avoid division-by-zero

        // BAD SINK: No check for division-by-zero
        return 100 / value;
    }

    int main() {
        return 0;
    }