#include <iostream>
using namespace std;

class Check
{
private: 
	int i;
public:
	Check(): i(0) { };

	void Display(){
		cout << "i = " << i << endl;
	}

	void operator ++(){
		++i;
	}
	
	void operator --(){
		--i;
	}
	
};

int main(){
	Check obj;

	obj.Display();

	++obj;

	obj.Display();

	--obj;

	obj.Display();
	return 0;
}