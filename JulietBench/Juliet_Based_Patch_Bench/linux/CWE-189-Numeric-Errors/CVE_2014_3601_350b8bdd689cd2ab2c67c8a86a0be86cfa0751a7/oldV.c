#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
typedef uint64_t u64;
typedef u64 gfn_t; //considering gfn_t as u64

int kvm_iommu_put_pages(gfn_t base_gfn, unsigned long npages)
{
	gfn_t end_gfn, gfn;
	end_gfn = base_gfn + npages;
	gfn     = base_gfn;

	return (gfn < end_gfn);
}
int kvm_iommu_map_pages_Snippet(gfn_t gfn, gfn_t slot_base_gfn){
	return kvm_iommu_put_pages(slot_base_gfn, gfn);
}
int main(){
 return 0;
} 