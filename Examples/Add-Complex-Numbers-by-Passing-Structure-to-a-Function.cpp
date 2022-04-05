#include <iostream>
using namespace std;

typedef struct complex{
	float real;
	float imag;
}complexNumber;

complexNumber addComplexNumbers(complex, complex);

int main(){
	complexNumber num1, num2 , complexSum;
	cout << "For 1st complex number, ";
	cout << "Enter real and imaginary parts respectively: ";
	cin >> num1.real >> num1.imag;

	cout << "For 2nd complex number, ";
	cout << "Enter real and imaginary parts respectively: ";
	cin >> num2.real >> num2.imag;

	complexSum = addComplexNumbers(num1, num2);
	cout << "Sum = " << complexSum.real << complexSum.imag << "i";
	return 0;
}

complexNumber addComplexNumbers(complex n1, complex n2){
	complex temp;
	temp.real = n1.real + n2.real;
	temp.imag = n1.imag + n2.imag;
	return temp;
};

