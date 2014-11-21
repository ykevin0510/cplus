#include <iostream>
#include <cstring>

using namespace std;

class Person {
	char *pName;
	//string *pName;
public :
	Person(char * pN = "no name"){
		cout << "constructing " << pN <<endl;
		pName = new char[strlen(pN) + 1];
		if(pName)
			strcpy(pName, pN);
	}

	~Person(){
		cout << "destructing" << pName << endl;
		delete[] pName;
	}
};

int main()
{
	Person p1("Randy");
	Person p2(p1);
}
