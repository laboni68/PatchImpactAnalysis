#include<stdio.h>
#include<stdint.h>
#include<limits.h>

#define EINVAL 22
#define unlikely(cond) (cond)

int sg_start_req_Snippet(unsigned int iov_count){
    int sizeof_iovec = 8; //sizeof(struct iovec) = sizeof_iovec = 8 bytes

    /* === GOOD SOURCE ONLY === */
    iov_count = 1; // safe, non-zero source

    /* === BAD SINK (NO CHECKS) === */
    /* Still vulnerable if iov_count was untrusted (but our source is safe) */
    int size = sizeof_iovec * iov_count;
    return size;
}

int main(){
 return 0;
}