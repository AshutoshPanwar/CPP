#include<iostream>
using namespace std;

int main(){
	int a=5, b=10, temp=0;

	cout << "Before swapping:" << endl;
	cout << "a = " << a << ", b = " << b << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "After swapping: " << endl;
	cout << "a = " << a << ", b = " << b << endl;

	return 0;
}