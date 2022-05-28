#include<iostream>
using namespace std;

void myCalculator(int opt, int x , int y)
{
    switch (opt)        // Simple calculator
    {
    case 1:
        cout << x + y;
        break;
    case 2:
        cout << x - y;
        break;
    case 3:
        cout << x * y;
        break;
    default:
        cout << "Invalid Input";
        break;
    }
}

int main()
{
    int opt, x , y;
    cin >> x >> y >> opt;
    myCalculator(opt, x, y);        // Function calling
    return 0;
}