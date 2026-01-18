#include<stdio.h>
#include<stdint.h>
#include<limits.h>

#define XFACE_MAX_DIGITS 666
#define XFACE_BITSPERWORD 8
#define XFACE_WORDCARRY (1 << XFACE_BITSPERWORD)
#define XFACE_WORDMASK (XFACE_WORDCARRY - 1)
#define XFACE_MAX_WORDS 546

int xface_decode_frame_Snippet(int k, int nb_words){
     /* GOOD SOURCE: Assign safe values */
     k = 0;         // Initializing to a safe value
     nb_words = 0;  // Initializing to a safe value

     if (++k > XFACE_MAX_DIGITS) {
        return -1;
     }
     if (nb_words >= XFACE_MAX_WORDS) {
        return -1;
     }
    return 0;
}

int main(){
 int k, nb_words;
 printf("%d\n", xface_decode_frame_Snippet(k, nb_words));
 return 0;
}