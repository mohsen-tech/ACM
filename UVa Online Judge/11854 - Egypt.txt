#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
#include<algorithm>
using namespace std;
int main()
{
	int a, b, c;
	while (cin >> a >> b >> c && a && b && c)
	{
		int aa = a * a, bb = b * b, cc = c * c;
		if ((aa + bb == cc) || (bb + cc == aa) || (cc + aa == bb))
			cout << "right\n";
		else
			cout << "wrong\n";
	}
	return 0;
}