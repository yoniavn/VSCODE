#include <iostream>
using namespace std;

//generic programming using templates
template <typename T>
T cube(const T &value)
{
    return value * value * value;
}

//template metaprogramming
template <int toCube>
struct Cube
{
    enum
    {
        value = toCube * toCube * toCube
    };
};

int main()
{

    //cube function that instantiates is called at runtime.
    std::cout << "8 cubed: " << cube(8) << std::endl;

    //the cube function for the template metaprogramming is done at compile time.
    //gets the "value" using the scope resolution argument - value 5 gets replaced at compile time. [ so this code is not executed at runtime]
    std::cout << "5 cubed: " << Cube<5>::value << std::endl;

    return 0;
}