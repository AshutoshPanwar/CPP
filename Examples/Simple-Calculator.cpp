#include <iostream>
using namespace std;

int main(){
	char ope;
	float num1, num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> ope;
	cout << "Enter two numbers: " << endl;
	cin >> num1 >> num2;

	switch(ope){
    case '+':
    	cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;
    case '-':
    	cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;
    case '*':
    	cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;
    case '/':
    	cout << num1 << " / " << num2 << " = " << num1 / num2;
        break;
    default:
    	cout << "Error! The operator is not correct." << endl;
    	break;
}


	return 0;
}