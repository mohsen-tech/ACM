#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	int n, tekrar, number;
	cin >> n;
	while (n--)
	{
		cin >> number >> tekrar;
		for (int i = 0; i < tekrar; i++)
		{
			for (int j = 1; j <= number; j++)
			{
				for (int k = 0; k < j; k++)
				{
					cout << j;
				}
				cout << endl;
			}
			for (int j = number - 1; j >= 1; j--)
			{
				for (int k = 0; k < j; k++)
				{
					cout << j;
				}
				cout << endl;
			}
			if (i != tekrar - 1)
				cout << endl;
		}
		if (n)
			cout << endl;
	}
	return 0;
}