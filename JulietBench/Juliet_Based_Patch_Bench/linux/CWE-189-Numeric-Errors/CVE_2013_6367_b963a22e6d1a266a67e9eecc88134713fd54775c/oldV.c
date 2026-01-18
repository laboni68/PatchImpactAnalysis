#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
typedef long long ___s64;
#define s64 ___s64

int apic_get_tmcct_Snippet(int kvm_apic_get_reg_val, s64 apic_lapic_timer_period)
{
	s64 ns_dependency;

	/* if initial count is 0, current count should also be 0 */
	if (kvm_apic_get_reg_val == 0)
		return 0;

	ns_dependency =  apic_lapic_timer_period;

	return 1;
}
int main(){
 return 0;
} 