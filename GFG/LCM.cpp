#include<iostream>
using namespace std;

void LCM(int a, int b)
{
    for (int i = a; i <= a*b; i++)
    {
        if ((i%a == 0) && (i%b == 0))
        {
            cout << i << endl;
            break;
        }
    }
}

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    LCM(a,b);
    return 0;
}