#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

// useful macros

#define BYTE unsigned char

//extract length from array
#define ARR_LENGTH(arr) ((sizeof(arr)) / (sizeof(*arr)))

//print file path and line number
#define WHERE fprintf(stderr, "[LOG]%s:%d\n", __FILE__, __LINE__);

//print the name of the variable and the value
#define print_dec(var) printf("%s=%d ", #var, var);

#define likely(x) __builtin_expect((x), 1)
#define unlikely(x) __builtin_expect((x), 0)

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}