#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;

	vector<int> weightVec;
	vector<string> nameVec;

	int tempWeight;
	string tempName;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << "Please enter a name" << endl;
		getline(cin, tempName);

		cout << "Please enter " << tempName << "'s weight" << endl;
		cin >> tempWeight;
		cin.get();

		nameVec.push_back(tempName);
		weightVec.push_back(tempWeight);
		
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << nameVec[i] << " weighs " << weightVec[i] << "lbs" << endl;
	}

	return 0;
}