#include <iostream>
using namespace std;

int main(){
	int row, col, arr1[100][100], arr2[100][100], sum[100][100];
	cout << "Enter number of rows (between 1 and 100): ";
	cin >> row;
	cout << "Enter number of columns (between 1 and 100): ";
	cin >> col;

	cout << "Enter elements of 1st matrix:" << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << "Enter element of a" << i+1<< j+1 << " = " ;
			cin >> arr1[i][j];
		}
	}
	cout << "Enter elements of 2st matrix:" << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << "Enter element of b" << i+1<< j+1 << " = " ;
			cin >> arr2[i][j];
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	cout << endl << "Sum of two matrix is: " << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			
			cout << sum[i][j] << " ";
			if (j == col-1)
			{
				cout << endl;
			}
		}
	}


	return 0;
}