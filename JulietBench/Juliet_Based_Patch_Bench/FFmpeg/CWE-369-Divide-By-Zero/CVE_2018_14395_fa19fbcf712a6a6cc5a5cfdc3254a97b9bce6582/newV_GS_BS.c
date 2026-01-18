#include<stdio.h>
#include<stdint.h>
#include<limits.h> 
#define MODE_MOV  0x02

int mov_write_audio_tag(int mode, unsigned timescale, int channels) {
    int version = 0;
    
    /* === GOOD SOURCE ONLY === */
    /* Assign safe, non-zero, and valid values */
    mode = MODE_MOV;
    timescale = 1;  // Safe value within UINT16_MAX
    channels = 1;   // Non-zero number of channels

    if (mode == MODE_MOV) {
        if (timescale > UINT16_MAX) {
            version = 2;
        } else {
            version = 1;
        }
    }
    return version;
}

int main() {
    int mode;
    int channels;
    unsigned timescale;
    scanf("%d %u %d", &mode, &timescale, &channels);
    printf("%d\n", mov_write_audio_tag(mode, timescale, channels));
    return 0;
}