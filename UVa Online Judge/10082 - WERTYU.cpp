#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <map>
#include <math.h>
#include <cstdio>
#include <vector>
#include <climits>
using namespace std;
int main()
{
	char ch[10000];
	while (cin.getline(ch, 10000))
	{
		for (size_t i = 0; ch[i]; i++)
		{
			if (ch[i] == '1')
				cout << '`';
			else if (ch[i] == '2')
				cout << '1';
			else if (ch[i] == '3')
				cout << '2';
			else if (ch[i] == '4')
				cout << '3';
			else if (ch[i] == '5')
				cout << '4';
			else if (ch[i] == '6')
				cout << '5';
			else if (ch[i] == '7')
				cout << '6';
			else if (ch[i] == '8')
				cout << '7';
			else if (ch[i] == '9')
				cout << '8';
			else if (ch[i] == '0')
				cout << '9';
			else if (ch[i] == '-')
				cout << '0';
			else if (ch[i] == '=')
				cout << '-';
			else if (ch[i] == 'W')
				cout << 'Q';
			else if (ch[i] == 'E')
				cout << 'W';
			else if (ch[i] == 'R')
				cout << 'E';
			else if (ch[i] == 'T')
				cout << 'R';
			else if (ch[i] == 'Y')
				cout << 'T';
			else if (ch[i] == 'U')
				cout << 'Y';
			else if (ch[i] == 'I')
				cout << 'U';
			else if (ch[i] == 'O')
				cout << 'I';
			else if (ch[i] == 'P')
				cout << 'O';
			else if (ch[i] == '[')
				cout << 'P';
			else if (ch[i] == ']')
				cout << '[';
			else if (ch[i] == '\\')
				cout << ']';
			else if (ch[i] == 'S')
				cout << 'A';
			else if (ch[i] == 'D')
				cout << 'S';
			else if (ch[i] == 'F')
				cout << 'D';
			else if (ch[i] == 'G')
				cout << 'F';
			else if (ch[i] == 'H')
				cout << 'G';
			else if (ch[i] == 'J')
				cout << 'H';
			else if (ch[i] == 'K')
				cout << 'J';
			else if (ch[i] == 'L')
				cout << 'K';
			else if (ch[i] == ';')
				cout << 'L';
			else if (ch[i] == '\'')
				cout << ';';
			else if (ch[i] == 'X')
				cout << 'Z';
			else if (ch[i] == 'C')
				cout << 'X';
			else if (ch[i] == 'V')
				cout << 'C';
			else if (ch[i] == 'B')
				cout << 'V';
			else if (ch[i] == 'N')
				cout << 'B';
			else if (ch[i] == 'M')
				cout << 'N';
			else if (ch[i] == ',')
				cout << 'M';
			else if (ch[i] == '.')
				cout << ',';
			else if (ch[i] == '/')
				cout << '.';
			else if (ch[i] == ' ')
				cout << ' ';
			else if (ch[i] == '\n')
				cout << '\n';
			else
				cout << ' ';
		}
		cout << endl;
	}
	return 0;
}