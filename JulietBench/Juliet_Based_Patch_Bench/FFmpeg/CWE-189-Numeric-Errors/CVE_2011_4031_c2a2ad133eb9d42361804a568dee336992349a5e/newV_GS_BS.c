#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

static int asfrtp_parse_packet_Snippet(int len,int off, int cur_len)
{
    uint8_t buf = 1;

    /* === GOOD SOURCE ONLY === */
    /* Assign safe, known values */
    len = 10;  // arbitrarily safe values
    off = 2;
    cur_len = 10;

    /* === BAD SINK (NO CHECKS) === */
    /* Still vulnerable if len were less than 4 or buf is zero (but our source is safe) */
    if (len > 0) {
        if (len < 4)
            return -1;
        
        if (!buf) {
            return -1;
        }
    }

    return 0;
}

int main() {
    return 0;
}