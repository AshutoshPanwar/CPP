#include<iostream>
using namespace std;

void First(int n)
{
    int temp=0;
    while (n > 9)
    {
        n = n / 10;
    }
    cout << n;
}

int main()
{
    int n;
    cin >> n;
    First(n);
    return 0;
}