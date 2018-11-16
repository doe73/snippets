/*****************************************
 * Whenever writing C++ code start with include whenever using
 * a std lib function.
 * ***************************************/
#include <iostream>
#include <vector>
#include <cmath>

//Makes things shorter to type with using namespace
using namespace std;
/*****************************************************************************
 * The problem is to find the largest sub array sum. We will solve the problem
 * by calculating with brute force and refine the algorithms to better optimizations.
 * Following triple loop is a naive approach to the solution. Check all the subarrays
 * and then save the sum with largest result.
 * Becareful when comparing right side. The right size should be open. If not,
 * you can have a one off problem.
 * ***************************************************************************/
int triple_loop(auto& v)
{
    auto best = 0;

    for(auto i = v.begin(); i != v.end(); i++)
    {
        for(auto j = i; j != v.end(); j++)
        {
            auto sum = 0;
            for(auto k = i; k != (j+1); k++)
            {
                sum += *k;
            }
            best = max(best, sum);
        }
    }
    return best;
}

/**********************************************************************************
 * You can reduce the loop to two if you compare with the older largest sum at 
 * everytime you add it.
 * *******************************************************************************/

int double_loop(auto& v)
{
    auto best = 0;

    for(auto i = v.begin(); i != v.end(); i++)
    {
        auto sum = 0;
        for(auto j = i; j != v.end(); j++)
        {
            sum += *j;
            best = max(best, sum);
        }
    }
    return best;
}

int single_loop(auto& v)
{
    auto best = 0;
    auto sum = 0;
    for(auto i = v.begin(); i != v.end(); i++)
    {
        sum = max(*i, (*i)+sum);
        best = max(best, sum);
    }
    return best;
}

int main()
{
    vector<int> v = {-1, 2, 4, -10, 2, 2, 3, 2, -1, 4, 1};
    cout << "Largest subarray sum using triple loop = " <<
        triple_loop(v) << endl;
    cout << "Largest subarray sum using double loop = " <<
        double_loop(v) << endl;
    cout << "Largest subarray sum using single loop = " <<
        single_loop(v) << endl;

    return 0;
}
