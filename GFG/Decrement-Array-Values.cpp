#include<iostream>
using namespace std;
int main()
{
    int arr[50], size, pos, elem;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] - 1;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}