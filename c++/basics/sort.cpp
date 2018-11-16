#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print_vector(auto& v)
{
    for(auto i : v)
    {
        cout << i << ",";
    }
}

int main()
{
    vector<int> v = { 10, 3, 2, 23, 16, 4, 6, 8, 2, 3};

    cout << "Before sorted: ";
    print_vector(v);
    cout << endl;
    sort(v.begin(), v.end());
    cout << "After sorted: ";
    print_vector(v);
    cout << endl;
    return 0;
}


