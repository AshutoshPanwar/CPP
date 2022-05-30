#include<iostream>
using namespace std;

void rangeFunction(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n*i << " ";
    }
    
}

int main()
{
    int n;
    cin >> n;
    rangeFunction(n);
    return 0;
}