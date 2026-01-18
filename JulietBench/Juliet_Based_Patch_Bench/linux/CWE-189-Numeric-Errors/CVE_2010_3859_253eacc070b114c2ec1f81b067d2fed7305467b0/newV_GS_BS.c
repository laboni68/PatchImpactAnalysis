#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int SYSCALL_DEFINE6_Snippet(size_t len){
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-exceeding value to len */
    len = 1024; // safe example value, doesn't exceed INT_MAX

    return len;
}

int main(){
 return 0;
}