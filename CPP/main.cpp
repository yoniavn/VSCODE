#include <iostream>
#include <stdio.h>

using namespace std;

void swap(int **ptr)
{
    printf("%d\n", **ptr);
}

int main()
{
    int a = 5;
//    int b = 10;

    int **pa;
    //int **pb;

    *(pa) = &a;

    printf("&a: %p\n&*pa: %p\n**pa: %d\n", &a, *(pa), **pa);
    swap(pa);
    return 0;
}