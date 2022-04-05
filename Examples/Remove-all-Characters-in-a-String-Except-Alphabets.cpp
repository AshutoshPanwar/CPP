#include <iostream>
using namespace std;

int main(){
	char line[100], alphaline[100];
	cout << "Enter a string: ";
	int j=0;
	cin.getline(line, 100);

	for (int i = 0; line[i] != '\0'; ++i)
	{
		if ((line[i] >= 'a' && line[i] <= 'z') || (line[i] >= 'A' && line[i] <= 'Z'))
		{
			alphaline[j++] = line[i];
		}
	}

	cout << "Output String: " << alphaline;
	return 0;
}