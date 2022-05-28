#include<iostream>
using namespace std;

int sum(int a = 0, int b = 0, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
     // Statement 1
    cout << sum(10, 15) << endl;
    // Statement 2
    cout << sum(10, 15, 25) << endl;
    // Statement 3
    cout << sum(10, 15, 25, 30) << endl;
    return 0;
}