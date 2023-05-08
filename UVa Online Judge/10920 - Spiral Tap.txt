#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	long long int SZ, P;
	while (cin >> SZ >> P && (SZ && P))
	{
		int line, column;
		if (P == 1)
		{
			column = line = SZ / 2 + 1;
		}
		else
		{
			int s = sqrt(P);
			if (s % 2 == 0)
				s++;
			else if (s*s != P && s % 2 == 1)
				s += 2;
			line = column = SZ / 2 + 1;
			line += s / 2;
			column += s / 2 - 1;
			P -= (s - 2)*(s - 2) + 1;
			column -= (P <= (s - 2)) ? P : (s - 2);
			P = (P <= (s - 2)) ? 0 : (P - s + 2);
			line -= (P <= (s - 1)) ? P : (s - 1);
			P = (P <= (s - 1)) ? 0 : (P - s + 1);
			column += (P <= (s - 1)) ? P : (s - 1);
			P = (P <= (s - 1)) ? 0 : (P - s + 1);
			line += (P <= (s - 1)) ? P : (s - 1);
			P = (P <= (s - 1)) ? 0 : (P - s + 1);
		}
		cout << "Line = " << line << ", column = " << column << ".\n";
	}
	system("pause>0");
	return 0;
}