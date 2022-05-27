#include<iostream>
using namespace std;
int main()
{
    int num, res = 0;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        res += i;
    }
    cout << res;
    return 0;
}