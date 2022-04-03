#include <iostream>
using namespace std;

bool check_prime(int);

int main(){
	int num;
	cout << "Enter a positive integer: ";
	cin >> num;

	for (int i = 2; i <= num/2; ++i){
		if (check_prime(i))
		{
			if (check_prime(num-i))
			{
				cout << num << " = " << i << " + " << num-i << endl;
			}
		}
	}
	return 0;
}

bool check_prime(int n){
	bool is_prime = true;

	if (n == 1 || n == 0)	
	{
		is_prime = false;
	}

	for(int i = 2; i <= n/2; ++i){
		if (n%i == 0)	
		{
			is_prime = false;
			break;
		}
	}

	return is_prime;
}
