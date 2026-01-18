
#include <stdint.h>
#include <stdio.h>

int qcow2_snapshot_load_tmp_Snippet(int l1_size) {
    int new_l1_bytes;

    /* === GOOD SOURCE ONLY === */
    /* Assign a safe default value within bounds */
    l1_size = 1024;  // Safe, non-zero, within bounds

    new_l1_bytes = l1_size * sizeof(uint64_t);
    return new_l1_bytes;
}

int main(){
    int l1_size;
    scanf("%d", &l1_size);
    printf("%d\n", qcow2_snapshot_load_tmp_Snippet(l1_size));
    return 0;
}