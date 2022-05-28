#include<iostream>
using namespace std;

int digitalRoot(int n)
{
    int res = 0;
    while (n != 0)                  // Fucntion give sum of all digits of number
    {
        int temp = n % 10;
        res += temp;
        n = n / 10;
    }

    if (res < 9)                    // if resutl is single digit then exit the function
    {
        return res;
    }
    return digitalRoot(res);        // Function calling it-self if result is not a single digit
}

int main()
{
    int n;
    cin >> n;
    cout << digitalRoot(n);
    return 0;
}