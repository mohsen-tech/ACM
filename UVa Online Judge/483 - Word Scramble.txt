#include <iostream>
#include<string>
#include <iostream>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	string s;
	int space;
	while (getline(cin, s))
	{
		istringstream is(s);
		space = 0;
		while (is >> s)
		{
			if (space)
				cout << " ";
			space = 1;
			for (int i = s.size() - 1; i >= 0; i--)
				cout << s[i];
		}
		cout << endl;
	}
	return 0;
}