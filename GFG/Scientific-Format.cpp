#include<iostream>
using namespace std;
int main()
{
    double a;
    cin >> a;
    cout.precision(4);
    cout << scientific << a;        // Using predefined scientific library
    return 0;
}