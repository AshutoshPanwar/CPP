// TransPose of a matrix of size n
// Size of matrix must be N*N
// Interchange the row and column

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the matrix size: ";
    cin >> n;
    cout << endl;


    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }


    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Just change the row with column
    cout << endl << "Transpose of Matrix: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}