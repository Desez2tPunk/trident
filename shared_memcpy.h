#ifndef __SHARED_H__
#define __SHARED_H__

#include <android/log.h>
#include <sys/types.h>

// performs a dirtycow memcpy -- copy into dst at offset off n bytes
// from src.
int dirtycow_memcpy(const char *dst, size_t off, size_t n, void *src);

// log info
#define LOGV(...) { __android_log_print(ANDROID_LOG_INFO, "trident", __VA_ARGS__); }

// log notice
#define LOGN(x) { __android_log_print(ANDROID_LOG_INFO, "trident", "NOTICE: %s", (x)); }
#endif
