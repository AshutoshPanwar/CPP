#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = 1; i < 11; i++)
    {
        cout << (num1 * i) - (num2 * i) << " ";
    }
    
    return 0;
}