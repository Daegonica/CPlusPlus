#include <iostream>
#include <array>

using namespace std;

int main()
{

	//An array that gets init'd in a for loop with 10 slots multiples of 2 0-9 inclusive.

	array<int, 10> twiceNumbers;

	for (int i = 0; i < twiceNumbers.size(); i++)
	{
		twiceNumbers[i] = i * 2;
	}

	for (int i : twiceNumbers)
	{
		cout << i << endl;
	}

	return 0;

}