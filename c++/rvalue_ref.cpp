#include <iostream> 

int intVal()
{
    return 5;
}

void receiveVal(int& val)
{
    std::cout << "l-value reference" << std::endl;
}

void receiveVal(int&& val)
{
    std::cout << "r-value reference" << std::endl;
}

int main()
{
    receiveVal(5);
    int myVal = 15;
    receiveVal(myVal);
    receiveVal(intVal());
    return 0;
}

