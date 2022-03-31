#include <iostream>
using namespace std;

int main(){
	int num1, num2, temp;
	bool is_prime = true;

	cout << "Enter two numbers (intervals): ";
	cin >> num1 >> num2;

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << "Prime number between " << num1 << " and " << num2 << " are: ";

	for (int i = num1+1; i <= num2-1; ++i)
	{
		if (i == 0 || i == 1)
		{
			continue;
		}

		is_prime = true;

		for (int j = 2; j <= i/2; ++j)
		{
			if (i % j == 0)
				{
					is_prime = false;
					break;
				}	
		}

		if (is_prime)
		{
			cout << i << ", ";
		}
	}

	

	return 0;
}