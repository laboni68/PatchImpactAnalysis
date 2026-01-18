#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

int calculate_division(int value, int base)
{
    // Original vulnerable code 
    if (value > INT_MAX / 2) {
        return -1;
    }
    return base / value;
}

int main(){
    return 0;
}