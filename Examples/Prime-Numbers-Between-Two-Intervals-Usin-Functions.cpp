#include <iostream>
using namespace std;

int check_prime(int);

int main(){
	int num1, num2, temp;
	bool flag;
	cout << "Enter two positive integers: ";
	cin >> num1 >> num2;

	// Swaping numbers if num1 is greater than num2.
	if(num1 > num2){
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << "Prime numbers between " << num1 << " and " << num2 << " are: " << endl;

	for(int i = num1+1; i < num2; ++i){
		flag = check_prime(i);

		if (flag)
		{
			cout << i << " ,";
		}
	}

	return 0;
}

int check_prime(int n){
	bool is_prime = true;

	if (n == 1 || n == 0)	
	{
		is_prime = false;
	}

	for (int j = 2; j < n/2; ++j)
	{
		if (n % j == 0)
		{
			is_prime = false;
		}
	}

	return is_prime;
}