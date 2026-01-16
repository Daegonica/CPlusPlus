#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
	vector<int> someVec;
	vector<string> anotherVec(3);

	someVec.push_back(1);                  //Adds to the end of the Vector
	someVec.push_back(2);                  //This creates and places a element there
	someVec.push_back(3);

	cout << "someVec size: " << someVec.size() << endl;

	anotherVec[0] = "John";                  //This is to be used if you already know the Vector size
	anotherVec[1] = "Bob";
	anotherVec[2] = "Sally";

	anotherVec.push_back("Shannon");

	for (int val : someVec)
	{
		cout << val << endl;
	}

	cout << endl;

	for (string name : anotherVec)
	{
		cout << name << endl;
	}

	cout << endl;

	cout << "Front and Back: " << anotherVec.front() << ", " << anotherVec.back() << endl;
	
	anotherVec.pop_back();                                               //Removes end element
	anotherVec.insert(anotherVec.begin(), "Don");       //Adds to front of element

	cout << endl;

	cout << "Now Front is " << anotherVec.front() << endl;
	cout << "Now Back is " << anotherVec.back() << endl;

	return 0;
}