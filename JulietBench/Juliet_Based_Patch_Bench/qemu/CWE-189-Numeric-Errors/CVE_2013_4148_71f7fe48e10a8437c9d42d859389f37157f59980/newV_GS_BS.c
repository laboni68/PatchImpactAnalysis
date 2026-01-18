#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define MAC_TABLE_ENTRIES    64

int cveSnippet(int in_use){
  in_use=32;
  if (in_use <= MAC_TABLE_ENTRIES)
    return in_use;
  return 0;
}

int main(){
  int a = 32; // Safe, non-zero source value assigned to `a`
  printf("%d\n", cveSnippet(a));
 return 0;
}

// #define MAC_TABLE_ENTRIES    64

// int cveSnippet(int in_use){
//   in_use=0;
//   if (in_use <= MAC_TABLE_ENTRIES)
//     return in_use;
//   return 0;
// }

// int main(){
//   int a;
//   scanf("%d", &a);
//   printf("%d\n", cveSnippet(a));
//  return 0;
// } 