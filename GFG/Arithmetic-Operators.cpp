#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    cout << x + y << endl;      // sum(+) operator
    cout << x - y << endl;      // sub(-) operator
    cout << x * y << endl;      // Mul(*) operator
    cout << (float)x / y << endl;      // float div(/) operator
    cout << (int)x / y << endl;     // int div(/) operator
    cout << x % y << endl;      // Mod(%) operator
    cout << pow(x,y) << endl;     // pow() operator
    return 0;
}