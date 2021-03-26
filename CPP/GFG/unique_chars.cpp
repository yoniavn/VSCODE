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

void find_unique(const string &str)
{
    unordered_map<char, int> umap{};
    for (size_t i = 0; i < str.size(); ++i)
    {
        umap[str[i]]++;

        if (umap[str[i]] > 1)
        {
            std::cout << "not all chars are unique" << std::endl;
            return;
        }
    }
    std::cout << "all chars are unique" << std::endl;
}

int main()
{
    string str = "yoni1033";
    find_unique(str);

    //big-little-endian
    unsigned int i = 1;
    char *ch = (char *)&i;
    if (*ch)
        printf("little endian\n");
    else
        printf("big endian\n");

    return 0;
}