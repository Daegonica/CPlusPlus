#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{

	const int ARRAY_SIZE = 5;

	int myArray[ARRAY_SIZE];

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter an number" << endl;
		cin >> myArray[i];
	}

	cout << endl;

	for (int i : myArray)
	{
		cout << (i * 2) << endl;
	}


	return 0;
}