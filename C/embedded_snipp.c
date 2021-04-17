#include "common.h"

#if (X == Y)
#define X 1
#elif (X == Z)
#define X 2
#else
#error Please define a correct type
#endif

#define VERSION(major, minor, release) \
    (DWORD)(((DWORD)(major) << 16) | ((DWORD)(minor) << 8) | ((DWORD)(release) << 0))

#define FIRMWARE_VERSION VERSION(1, 0, 0)

//
// Additional types
//
#ifndef BYTE
#define BYTE unsigned char
#endif
#ifndef WORD
#define WORD unsigned short
#endif
#ifndef DWORD
#define DWORD unsigned long
#endif

//correct way to expand macro recursively
#define VARIABLE 3
#define PASTER(x, y) x##_##y
#define EVALUATOR(x, y) PASTER(x, y)

#define NAME(fun) EVALUATOR(fun, VARIABLE)

extern void NAME(mine)(char *x);
//---

#ifdef DEBUG
#define DEBUGON TRUE
#define RELEASEON FALSE
#else
#define DEBUGON FALSE
#define RELEASEON TRUE
#endif

/*
#ifndef BOOL
#define BOOL int
#define FALSE 0
#define TRUE (~FALSE)
#endif // !BOOL
*/

//bitfields
struct flags
{
    unsigned int is_keyword : 1;
    unsigned int is_extern : 1;
    unsigned int is_static : 1;
};

int main()
{
    struct flags fl = {1, 1, 1};
    printf("%lu\n", sizeof(fl));
    return 0;
}