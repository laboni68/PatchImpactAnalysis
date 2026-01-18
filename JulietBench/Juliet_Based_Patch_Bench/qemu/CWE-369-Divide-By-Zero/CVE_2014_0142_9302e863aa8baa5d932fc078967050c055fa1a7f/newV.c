#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL 22
#define EFBIG 27

int parallels_open_Snippet(unsigned int tracks){
    if (tracks == 0) {
        return -EINVAL;
    }
    if (tracks > INT32_MAX/513) {
        return -EFBIG;
    }
    return 513 * tracks;
}

int main(){
    unsigned int tracks;
    scanf("%u",&tracks);
    printf("%d",parallels_open_Snippet(tracks));
 return 0;
} 