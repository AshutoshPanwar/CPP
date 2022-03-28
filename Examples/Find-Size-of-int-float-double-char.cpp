#include<iostream>
using namespace std;

int main(){
	char ch;
	int num;
	float f_num;
	double d_num;

	cout << "Size of char: "<< sizeof(ch) << " byte"<< endl;
	cout << "Size of int: " << sizeof(num) << " bytes" <<endl;
	cout << "Size of float: " << sizeof(f_num) << " bytes"<< endl;
	cout << "Size of double: "<< sizeof(d_num) << " bytes";
	return 0;
}