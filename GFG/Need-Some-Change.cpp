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
    
    for (int i = 0; i < size-2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[i+2];
        arr[i+2] = temp;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}