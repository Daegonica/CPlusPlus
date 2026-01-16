#include<iostream>                    //Gives access to the library
#include<string>
#include<iomanip>

using namespace std;                  //Specifies what name space using for future variables.

/*
  Local Operands is && (and) || (or) ! (not)

  Common practices: Use camelCase when using regular Variables.
									  Use SNAKE_CASE when using const Variables.


  getline(cin, variable); Gets a fill line of text before hitting enter
  cin; gets one word/number/letter when used by itself.

  If you use getline after a basic cin the following getline won't work. Need to place cin.get(); right after the basic cin so that the blank spaces gets consumed without being used in the following getline() func
*/


int main() {                                      //Basic Main initiation for all applications

	string myString = "Does this work?";

	double myDouble = 3.14;
	int myInt = 3;

	double myNum = 10;

	int myAge = 34;

	bool myBool = false;

	cout << "Let's try to be IronMan!\n";
	cout << "At least you fully figured out the beginning part of all this.\n";
	cout << myString << endl;
	
	cout << "Double: " << myDouble << ". Int: " << myInt << endl;

	cout << boolalpha; //Allows you to access the true/false nature of a bool.
	cout << myBool << endl;

	cout << "Original: " << myNum << endl;
	myNum += 5;
	cout << "Plus 5: " << myNum << endl;
	myNum *= 2;
	cout << "Double: " << myNum << endl;
	myNum *= 2;
	cout << "Triple: " << myNum << endl;
	myNum *= 2;
	cout << "Quadruple: " << myNum << endl;

	cout << (myAge >= 21) << endl;


	return 0;                                     //Just let's the program know everything went okay.
}