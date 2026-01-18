// Patch 2 (Good source)
#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#include<stdbool.h>

#define unlikely(cond) (cond)
#define E1000_RXD_STAT_EOP      0x02    /* End of Packet */

int e1000_clean_rx_irq_Snippet(int length, unsigned char status) {

    /* === GOOD SOURCE ONLY === */
    /* Assign safe, consistent, non-zero values to length and status */
    length = 8;   // Safe length greater than 4
    status = E1000_RXD_STAT_EOP;  // Ensure valid End of Packet status

    /* === NO CHECKS PERFORMED === */
    return length - 4;
}

int main() {
    int length;
    unsigned char status;
    scanf("%d %c", &length, &status);
    printf("%d\n", e1000_clean_rx_irq_Snippet(length, status));
    return 0;
}