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
	int B[3], G[3], C[3];
	while (cin >> B[0] >> G[0] >> C[0] >> B[1] >> G[1] >> C[1] >> B[2] >> G[2] >> C[2])
	{
		long long int min = 9999999999, sum;
		string ch;
		//BCG
		sum = C[0] + G[0] + B[1] + G[1] + B[2] + C[2];
		if (sum < min) {
			min = sum;
			ch = "BCG";
		}
		//BGC
		sum = C[0] + G[0] + B[1] + C[1] + B[2] + G[2];
		if (sum < min)
		{
			min = sum;
			ch = "BGC";
		}
		//CBG
		sum = B[0] + G[0] + C[1] + G[1] + B[2] + C[2];
		if (sum < min)
		{
			min = sum;
			ch = "CBG";
		}
		//CGB
		sum = B[0] + G[0] + B[1] + C[1] + G[2] + C[2];
		if (sum < min)
		{
			min = sum;
			ch = "CGB";
		}
		//GBC
		sum = C[0] + B[0] + C[1] + G[1] + B[2] + G[2];
		if (sum < min)
		{
			min = sum;
			ch = "GBC";
		}
		//GCB
		sum = C[0] + B[0] + B[1] + G[1] + G[2] + C[2];
		if (sum < min)
		{
			min = sum;
			ch = "GCB";
		}
		cout << ch << " " << min << endl;
	}
	return 0;
}