#include<iostream>
using namespace std;

int factorial(int n)
{
    // Naive Method
    // int res = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     res *= i;
    // }
    // return res;

    // Recursive Method
    if (n ==1 | n == 0)
    {
        return 1;
    }
    return n * factorial(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}