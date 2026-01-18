#include<stdio.h>
#include<stdint.h>
#include<limits.h> 

#define EINVAL          22
int drm_modeset_ctl_Snippet(unsigned int crtc, unsigned int num_crtcs){
    int ret=0;
    if (!num_crtcs)
		return -1;

	if (crtc >= num_crtcs) {
		ret = -EINVAL;
	}
    return ret;
}

int main(){
 return 0;
} 