#include<iostream>
using namespace std;

void evenOdd(int a, int b)
{
    if (a % 2 == 0)
    {
        cout << a << " " << b << endl;      // Printing even no first
    }
    else{
        cout << b << " " << a << endl;      // Printing even no first
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    evenOdd(a, b);
    return 0;
}