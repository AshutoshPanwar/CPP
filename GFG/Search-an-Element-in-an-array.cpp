#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5};
    int key = 5;
    int size = sizeof(arr)/sizeof(arr[0]);
    int res=-1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            res = i;
        }
    }
    cout << res;
    return 0;
}