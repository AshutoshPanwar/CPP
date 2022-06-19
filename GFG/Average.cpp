#include<iostream>
using namespace std;
int main()
{
    int arr[] = {-12, 8, -7, 6, 12, -9, 14};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = 0, n = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            res += arr[i];
            ++n;
        }
    }
    float avg = res / n;
    cout << res << "/" << n << " = " << avg;
    return 0;
}