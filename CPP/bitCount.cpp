/*
        Created by Yoni Avni 
        2021-03-24
*/

#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

constexpr const int MAX_NUM = 255;
constexpr const uint8_t LUT[256] = {0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 1, 2, 2, 3, 2, 3, 3, 4, 2, 3, 3, 4, 3, 4, 4, 5, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 2, 3, 3, 4, 3, 4, 4, 5, 3, 4, 4, 5, 4, 5, 5, 6, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 3, 4, 4, 5, 4, 5, 5, 6, 4, 5, 5, 6, 5, 6, 6, 7, 4, 5, 5, 6, 5, 6, 6, 7, 5, 6, 6, 7, 6, 7, 7, 8};

//count set bits in one byte
int countBits(uint8_t num)
{
    int cnt = 0;
    while (num)
    {
        if (num & 0x01)
            cnt++;
        num >>= 0x01;
    }
    return cnt;
}

//count set bits in 64 bit number O(1) time using lookup table
int countBits64(uint64_t num)
{
    int cnt = LUT[num & 0xff] +
              LUT[(num >> 8) & 0xff] +
              LUT[(num >> 16) & 0xff] +
              LUT[(num >> 24) & 0xff] +
              LUT[(num >> 32) & 0xff] +
              LUT[(num >> 40) & 0xff] +
              LUT[(num >> 48) & 0xff] +
              LUT[(num >> 56) & 0xff];
    return cnt;
}

int main()
{
    //function i used to build the LUT
    /* for (int i = 0; i <= MAX_NUM; i++)
    {
        printf(",%d", countBits((uint8_t)i));
    }
    cout << endl; */

    printf("%d ", countBits64((uint64_t)275952688063)); //18 bits set
    return 0;
}