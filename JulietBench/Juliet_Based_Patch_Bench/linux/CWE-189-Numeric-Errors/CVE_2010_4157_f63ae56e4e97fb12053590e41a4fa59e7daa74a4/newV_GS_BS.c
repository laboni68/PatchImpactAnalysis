#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL 22

int ioc_general_Snippet(unsigned long gen_data_len, unsigned long gen_sense_len) {
    /* === GOOD SOURCE ONLY === */
    /* Assign safe, non-overflow values to gen_data_len and gen_sense_len */
    gen_data_len = 100;
    gen_sense_len = 50;

    /* === BAD SINK (NO CHECKS) === */
    /* Still vulnerable if the original input was wrong (but our source is safe) */
    if (gen_data_len + gen_sense_len != 0) {
        return 1;
    }

    return 0;
}

int main() {
    return 0;
}