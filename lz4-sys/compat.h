#include <stddef.h>

extern void *rs_memmove(void *dst, const void *src, size_t size);
extern void *rs_memcpy(void *dst, const void *src, size_t size);
extern void *rs_memset(void *p, int v, size_t s);

#define LZ4_memmove(dst, src, size) rs_memmove((dst), (src), (size))
#define LZ4_memcpy(dst, src, size) rs_memcpy((dst), (src), (size))
#define LZ4_memset(p, v, s) rs_memset((p), (v), (s))
// #include "liblz4/lib/lz4.c"