#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <vector>

using namespace std;

#define debug(x) cout << #x << " " << x << endl;

int main(int argc, char *argv[])
{
    vector<int> numbers = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 
                            21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 
                            31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 
                            41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 
                            51, 52, 53, 54, 0, 56, 57, 58, 59, 60, 
                            61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 
                            71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 
                            81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 
                            91, 92, 93, 94, 95, 96, 97, 98, 99, 100};
    unsigned int values_sum = 0;
    unsigned int index_sum = 0;

    for (int i = 1; i < 101; ++i)
    {
        index_sum += i;
        values_sum += numbers[i];
    }
    cout << "sum of 1..100 = " << index_sum << endl;
    cout << "sum of [1]..[100] = " << values_sum << endl;
    cout << "sum1 - sum2 = " << index_sum-values_sum << endl;
    return 0;
}