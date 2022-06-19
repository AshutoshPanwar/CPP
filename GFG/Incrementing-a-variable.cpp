#include<iostream>
using namespace std;

int updateVar(int n)
{
    int res = n + 10;
    return res;
}

int main()
{
    int num;
    cin >> num;
    cout << updateVar(num);
    return 0;
}