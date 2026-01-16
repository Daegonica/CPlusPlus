#include <iostream>
using namespace std;

int main()
{

	int age;
	char grade;
	int count = 0;

	cout << "Welcome to the Pub and Grille!" << endl;
	cout << "Please enter your age" << endl;
	cin >> age;

	//Sequential Control is just cout, cin, and variables. No if's or whiles.

	//Selection Control
	//Basic If statement
	if (age >= 21) {
		cout << "Here, have a beer" << endl;
	}
	else if (age >= 16) {
		cout << "At least you can drive!" << endl;
		cout << "Here have a coke!" << endl;
	}
	else
	{
		cout << "Here have a coke!" << endl;
	}

	cout << "Thanks for coming to the Pub and Grille!" << endl;

	cout << "Please enter a letter grade" << endl;
	cin >> grade;

	//Basic Switch statement
	switch (grade)
	{
	case 'A':
	case 'a':
		cout << "Great job!" << endl;
		break;
	case 'B':
	case 'b':
		cout << "Good job!" << endl;
		break;
	case 'C':
	case 'c':
		cout << "You can do better!" << endl;
		break;
	case 'D':
	case 'd':
		cout << "You are getting close to failing!" << endl;
		break;
	case 'F':
	case 'f':
		cout << "You have failed!" << endl;
		break;
	default:
		cout << "You have entered an invalid grade!" << endl;
	}
	
	//Repetition Control
	//Basic While loop. Better for non-counter related loops
	//This will always check before doing the function
	while (count < 10) {
		cout << count << endl;
		count++;
	}

	count = 10;
	//Basic Do While loop
	//These are for sure going to fire off the first condition, then check the next.
	do 
	{
		cout << count << endl;
		count++;
	} while (count < 10);

	//Basic For Loop. Best for counters
	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	return 0;
}