#include<stdio.h>
#define BDRV_SECTOR_BITS   9
#define BDRV_SECTOR_SIZE   (1ULL << BDRV_SECTOR_BITS)

int bdrv_check_byte_request_Snippet(int nb_sectors){
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-overflowing value to nb_sectors */
    nb_sectors = 1;  // safe, non-overflow source

    /* === BAD SINK (NO CHECKS) === */
    /* Still vulnerable if original nb_sectors were large (but our source is safe) */
    return nb_sectors * BDRV_SECTOR_SIZE;
}

int main(){
    int nb_sectors;
    printf("%d\n", bdrv_check_byte_request_Snippet(nb_sectors));
    return 0;
}