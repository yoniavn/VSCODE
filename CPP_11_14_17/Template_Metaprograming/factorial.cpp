#include <iostream>

using namespace std;

//regular C++ recursion for n!
int factorial(int value) {
    if (value == 1)
    {
        return value;
    }
    return value * factorial(value-1);    
}

int factorial_v2(const int value, const int sum = 1) {
    if (value > 1) {
        return factorial_v2(value - 1, sum * value);
    }
    return sum;
}

//template metaprogramming style
//** template metaprogramming doens't have branching logic
template<int input, int sum = 1>
struct Factorial : Factorial<input - 1, input * sum> {
};


int main()
{
    cout << "5! = 5*4*3*2*1 = " << factorial(5) << endl;
    
    cout << "5! = 5*4*3*2*1 = " << factorial_v2(5) << endl;
    return 0;
}