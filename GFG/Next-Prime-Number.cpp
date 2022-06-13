#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int nextPrime(int n)
{
    bool found = false;
    int Prime = n;
    while (!found)
    {
        ++Prime;
        if (isPrime(Prime))
        {
            found = true;
        }

    }
    return Prime;
}

int main()
{
    int n;
    cin >> n;

    cout << nextPrime(n);
    return 0;
}