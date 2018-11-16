/*
 * TestClass.hpp
 *
 *  Created on: Nov 7, 2018
 *      Author: doe
 */

#ifndef TESTCLASS_HPP_
#define TESTCLASS_HPP_

namespace boost_test
{

class TestClass
{
private:
    int my_variable;
public:
    TestClass();
    virtual ~TestClass();
    int get_my_variable();
    void set_my_variable(int var);
};

} /* namespace boost_test */

#endif /* TESTCLASS_HPP_ */
