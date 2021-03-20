#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool is_binary(string str)
{
    auto f = [](char* sub ){
        int temp = atoi(sub);
        cout << temp << " ";
        return (temp == 0 || temp == 1); };

    bool isbin = all_of(begin(str), end(str), f);
    return isbin;
}

int main()
{
    is_binary("1010");
    std::cout << "nested namepace" << std::endl;
    return 0;
}