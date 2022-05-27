#include<iostream>
using namespace std;
int main()
{
    int a=10, b=5;

    // Using Temp variable
    // int temp = a;
    // a = b;
    // b = temp;

    // Using Arithmetic Operator
    // a = a + b;
    // b = a - b;
    // a = a - b;

    // Using Bitwise XOR operator
    a = a ^ b;      // a become 15
    b = a ^ b;      // b become 10
    a = a ^ b;      // a become 5

    cout << a << " " << b << endl;
    return 0;
}