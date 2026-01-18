#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EFBIG 27

int parallels_open_Snippet(int tracks){
        if (tracks > INT32_MAX/513) {
            return -EFBIG;
        }
        return 513 * tracks;
    }

int main(){
    int tracks;
    scanf("%d",&tracks);
    printf("%d",parallels_open_Snippet(tracks));
 return 0;
} 