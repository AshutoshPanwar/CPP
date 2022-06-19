#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i-1] > arr[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {90, 80, 100, 70, 40, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    string res = isSorted(arr,5) ? "True" : "False";
    cout << res;
    // cout << isSorted(arr, n);
    return 0;
}