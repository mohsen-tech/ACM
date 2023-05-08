#include <iostream>
#include <string>
using namespace std;
int main()
{
	double H, U, D, F;
	while (cin >> H >> U >> D >> F && H != 0)
	{
		double feet = 0, fatigueFactor = U * (F / 100);
		int day = 1;
		while (true)
		{
			feet += U;
			if (U > 0)
				U -= fatigueFactor;
			if (feet > H)
				break;
			feet -= D;
			if (feet < 0)
				break;
			day++;
		}
		if (feet < 0)
			cout << "failure on day " << day << "\n";
		else
			cout << "success on day " << day << "\n";
	}
	system("pause>0");
	return 0;
}