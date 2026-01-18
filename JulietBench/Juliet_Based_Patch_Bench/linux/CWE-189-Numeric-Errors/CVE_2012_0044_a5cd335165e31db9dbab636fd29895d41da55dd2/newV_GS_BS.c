#include<stdio.h>
#include<stdint.h>
#include<limits.h>

#define DRM_MODE_FB_DIRTY_MAX_CLIPS     256
#define EINVAL 22

int drm_mode_dirtyfb_ioctl_Snippet(int num_clips) {
    int ret = 0;

    /* === GOOD SOURCE ONLY === */
    num_clips = 1;  // Assign a safe, non-zero value to num_clips

    /* === BAD SINK (NO CHECKS) === */
    /* Function assumes num_clips is within safe range for further operations */
    return num_clips;
}

int main() {
    return 0;
}