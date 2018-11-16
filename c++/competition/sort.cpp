#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> v{2, 5, 1, -4, 11, 4, 2, 15, 21};
    std::sort(v.begin(), v.end());
    for(auto itr = v.begin(); itr != v.end(); itr++)
    {
        std::cout << *itr << ",";
    }
    std::cout << std::endl;
    std::string str = "monkey";

    std::sort(str.rbegin(), str.rend());
    for(auto itr = str.begin(); itr != str.end(); ++itr)
    {
        std::cout << *itr;
    }
    std::cout << std::endl;
    return 0;
}

