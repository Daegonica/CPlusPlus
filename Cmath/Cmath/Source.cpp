#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double powResult = pow(2, 3);
	double sqrtResult = sqrt(25);
	double ceilResult = ceil(4.2);
	double floorResult = floor(4.2);

	//How many powers of 2 to get to 512
	double param, result;
	param = 512;
	result = log2(param);

	cout << result << endl;

	cout << "2^3 is " << powResult << endl;
	cout << "sqrt of 25 is " << sqrtResult << endl;
	cout << "ceiling of 4.2 is " << ceilResult << endl;
	cout << "floor of 4.2 is " << floorResult << endl;




	return 0;
}