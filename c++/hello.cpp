#include <iostream>
#include <string>

class Hello
{
    private:
        int my_private_int;
    public:
        std::string getName();
};

int main(int argc, char * argv[])
{
    std::string name;
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello, " << name << std::endl;
    return 0;
}

