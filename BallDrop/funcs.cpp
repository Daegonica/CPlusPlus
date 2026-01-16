#include "main.h"
#include <iostream>


double dropBall(int t)
{
	const double GRAVITY{ 9.8 };
	double fallen{ GRAVITY * (t * t) / 2 };

	return fallen;
}

int setHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	int height = {};
	std::cin >> height;

	return height;
}