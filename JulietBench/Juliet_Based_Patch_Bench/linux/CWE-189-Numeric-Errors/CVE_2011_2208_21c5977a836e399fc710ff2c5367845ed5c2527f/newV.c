#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
long SYSCALL_DEFINE3_Snippet(long len, long count)
{
	if ((unsigned long)len > (unsigned long)count)
		len = count;
    return len;
}
int main(){
 return 0;
} 