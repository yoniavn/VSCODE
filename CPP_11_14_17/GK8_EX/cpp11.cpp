// C++ Home assignment

/*    
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

//****************************************First Question*************************************************
//recursive function overload with single argument to terminate the recursion
template <typename T>
T Generic_Sum(const T &num)
{
    return num;
}

//function that gets numbers as argument and recursively calculate and return the sum of those numbers
template <typename T, typename... ARGS>
T Generic_Sum(const T &num, const ARGS &...numbers)
{
    return num + Generic_Sum(numbers...);
}
//********************************************************************************************************

//****************************************Second Question*************************************************

template <typename T, size_t N>
array<T, N / 2> Sum_and_Shrink(array<T, N> &inputArr)
{
    array<T, N / 2> result{};

    if (!inputArr.size())
    {
        return result;
    }

    for (size_t i = 0; i < N / 2; ++i)
    {
        result[i] = Generic_Sum(inputArr[2 * i], inputArr[2 * i + 1]);

        //result[i] = inputArr[2 * i] + inputArr[2 * i + 1];
    }
    return result;
}
//********************************************************************************************************

//print array elements
template <typename T, size_t N>
void PrintArray(array<T, N> &arr)
{
    cout << "[ ";
    for (T &i : arr)
        cout << i << " ";
    cout << " ]\n";
}

int main()
{
    cout << Generic_Sum(2, 5, 10) << endl;                           //17
    cout << Generic_Sum(2, 5, 10, 2, 5, 102, 5, 102, 5, 10) << endl; //248
    cout << Generic_Sum(3) << endl;                                  //3
    //cout << Generic_Sum(3.3, 5.5) << endl;                        //8.8

    array<int, 6> MyArray = {1, 2, 100, 150, 200, 700};
    array<int, 6> MyArray2 = {1, 2, 3, 4, 5, 6};

    array<int, 0> MyArray3;

    array<int, 4> MyArray4 = {1, 2, 3, 4};

    array<int, 2> MyArray5 = {1, 2};

    auto resultArray = Sum_and_Shrink(MyArray);
    PrintArray(resultArray);

    auto resultArray2 = Sum_and_Shrink(MyArray2);
    PrintArray(resultArray2);

    auto resultArray3 = Sum_and_Shrink(MyArray3);
    PrintArray(resultArray3);

    auto resultArray4 = Sum_and_Shrink(MyArray4);
    PrintArray(resultArray4);

    auto resultArray5 = Sum_and_Shrink(MyArray5);
    PrintArray(resultArray5);
    return 0;
}
