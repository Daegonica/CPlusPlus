#include <iostream>
#include <vector>

using namespace std;

int main()
{

	vector<int> myVec;
	//cout << myVec.size() << endl;
	int vecAdd;

	do {
		cout << "Enter an interger to add to vector, or a negative integer to quit" << endl;
		cin >> vecAdd;
		if (vecAdd >= 0) 
		{
			myVec.insert(myVec.begin(), vecAdd);
		}
	} while (vecAdd >= 0);

	for (int i : myVec)
	{
		cout << (i * 2) << endl;
	}

	return 0;
}