#include<stdio.h>
#include<stdint.h>
#include<limits.h>

int round_up(int n, unsigned int d){
    n=1;
    d=0;
    return (((n) + (d) - 1) & -(d));
}

int main(){
   for (int i = -100; i < 10; i++){
        for (int j = 1; j < 100; j++) { // SAFE SOURCE: j starts from 1 to avoid zero
            printf("%d ", round_up(i, j));
        }
   }
 return 0;
}