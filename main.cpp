#include "catch.hpp"
#include <iostream>
#include <string>

using namespace std;
int main ()
{
    
    for (int o = 1; o < 3; o++)
    {
        string test1 = to_string(o);
        cout << test1 << endl;
    }
    int input = 3;
    if(input == 3)
    {
        cout << "Fizz" << endl;
    }
    
    return 0;
}
