#include <iostream>

template<typename T>
void func(const T& val)
{
    std::cout << "Value1 is : " << val << std::endl;
    return;
}

/* template<typename T>
void func(T val)
{
    std::cout << "Value2 is : " << val << std::endl;
    return;
} */


int main()
{
    using namespace std;

    func(20);
}
