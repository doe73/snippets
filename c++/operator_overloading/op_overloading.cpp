#include <iostream>

class op_overloading
{
private:
    int value = 0;
public:
    op_overloading() : value{0}{}
    op_overloading(int v) : value{v}{}
    //Copy constructor
    op_overloading(const op_overloading& obj)
    {
        this->value = obj.value;
    }
    //Assignment operator
    void operator=(const op_overloading& obj)
    {
        this->value = obj.value;
    }
    ~op_overloading(){}
    int operator()();
    op_overloading* operator->();
    op_overloading operator+(op_overloading rhs);
    //The operator + does not modify the lhs and rhs values. So, they should be consts
    friend op_overloading operator+(const op_overloading& lhs, const op_overloading& rhs);
    //The operator << takes the input os but it is returning it as reference to the output
    //therefore it cannot be taken as const, although we are not modifying it.
    friend std::ostream& operator<<(std::ostream& os, const op_overloading& obj);
    op_overloading operator()(op_overloading obj);
};

 op_overloading operator+(const op_overloading& lhs, const op_overloading& rhs)
{
    std::cout << "Calling the friend version of operator+" << std::endl;
    op_overloading result(lhs.value+rhs.value);
    return result;
} 

op_overloading op_overloading::operator+(const op_overloading obj)
{
    std::cout << "Calling the member version of operator+" << std::endl;
    op_overloading result;
    result.value = value + obj.value;
    return result;
}


int op_overloading::operator()()
{
    std::cout << "Calling the function operator" << std::endl;
    return 0;
}

op_overloading* op_overloading::operator->()
{
    std::cout << "Calling the pointer operator" << std::endl;
    return this;
}

std::ostream& operator<<(std::ostream& os, const op_overloading& obj)
{
    os << obj.value;
    return os;
}

op_overloading op_overloading::operator()(op_overloading obj)
{
    return *this;
}

int main()
{
    op_overloading a{2}, b{3};
    op_overloading test(a);

    test = b;
    test();
    test->op_overloading();
    std::cout << "Output of 2+3 = " << a + b << std::endl;
    op_overloading tmp = a + b;

    return 0;
}

