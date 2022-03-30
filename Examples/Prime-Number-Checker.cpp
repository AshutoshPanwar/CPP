#include <iostream>
using namespace std;

int main(){
	int num1;
	bool is_prime = true;

	cout << "Enter a positive integer: ";
	cin >> num1;

	if (num1 == 1 || num1 == 0)
	{
		is_prime = false;
	}

	for (int i = 2; i < num1; ++i)
	{
		if ((num1 % i) == 0)
		{
			is_prime = false;
			break;
		}else{
			is_prime = true;
		}
	}

	if (is_prime)
	{
		cout << num1 << " is a prime numbe";
	}else{
		cout << num1 << " is a not prime numbe";
	}

	return 0;
}