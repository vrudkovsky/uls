#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    unsigned char *ss1_ = (unsigned char*) s1;
    unsigned char *ss2_ = (unsigned char*) s2;
    for (size_t i = 0; i < n; i++) {
        if (ss1_[i] != ss2_[i]) 
        return ss1_[i] - ss2_[i];
    }
    return 0;
}
