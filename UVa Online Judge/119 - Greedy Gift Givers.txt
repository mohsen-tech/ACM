#include <iostream>
#include <string>
using namespace std;
struct Friend
{
	string name;
	int val = 0;
};
int main()
{
	int n;
	bool endL = false;
	while (cin >> n)
	{
		if (endL)
		{
			cout << "\n";
		}
		endL = true;
		Friend friends[11];
		for (size_t i = 0; i < n; i++)
		{
			cin >> friends[i].name;
		}
		for (size_t j = 0; j < n; j++)
		{
			string hadieDahande;
			int valHadie, m;
			cin >> hadieDahande >> valHadie >> m;
			if (m)
			{
				for (size_t k = 0; k < m; k++)
				{
					string hadieGirande;
					cin >> hadieGirande;
					for (size_t l = 0; l < n; l++)
					{
						if (friends[l].name == hadieGirande)
						{
							friends[l].val += valHadie / m;
							break;
						}
					}
				}
				for (size_t k = 0; k < n; k++)
				{
					if (friends[k].name == hadieDahande)
					{
						friends[k].val -= m * (valHadie / m);
						break;
					}
				}
			}
		}
		for (size_t i = 0; i < n; i++)
		{
			cout << friends[i].name << " " << friends[i].val << "\n";
		}
	}
	system("pause>0");
	return 0;
}