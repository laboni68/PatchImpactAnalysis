#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define KVM_X2APIC_CID_BITS 0
#define u32 uint32_t
#define u64 uint64_t
#define X2APIC_ENABLE	(1UL << 10)

u32 recalculate_apic_map_Snippet(u32 cid_mask, u64 apic_base)
{
	
	    cid_mask = 0;
		/*
		 * All APICs have to be configured in the same mode by an OS.
		 * We take advatage of this while building logical id loockup
		 * table. After reset APICs are in xapic/flat mode, so if we
		 * find apic with different setting we assume this is the mode
		 * OS wants all apics to be in; build lookup table accordingly.
		 */
		if (apic_base & X2APIC_ENABLE) {
			cid_mask = (1 << KVM_X2APIC_CID_BITS) - 1;
		}
    return cid_mask;
    }

int main(){
 return 0;
} 