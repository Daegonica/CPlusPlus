#include "main.h"
#include <iostream>

int main()
{
	int height{ setHeight() };

	int time{ 0 };
	while (time < 6)
	{
		double fallen{ dropBall(time) };
		if ((height - fallen) > 0) 
		{
			std::cout << "At " << time << " seconds, the ball is at height: " << (height - fallen) << " meters\n";
		}
		else
		{
			std::cout << "At " << time << " seconds, the ball has hit the ground!\n";
		}
		time = time + 1;
	}

	// Call out how far the ball has gone in 1, 2, 3, 4, 5 seconds. Announce if it hits the ground at any point in the 5 seconds.

	return 0;
}