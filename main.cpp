#include "catch.hpp"
#include <iostream>

using namespace std;
int main ()
{
    for(int i = 1; i <= 100; i++)
    {
        if(i % (2+1) == 0) {
            cout<<"test"<< endl;;
        };       
    }
    return 0;
}
