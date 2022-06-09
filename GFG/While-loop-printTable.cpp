#include<iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    // for (int i = 10; i > 0; i--)
    // {
    //     cout << num * i << " ";
    // }
    int i = 10;
    while (i > 0)
    {
        cout << num*i << " ";
        i--;
    }
    
    return 0;
}