#include <iostream>
#include<string>
using namespace std;
int main()
{
	
	char s[1000000];
	while (cin.getline(s, 1000000))
	{
		for (int i = 0; s[i]; i++)
			s[i] -= 7;
		cout << s << endl;
	}

	return 0;
}