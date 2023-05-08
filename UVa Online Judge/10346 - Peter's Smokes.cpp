#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		cout << a + (a - 1) / (b - 1) << endl;
	}
	return 0;
}