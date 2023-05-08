#include <iostream>
#include <iomanip>
#include <string>
#define MAX 1000001
bool dis[1000001];
using namespace std;
int main()
{
	int n, m;
	int cnt = 0;
	while (cin >> n >> m && (n || m))
	{
		cnt++;
		for (size_t i = 0; i < MAX; i++)
			dis[i] = false;
		if (cnt == 55)
		{
			int aaa;
		}

		bool sw = true;
		int a, b, c;
		while (n--)
		{
			cin >> a >> b;
			for (size_t i = a; i < b && sw; i++)
			{
				if (!dis[i])
					dis[i] = true;
				else
					sw = false;
			}
		}
		int o = 0;
		while (m--)
		{
			cin >> a >> b >> c;
			o = 0;
			while (b < MAX && sw)
			{
				for (size_t i = a; i < b && sw; i++)
				{
					if (!dis[i])
						dis[i] = true;
					else
						sw = false;
				}
				a += c;
				b += c;
				if (o == 1)
					break;
				if (b > MAX)
				{
					o = 1;
					b = 1000000;
				}
			}
		}
		if (sw)
			cout << "NO CONFLICT\n";
		else
			cout << "CONFLICT\n";
	}
	return 0;
}