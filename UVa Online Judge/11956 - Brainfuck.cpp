#include <cstdio>
#include <conio.h>
#include <iostream>
#include <iomanip>
#include <string>  
#include <locale> 
using namespace std;
int main()
{
	char input[100001];
	int mem[100];
	int T, current;

	cin >> T;
	for (int t = 1; t <= T; ++t)
	{
		for (int i = 0; i < 100; ++i)
			mem[i] = 0;

		current = 0;
		cin >> input;
		for (int i = 0; input[i]; ++i)
		{
			switch (input[i])
			{
			case '>':
				++current;
				if (current == 100)
					current = 0;
				break;
			case '<':
				--current;
				if (current == -1)
					current = 99;
				break;
			case '+':
				++mem[current];
				if (mem[current] == 256)
					mem[current] = 0;
				break;
			case '-':
				--mem[current];
				if (mem[current] == -1)
					mem[current] = 255;
			}
		}
		cout << "Case " << t << ":";
		for (int i = 0; i < 100; ++i)
		{
			printf(" %02X", mem[i]);
			//cout << " " << setfill('0') << setw(2) << hex << toupper(mem[i]);
		}
		cout << endl;
	}
}