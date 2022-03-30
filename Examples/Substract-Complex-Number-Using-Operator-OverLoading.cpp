#include <iostream>
using namespace std;

class complex{
private:
	float real;
	float imag;
public:
	complex() : real(0) , imag(0) { };

	void input() {
		cout << "Enter real and imaginary parts respectively: ";
		cin >> real >> imag;
	}

	complex operator - (complex c2){
		complex temp;
		temp.real = real - c2.real;
		temp.imag = imag - c2.imag;
		return temp;
	}

	void output(){
		cout << "Output Complex number: " << real << " + " << imag << "i"<< endl;
	}
};

int main(){
	complex c1, c2, result;

	cout << "Enter first complex number: " ;
	c1.input();

	cout << "Enter second complex number: " ;
	c2.input();

	result = c1 - c2;

	result.output();
	return 0;
}