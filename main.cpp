#include "catch.hpp"
#include <iostream>
#include <string>

using namespace std;
int main ()
{
    for(int i = 1; i <= 100; i++)
    {
        cout<<"test"<< endl;       
    }
    
    for (int o = 1; o < 3; o++)
    {
        string test1 = to_string(o);
        cout << test1 << endl;
    }
    
    return 0;
}
