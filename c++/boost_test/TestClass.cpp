/*
 * TestClass.cpp
 *
 *  Created on: Nov 7, 2018
 *      Author: doe
 */

#include "TestClass.hpp"

namespace boost_test
{

TestClass::TestClass() : my_variable(0)
{
}

TestClass::~TestClass()
{
    // TODO Auto-generated destructor stub
}

int TestClass::get_my_variable()
{
    return my_variable;
}

void TestClass::set_my_variable(int var)
{
    my_variable = var;
}
} /* namespace boost_test */
