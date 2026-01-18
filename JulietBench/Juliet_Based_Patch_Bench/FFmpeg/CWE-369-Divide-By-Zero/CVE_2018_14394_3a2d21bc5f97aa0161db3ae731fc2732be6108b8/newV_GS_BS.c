#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define MKTAG(a,b,c,d) ((a) | ((b) << 8) | ((c) << 16) | ((unsigned)(d) << 24))
#define FFERRTAG(a, b, c, d) (-(int)MKTAG(a, b, c, d))
#define AVERROR_PATCHWELCOME       FFERRTAG( 'P','A','W','E') ///< Not yet implemented in FFmpeg, patches welcome
#define AV_CODEC_ID_ADPCM_IMA_WAV   0x0069
#define AV_CODEC_ID_ADPCM_MS        0x0002

// Patch 2 (Good source)
int ff_mov_write_packet2(int codec_id, int size, int frame_size, long sample_size){
    unsigned int samples_in_chunk = 0;

    /* === GOOD SOURCE ONLY === */
    sample_size = 1; // Assign a safe, non-zero value to sample_size

    if (codec_id == AV_CODEC_ID_ADPCM_MS ||
        codec_id == AV_CODEC_ID_ADPCM_IMA_WAV) {
        samples_in_chunk = frame_size;
    } else if (sample_size) {
        samples_in_chunk = size / sample_size;
    } else {
        samples_in_chunk = 1;
    }

    return samples_in_chunk;
}

int ff_mov_write_packet(int codec_id, int size, int frame_size, long sample_size){
    unsigned int samples_in_chunk = 0;

    sample_size = 1; // Assign a safe, non-zero value to sample_size

    if (codec_id == AV_CODEC_ID_ADPCM_MS ||
        codec_id == AV_CODEC_ID_ADPCM_IMA_WAV) {
        samples_in_chunk = frame_size;
    } else if (sample_size) {
        samples_in_chunk = size / sample_size;
    } else {
        samples_in_chunk = 1;
    }

    return samples_in_chunk;
}

int main(){
    return 0;
}