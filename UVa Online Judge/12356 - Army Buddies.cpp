#include <iostream>
using namespace std;
int lefti[100005], righti[100005];
int main()
{
	int s, b;
	while (cin >> s >> b, s || b)
	{
		for (int i = 1; i <= s; i++)
		{
			lefti[i] = i - 1;
			righti[i] = i + 1;
		}
		righti[s] = -1;
		lefti[1] = -1;
		int l, r;
		for (int i = 0; i < b; i++)
		{
			cin >> l >> r;
			lefti[righti[r]] = lefti[l];
			if (lefti[l] != -1)
				cout << lefti[l];
			else
				cout << "*";
			righti[lefti[l]] = righti[r];
			if (righti[r] != -1)
				cout << " " << righti[r] << "\n";
			else
				cout << " *\n";
		}
		cout << "-\n";
	}
	return 0;
}