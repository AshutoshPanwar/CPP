#include<iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int res = N % 10;       // % will give us last digit of no
    cout << res;
    return 0;
}