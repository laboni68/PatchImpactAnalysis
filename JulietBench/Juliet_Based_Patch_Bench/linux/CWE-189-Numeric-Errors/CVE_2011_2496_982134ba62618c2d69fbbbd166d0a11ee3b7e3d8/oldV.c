#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EIFAULT 1
#define EINVAL 22
#define VM_DONTEXPAND	0x00040000	/* Cannot expand with mremap() */
#define VM_PFNMAP	0x00000400	/* Page-ranges managed without "struct page", just pure PFN */
/* PAGE_SHIFT determines the page size */
#define PAGE_SHIFT	13

int vma_to_resize_Snippet(unsigned long addr, unsigned long old_len, unsigned long new_len, unsigned long vma_vm_start, unsigned long vma_vm_flags,unsigned long vma_vm_pgoff)
{
    if (vma_vm_start > addr)
		return -EIFAULT;
	/* Need to be careful about a growing mapping */
	if (vma_vm_flags & (VM_DONTEXPAND | VM_PFNMAP)) {
		if (new_len > old_len)
			return -EIFAULT;
	}
    return 1;
}
int main(){
 return 0;
} 