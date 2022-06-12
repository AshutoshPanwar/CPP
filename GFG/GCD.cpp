#include<iostream>
using namespace std;

int GCD(int a, int b)
{
    int gcd=0;
    for (int i = 1; i < b; i++)
    {
        if ((a%i == 0) && (b%i == 0))
        {
            gcd = i;
        }
    }
    return gcd;
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    cout << GCD(a, b);
    return 0;
}