#include <iostream>
#include <string>
#include<array>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 5;

	int myArray[ARRAY_SIZE];

	string namesArray[4]{ "Bob", "Sally", "John", "Ed" };


	//Tootie Array
	int myNums[2][3]{
		{1,2,3},
		{4,5,6}
	};//2x3

	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;


	array<int, ARRAY_SIZE> myIntArray{};

	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	cout << "Regular Array(Table)" << endl;
	//Basic Array(Essentially it is what LUA calls a Table. But probably a lot better.)
	//Range based for loop. VA suggested it.
	for (int i : myArray)
	{
		cout << i << endl;
	}

	cout << endl;

	cout << "Array with names" << endl;
	//Range based loop for string. Again VA suggested
	for (auto & name : namesArray)
	{
		cout << name << endl;
	}

	cout << endl;

	cout << "Array class in action" << endl;
	cout << "Array size: " << myIntArray.size() << endl;

	//This is for the Array Class <>
	for (int a : myIntArray)
	{
		cout << a << endl;
	}

	cout << endl;


	cout << "Tootie Array in action" << endl;
	//How to call on the Tootie Array
	cout << myNums[0][2] << endl;

	myNums[1][0] = 14;

	cout << myNums[1][0] << endl;

	//Nested Loop
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

	cout << endl;

	//Reverse print out order
	for (int row = 1; row >= 0; row--)
	{
		for (int col = 2; col >= 0; col--)
		{
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

	return 0;
}