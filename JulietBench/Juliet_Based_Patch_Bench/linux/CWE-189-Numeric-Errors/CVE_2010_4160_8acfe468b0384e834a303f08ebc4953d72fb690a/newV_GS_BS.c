#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define u32 unsigned int
typedef u32		compat_size_t;

int iov_from_user_compat_to_kern_Snippet2(int tot_len, compat_size_t len){
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe value to len such that overflow cannot occur */
    len = 10;
    
    tot_len += len;
    return tot_len;
}
int iov_from_user_compat_to_kern_Snippet(int tot_len){
    /* Assign a safe, non-overflowable value */
    compat_size_t len=UINT32_MAX;
    tot_len=0;
    tot_len += len;
    return tot_len;
}
int main(){
  int tot_len;
  scanf("%d", &tot_len);
  printf("%d\n", iov_from_user_compat_to_kern_Snippet(tot_len));
  return 0;
}