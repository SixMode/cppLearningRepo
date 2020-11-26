#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //basic for loop
    int i {0};
    
    for (i = 1; i <= 5; ++i)
    {
        cout << i << endl;
    }
    
    //for loop practice
    for (int i(1); i <= 10; i += 2)
    {
        cout << i << endl;
    }
    
    for (int i{10}; i > 0; --i)
    {
        cout << i << endl;
    }
    
    for (int i{10}; i <= 100; i += 10)
    {
        if (i % 15 == 0)
        {
        cout << i << endl;
        }
    }
    
    for (int i{1}, j{5}; i <= 5; ++i, ++j)
    {
        cout << i << " + " << j << " = " << (i + j) << endl;
    }
    
    for (int i {1}; i <= 100; ++i)
    {
        cout << i;
        if (i % 10 == 0)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }
    
    vector<int> nums {10, 20, 30, 40, 50};
    for (unsigned int i{0}; i < nums.size(); ++i)
    {
        cout << nums[i] << endl;
    }
    return 0;
}
