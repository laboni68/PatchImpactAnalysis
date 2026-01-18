#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

long SYSCALL_DEFINE3_Snippet(long len, long count)
{
    /* === GOOD SOURCE ONLY === */
    /* Assign safe, controlled values */
    len = 10;
    count = 20;  // Ensure len is always less than or equal to count

    if (len > count) {
        len = count;
    }
    return len;
}

int main(){
    return 0;
}