#include<iostream>
using namespace std;

int main(){
	char ch;

	cout << "Enter an alphabet: ";
	cin >> ch;

	if (ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' || ch =='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U')
	{
		cout << ch << " is a Vowel";
	}else if (!isalpha(ch))
	{
		cout << "Error! Non-alphabetic character.";
	}else{
		cout << ch << " is a consonant";
	}



	return 0;
}