#include<stdio.h>
#include<stdint.h>
#include<limits.h>

#define NR_NETWORK_LEN 15
#define NR_TRANSPORT_LEN 5
#define EMSGSIZE 40 /* Message too long */

int rose_sendmsg_Snippet(size_t len) {
    int size;
    /* === GOOD SOURCE ONLY === */
    len = 10;  // Assign a safe, small value to len

    size = len + NR_NETWORK_LEN + NR_TRANSPORT_LEN;
    return size;
}

int main() {
   // size_t len;
   // scanf("%zu", &len);
   for(size_t i = 65536; i < 65536+65536; i++ ){
      printf("%d ", rose_sendmsg_Snippet(i));
   }
   
    return 0;
}