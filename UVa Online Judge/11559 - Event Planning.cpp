#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
	int N, B, H, W, p, a, b;
	while (cin >> N >> B >> H >> W)
	{
		a = B - 1;
		for (int i = 0; i < H; i++)
		{
			cin >> p;
			b = 0;
			for (int j = 0; j < W; j++)
			{
				int x;
				cin >> x;
				b = max(b, x);
			}
			if (b >= N)
				a = min(a, N * p);
		}
		if (a == B - 1)
			cout << "stay home" << endl;
		else
			cout << a << endl;
	}
	return 0;
}