#include <iostream>
using namespace std;

int main(){
	int row, col, arr1[100][100], trans[100][100];
	cout << "Enter number of rows (between 1 and 100): ";
	cin >> row;
	cout << "Enter number of columns (between 1 and 100): ";
	cin >> col;

	cout << "Enter elements of in matrix:" << endl;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << "Enter element of a" << i+1<< j+1 << " = " ;
			cin >> arr1[i][j];
		}
	}
	

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << arr1[i][j] << " ";
			if (j == col - 1)
			{
				cout << endl << endl;
			}
		}
	}

	
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			
			trans[j][i] = arr1[i][j];
		}
	}
	cout << endl << "TransPose of two matrix is: " << endl;
	for (int i = 0; i < col; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << trans[i][j] << " ";
			if (j == row - 1)
			{
				cout << endl << endl;
			}
		}
	}


	return 0;
}