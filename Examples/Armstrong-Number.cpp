#include <iostream>
#include <cmath>
using namespace std;

int main(){	
	int num, temp, n=0, remainder, result=0;
	cout << "Enter an integer: ";
	cin >> num;

	temp = num;

	while(temp != 0){
		temp = temp / 10;
		++n;
	}
	temp = num;

	while(temp != 0){
		remainder = temp % 10;
		result = result + pow(remainder, n);
		temp = temp / 10;
	}
	
	if (num == result)		
	{
		cout << num << " is an Armstrong number.";
	}else{
		cout << num << " is not an Armstrong number.";
	}

	return 0;
}