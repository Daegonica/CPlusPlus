#include <iostream>
#include <cmath>
using namespace std;

int factorial(int num);

int main()
{
	int factNum = factorial(6);

	cout << factNum << endl;

	return 0;
}

int factorial(int num)
{
	if (num > 1)
	{
		return num * factorial(num - 1);
	}

	return num;
}