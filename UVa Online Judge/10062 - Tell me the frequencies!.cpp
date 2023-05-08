#include <cstdio>
#include <iostream>
using namespace std;
struct Sample
{
	int ASCII;
	int cnt;
};
int main() {

	char str[1501];
	int flag = 0;
	while (gets_s(str) != 0)
	{
		if (flag)
			cout << "\n";
		flag++;

		int cnt[1000] = { 0 };
		Sample a[1000] = { 0 };
		for (size_t i = 0; str[i]; i++)
		{
			cnt[str[i]]++;
		}
		int k = 0;
		for (size_t i = 0; i < 1000; i++)
		{
			if (cnt[i])
			{
				a[k].ASCII = i;
				a[k++].cnt = cnt[i];
			}
		}
		for (size_t i = 0; i < k; i++)
			for (size_t j = i + 1; j < k; j++)
				if (a[i].cnt > a[j].cnt)
					swap(a[i], a[j]);
				else if (a[i].cnt == a[j].cnt)
					if (a[i].ASCII < a[j].ASCII)
						swap(a[i], a[j]);

		for (size_t i = 0; i < k; i++)
		{
			cout << a[i].ASCII << " " << a[i].cnt << "\n";
		}
	}
	return 0;
}