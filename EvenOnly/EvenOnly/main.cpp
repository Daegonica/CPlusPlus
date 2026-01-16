#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	
	srand(time(nullptr));

	int rollAmount = 1;

	while (rollAmount <= 10)
	{
		int roll = rand() % 6 + 1;

		cout << "Side: " << roll << endl;
		cout << "Rolls Left: " << rollAmount << endl;
		rollAmount++;
	}


	for (int count = 0; count < 10; count++) {

		if (count % 2 == 0) {
			cout << count << endl;
		}
		else
		{
			cout << "Not even" << endl;
		}

	}




	return 0;
}