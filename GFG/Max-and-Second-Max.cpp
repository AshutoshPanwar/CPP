#include<iostream>
using namespace std;
int main()
{
    int arr[50];
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0], secondMax=-1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != max)
        {
            if (secondMax == -1)
            {
                secondMax = arr[i];
            }
            else if (arr[i] >> secondMax)
            {
                secondMax = arr[i];
            }
        }
    }

    cout << max << " " << secondMax;
    return 0;
}