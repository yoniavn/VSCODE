/* 
    C++11 Home assignment
    1. Implement function that gets integer numbers as parameter and return the sum 
        ** the function can be called with any number of parameters (not inside container, but as parameter) **
        std::cout << sum(2,5,10); //17
        std::cout << sum(2,5,10,2,5,102,5,102,5,10); //248
        std::cout << sum(3); //3

    2. Implement template function that gets std::array of integers in even size() and return std::array 
        in half of the input size() so that array[i] in output contain the sum of the numbers in indexes 2*i, 2*i+1 
        {1,2,100,150,200,700} --> {3,250,900}
 */

#include <iostream>
#include <algorithm>
#include <array>
#include <functional>

using namespace std;

//template function
template <typename T>
T sum(const T &num)
{
    return num;
}

template <typename T, typename... ARGS>
T sum(const T &num, const ARGS &...numbers)
{
    return num + sum(numbers...);
}

int main()
{
    std::cout << sum(2, 5, 10) << endl;                           //17
    std::cout << sum(2, 5, 10, 2, 5, 102, 5, 102, 5, 10) << endl; //248
    std::cout << sum(3) << endl;

    std::cout << sum(3.3, 5.5) << endl; //8.8

    return 0;
}