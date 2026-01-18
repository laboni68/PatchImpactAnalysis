#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int round_up(int n, unsigned int d){
    return (((n) + (d) - 1) & -(d));
}

int main(){
 for (int i = -100; i < 10; i++){
      for (int j = 0; j < 100; j++){
         printf("%d ", round_up(i, j));
      }
   }
 return 0;
} 