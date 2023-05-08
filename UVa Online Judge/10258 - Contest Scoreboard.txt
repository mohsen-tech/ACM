#include <iostream>
#include <string>
#include <sstream>
using namespace std;
struct Team
{
	int Id;
	int time[10] = { 0 };
	bool soal[10] = { false };
	int sumAcc = 0;
	int sumTime = 0;
	bool exist = false;
};
int main()
{
	string str;
	int n;
	int sw = 0;
	cin >> n;
	getline(cin, str);
	getline(cin, str);
	while (n--)
	{
		if(sw==1)
			cout << "\n";
		sw = 1;
		Team team[101];
		int teamNum, ID, timeAcc;
		char L;
		while (getline(cin, str))
		{
			stringstream input(str);
			input >> teamNum >> ID >> timeAcc >> L;
			if (str == "")
				break;
			if (L == 'I')
			{
				if (team[teamNum].soal[ID] != true)
				{
					team[teamNum].Id = teamNum;
					team[teamNum].time[ID] += 20;
					team[teamNum].exist = true;
				}
			}
			else if (L == 'C')
			{
				if (team[teamNum].soal[ID] != true)
				{
					team[teamNum].Id = teamNum;
					team[teamNum].time[ID] += timeAcc;
					team[teamNum].soal[ID] = true;
					team[teamNum].sumAcc++;
					team[teamNum].exist = true;
				}
			}
			else if (L == 'E' || L == 'R' || L == 'U')
			{
				team[teamNum].Id = teamNum;
				team[teamNum].exist = true;
			}
		}
		for (size_t i = 1; i < 101; i++)
		{
			for (size_t j = 1; j < 10; j++)
			{
				if (team[i].exist && team[i].soal[j])
				{
					team[i].sumTime += team[i].time[j];
				}
			}
		}
		for (size_t i = 1; i < 101; i++)
		{
			for (size_t j = 1; j < 101; j++)
			{
				if (team[i].exist)
				{
					if (team[i].sumAcc > team[j].sumAcc)
					{
						swap(team[i], team[j]);
					}
					else if (team[i].sumAcc == team[j].sumAcc  && team[i].sumTime < team[j].sumTime)
					{
						swap(team[i], team[j]);
					}
					else if (team[i].sumAcc == team[j].sumAcc && team[i].sumTime == team[j].sumTime && team[i].Id < team[j].Id)
					{
						swap(team[i], team[j]);
					}
				}
			}
		}
		for (size_t i = 1; i < 101; i++)
		{
			if (team[i].exist)
			{
				cout << team[i].Id << " " << team[i].sumAcc << " " << team[i].sumTime << "\n";
			}
		}
	}
	system("pause>0");
	return 0;
}