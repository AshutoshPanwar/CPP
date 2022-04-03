#include <iostream>
using namespace std;

int check_prime(int);

int main(){
	int num;
	cout << "Enter a positive  integer: ";
	cin >> num;

	if (check_prime(num))
	{
		cout << num << " is a prime number.";
	}else{
		cout << num << " is not a prime number.";
	}
	return 0;
}

int check_prime(int n){
	bool is_prime = true;

	if (n == 0 || n == 1)
	{
		is_prime = false;
	}

	for (int i = 2; i < n/2; ++i)
	{
		if (n % i == 0)
		{
			is_prime = false;
			break;
		}
	}

	return is_prime;
}