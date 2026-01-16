#include <iostream>
using namespace std;

int main()
{
	//Good attempt, but waste of memory setting all these variables. Set a universal set that gets set per if statement.
	int packACost = 8;
	int packAJams = 2;
	int packAAddit = 5;

	int packBCost = 12;
	int packBJams = 4;
	int packBAddit = 4;

	int packCCost = 15;
	int packCJams = 6;
	int packCAddit = 3;

	char custPack;
	int custAmount;

	cout << "Greetings, what Package did you choose?" << endl;
	cin >> custPack;
	cout << "How many jams from your: " << custPack << " Package, did you buy?" << endl;
	cin >> custAmount;

	if (custPack == 'a' || custPack == 'A')
	{
		if (custAmount <= packAJams)
		{
			cout << "Congratulations! You are within your limit. Your amount owed is: " << packACost << endl;
		}
		else
		{
			cout << "I'm sorry, but you have gone beyond your limt. The new cost is: " << (((custAmount - packAJams) * packAAddit)  + packACost) << endl;
		}
	}

	else if (custPack == 'b' || custPack == 'B')
	{
		if (custAmount <= packBJams)
		{
			cout << "Congratulations! You are within your limit. Your amount owed is: " << packBCost << endl;
		}
		else
		{
			cout << "I'm sorry, but you have gone beyond your limt. The new cost is: " << (((custAmount - packBJams) * packBAddit) + packBCost) << endl;
		}
	}

	else if (custPack == 'c' || custPack == 'C')
	{
		if (custAmount <= packCJams)
		{
			cout << "Congratulations! You are within your limit. Your amount owed is: " << packCCost << endl;
		}
		else
		{
			cout << "I'm sorry, but you have gone beyond your limit. The new cost is: " << (((custAmount - packCJams) * packCAddit) + packCCost) << endl;
		}
	}

	return 0;
}