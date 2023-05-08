#include <iostream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
	int l;
	char s[100000][5];
	while (cin >> l && l)
	{
		for (int i = 0; i < l - 1; i++)
			cin >> s[i];
		string bend = "+x";
		for (int i = 0; i < l - 1; i++)
		{
			if (strcmp(s[i], "+z") == 0)
			{
				if (bend == "+x")
					bend = "+z";
				else if (bend == "-x")
					bend = "-z";
				else if (bend == "+z")
					bend = "-x";
				else if (bend == "-z")
					bend = "+x";
			}
			else if (strcmp(s[i], "-z") == 0)
			{
				if (bend == "+x")
					bend = "-z";
				else if (bend == "-x")
					bend = "+z";
				else if (bend == "+z")
					bend = "+x";
				else if (bend == "-z")
					bend = "-x";
			}
			else if (strcmp(s[i], "+y") == 0)
			{
				if (bend == "+x")
					bend = "+y";
				else if (bend == "-x")
					bend = "-y";
				else if (bend == "+y")
					bend = "-x";
				else if (bend == "-y")
					bend = "+x";
			}
			else if (strcmp(s[i], "-y") == 0)
			{
				if (bend == "+x")
					bend = "-y";
				else if (bend == "-x")
					bend = "+y";
				else if (bend == "+y")
					bend = "+x";
				else if (bend == "-y")
					bend = "-x";
			}
		}
		if (bend == "+x")
			cout << "+x" << endl;
		else if (bend == "-x")
			cout << "-x" << endl;
		else if (bend == "+y")
			cout << "+y" << endl;
		else if (bend == "-y")
			cout << "-y" << endl;
		else if (bend == "+z")
			cout << "+z" << endl;
		else if (bend == "-z")
			cout << "-z" << endl;
	}
	return 0;
}