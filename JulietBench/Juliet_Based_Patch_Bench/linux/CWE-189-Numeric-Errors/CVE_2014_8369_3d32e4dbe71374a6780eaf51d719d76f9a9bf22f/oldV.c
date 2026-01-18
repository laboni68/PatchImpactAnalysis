#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

typedef uint64_t u64;
typedef u64 gfn_t; //considering gfn_t as u64
#define PAGE_SHIFT 13

gfn_t kvm_pin_pages_Snippet( gfn_t gfn, unsigned long size)
{
	gfn_t end_gfn;
	end_gfn = gfn + (size >> PAGE_SHIFT);
	gfn    += 1;
    return end_gfn;

}
int main(){
 return 0;
} 