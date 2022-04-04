#include <iostream>
using namespace std;

void reverse(const string& a);

int main(){
	string str;
	
	cout << "Enter a sentence: " << endl;
	getline(cin, str);

	// Function Call
	reverse(str);

	return 0;
}

void reverse(const string& str){
	int numOfChars = str.size();
	if (numOfChars == 1)
	{
		cout << str << endl;
	}else{
		cout << str[numOfChars - 1];
		reverse(str.substr(0, numOfChars - 1));
	}

}