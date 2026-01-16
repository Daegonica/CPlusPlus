#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int blankArray[ARRAY_SIZE];


	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		blankArray[i] = i + 1;
	}


	for (int i : blankArray)
	{
		cout << i << endl;
	}

	return 0;
}