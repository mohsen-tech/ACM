#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	long long int n;
	while (cin >> n && n)
	{
		if (floor(sqrt(n)) == ceil(sqrt(n)))
			cout << "yes\n";
		else
			cout << "no\n";
	}
	return 0;
}