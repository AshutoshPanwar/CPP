#include<iostream>
using namespace std;

#define MULTI(a,b) (a*b)        // macro is a piece of code in a program that is replaced by the value of the macro

int main()
{
    int a=5, b=6;
    cout << MULTI(a,b);         // marco called
    return 0;
}