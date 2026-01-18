#include<stdio.h>
#include<stdint.h>
#include<limits.h>
#define ESCAPE_CODE 59

static int decode_residual_block(int level_code, int level) {
    int run;
    int rltab_val_one=90;
    
    /* === GOOD SOURCE ONLY === */
    /* Assign a safe value to level_code and level */
    level_code = ESCAPE_CODE;
    level = 1;
    
    if(level_code >= ESCAPE_CODE) {
        run = ((level_code - ESCAPE_CODE) >> 1) + 1;
    } else {
        if(!level)
            return -1;
        run = rltab_val_one;
    }
    return run;
}
int main(){
 int level_code = ESCAPE_CODE, level = 1;
 printf("%d\n",decode_residual_block(level_code, level));
 return 0;
}