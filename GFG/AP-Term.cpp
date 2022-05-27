#include<iostream>
using namespace std;
int main()
{
    int a, d, n;
    cin >> a >> d >> n;
    cout << a + (n-1)*d;        // simple formula of ap to find nth term
    return 0;
}