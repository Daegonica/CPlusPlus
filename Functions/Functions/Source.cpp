#include <iostream>

using namespace std;

//Function prototype. Declaring a function.
void printSomething();

//In order to change a Variable outside a function you must point to the variable
void changeVariable(int& num);

//Good way to change a variable outside a function while calling on another variable.
void enterNumber(int input, int& output);

int main()
{

	int originalNum = 19;

	int myInputNum = 25;

	enterNumber(myInputNum, myInputNum);

	cout << "Number Starts at: " << originalNum << endl;
	changeVariable(originalNum);
	cout << "Now its at: " << originalNum << endl;

	cout << endl << endl;

	cout << myInputNum << endl;

	printSomething();

	return 0;
}

//Function definition.
void printSomething()
{
	cout << "Hey! Look I'm here!" << endl;
}

void changeVariable(int& num)
{
	num = 89;
}

void enterNumber(int input, int& output)
{
	output = input * 3;
}