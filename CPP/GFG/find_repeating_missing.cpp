/*
        Created by Yoni Avni 
*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    cout << std::endl;
}

void find_missing_number(int nums[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (nums[abs(nums[i]) - 1] > 0)
            nums[abs(nums[i]) - 1] *= -1;
        else
            printf(" %d ", abs(nums[i]));
    }

    for (int i = 0; i < size; i++)
    {
        if (nums[i] > 0)
        {
            printf(" %d ", i + 1);
            //repeated = nums[i];
            //missing = abs(nums[repeated - 1]) + 1;
        }
    }
}

int main()
{
    int array[] = {4, 3, 6, 2, 1, 1};
    int array2[] = {3, 1, 3};
    find_missing_number(array, 6);
    //printarr(array2, 3);
    return 0;
}