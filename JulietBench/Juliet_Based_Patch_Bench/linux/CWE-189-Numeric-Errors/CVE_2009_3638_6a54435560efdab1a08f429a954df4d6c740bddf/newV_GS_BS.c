#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define __u32 unsigned int 
#define KVM_MAX_CPUID_ENTRIES 40

unsigned int kvm_dev_ioctl_get_supported_cpuid_Snippet(unsigned int cpuid_nent){
    /* === GOOD SOURCE ONLY === */
    cpuid_nent = 20; // Safe, predefined valid source value

    /* === BAD SINK (NO CHECKS) === */
    /* cpuid_nent is assumed to be within a valid range */
    
    return cpuid_nent;
}

int main(){
    unsigned int cpuid_nent;
    // using safe value directly without input for the demonstration of good source
    cpuid_nent = kvm_dev_ioctl_get_supported_cpuid_Snippet(0);
    printf("%d\n", cpuid_nent);
    return 0;
}