#include <iostream>
#include <cmath>
using namespace std;

int main(){	
	int num1, num2, temp, n=0, remainder, result=0;
	cout << "Enter an integer: ";
	cin >> num1 >> num2;

	for (int i = num1; i <= num2; ++i)
	{
		
	
	temp = i;
	n = 0;

	while(temp != 0){
		temp /= 10;
		++n;
	}
	temp = i;
	result = 0;

	while(temp != 0){
		remainder = temp % 10;
		result = result + pow(remainder, n);
		temp /= 10;
	}
	
	if (i == result)		
	{
		cout << i << " ,";
	}
	
}
	return 0;
}