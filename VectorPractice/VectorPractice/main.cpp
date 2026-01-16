#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	vector<string> nameArray(5);

	nameArray[0] = "Bob";
	nameArray[1] = "Sue";
	nameArray[2] = "Michael";
	nameArray[3] = "Sally";
	nameArray[4] = "Molly";

	nameArray.insert((nameArray.begin() + 2), "John");

	for (string i : nameArray)
	{
		cout << i << endl;
	}

	cout << endl;

	nameArray.pop_back();

	for (string i : nameArray)
	{
		cout << i << endl;
	}



	return 0;
}