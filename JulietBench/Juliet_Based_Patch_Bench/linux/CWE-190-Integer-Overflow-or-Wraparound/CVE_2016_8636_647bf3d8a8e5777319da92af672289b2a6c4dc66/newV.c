#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EFAULT 84

enum rxe_mem_type {
	RXE_MEM_TYPE_NONE,
	RXE_MEM_TYPE_DMA,
	RXE_MEM_TYPE_MR,
	RXE_MEM_TYPE_FMR,
	RXE_MEM_TYPE_MW,
};

int mem_check_range(enum rxe_mem_type type, uint64_t iova, size_t length,uint64_t mem_iova, size_t mem_length)
{
	switch (type) {
	case RXE_MEM_TYPE_DMA:
		return 0;

	case RXE_MEM_TYPE_MR:
	case RXE_MEM_TYPE_FMR:
		if (iova < mem_iova ||
		    length > mem_length ||
		    iova > mem_iova + mem_length - length)
			return -EFAULT;
		return 0;

	default:
		return -EFAULT;
	}
}

int main(){
 return 0;
} 