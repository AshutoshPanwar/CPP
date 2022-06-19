#include<iostream>
using namespace std;
int main()
{
    int var;
    cin >> var;
    int *ptr = &var;
    cout << "value at address " << ptr << " is " << *ptr;
    return 0;
}