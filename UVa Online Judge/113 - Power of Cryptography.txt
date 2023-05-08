#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int exp;
	long double num;

	while (cin >> exp >> num)
	{
		cout << setprecision(0) << fixed << pow(num, 1.0L / exp) << endl;
	}
	return 0;
}