#include<iostream>
using namespace std;

void compareFive(int n)
{
    if (n > 5)
    {
         cout << "Greater than 5";
    }
    else if (n < 5)
    {
        cout << "Less than 5";
    }
    else
    {
        cout << "is Equal to 5";
    }
}

int main()
{
    int num;
    cin >> num;
    compareFive(num);
    return 0;
}