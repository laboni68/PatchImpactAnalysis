#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#define __u64 uint64_t
#define u64 uint64_t    
#define ENOENT 2
#define PERF_COUNT_SW_CPU_CLOCK 0
#define PERF_COUNT_SW_TASK_CLOCK 1
#define PERF_COUNT_SW_MAX 9



int sw_perf_event_destroy_Snippet(__u64	config)
{
    u64 event_id = config;
switch (event_id) {
	case PERF_COUNT_SW_CPU_CLOCK:
	case PERF_COUNT_SW_TASK_CLOCK:
		return -ENOENT;

	default:
		break;
	}

	if (event_id >= PERF_COUNT_SW_MAX)
		return -ENOENT;
    return 1;
}

int main(){
 return 0;
} 