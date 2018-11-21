/*
 *  mmap.h
 *
 *  copyright (c) 2018 Xiongfei Shi
 *
 *  author: Xiongfei Shi <jenson.shixf(a)gmail.com>
 *  license: MIT
 */

#ifndef __MMAP_H__
#define __MMAP_H__

#include <stddef.h>

#define PROT_NONE       0
#define PROT_READ       1
#define PROT_WRITE      2
#define PROT_EXEC       4

#define MAP_FILE        0
#define MAP_SHARED      1
#define MAP_PRIVATE     2
#define MAP_TYPE        0x0F
#define MAP_FIXED       0x10
#define MAP_ANONYMOUS   0x20
#define MAP_ANON        MAP_ANONYMOUS

#define MAP_FAILED      ((void *)-1)

#ifdef __cplusplus
extern "C" {
#endif

    void *mmap(void *addr, size_t len, int prot, int flags, int fildes, unsigned long off);
    int munmap(void *addr, size_t len);
    int msync(void *addr, size_t len, int flags);
    int mprotect(void *addr, size_t len, int prot);
    int mlock(const void *addr, size_t len);
    int munlock(const void *addr, size_t len);

#ifdef __cplusplus
};
#endif

#endif  /* __MMAP_H__ */
