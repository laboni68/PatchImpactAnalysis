#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <errno.h>

#define EFBIG 27

int parallels_open_Snippet(unsigned int catalog_size){
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe, non-zero, and non-overflowing value to catalog_size */
    catalog_size = 1;   // Safe value ensuring no overflow

    return catalog_size * 4;
}

int main()
{
    unsigned int catalog_size;
    catalog_size = 1;  // Safe value
    printf("Catalog size: %d\n", parallels_open_Snippet(catalog_size));
    return 0;
}