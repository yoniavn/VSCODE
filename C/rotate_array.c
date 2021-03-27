#include "common.h"

void rotate_one(int *array, int size)
{
    int temp = array[0];

    for (int i = 0; i < size - 1; ++i)
    {
        array[i] = array[i + 1];
    }
    array[size - 1] = temp;
}

void rotateArray(int *arr, int size, int elements)
{
    if (elements > size)
    {
        elements %= size;
    }

    for (int i = 0; i < elements; ++i)
    {
        rotate_one(arr, size);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = ARR_LENGTH(arr);
    printArray(arr, size);
    rotateArray(arr, size, 6);
    printArray(arr, size);
    return 0;
}