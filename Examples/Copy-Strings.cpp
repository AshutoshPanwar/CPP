#include <iostream>
using namespace std;

int main(){
	string str1, str2;

	cout << "Enter string s1: ";
	getline(cin, str1);
	cout << "Str1: " << str1 << endl;
	str2 = str1;
	cout << "Str2: "<< str2 << endl;
	return 0;
}