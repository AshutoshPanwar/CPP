#include<iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int even = 0, odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2 == 0)
        {
            ++even;
        }
        else{
            ++odd;
        }
    }
    cout << odd << " " << even;
    return 0;
}