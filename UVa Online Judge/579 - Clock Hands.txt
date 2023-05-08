#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double minute, hour, angle, hourAng, minuteAng;
	char dots;
	while (true)
	{
		cin >> hour >> dots >> minute;
		if (hour == 0 && minute == 0)
			break;
		minuteAng = minute * 6;
		hourAng = hour * 30 + (minute / 60) * 30;
		angle = (hourAng - minuteAng);
		if (angle < 0)
		{
			angle *= -1;
		}
		if (angle > 180)
		{
			angle = 360 - angle;
		}
		cout << setprecision(3) << fixed << angle << endl;
	}
	return 0;
}