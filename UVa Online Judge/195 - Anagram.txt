#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;
bool Size(char a, char b)
{
	if (tolower(a) == tolower(b))
	{
		return a < b;
	}
	return tolower(a) < tolower(b);
}
int main()
{
	char word[1000];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> word;
		sort(word, word + strlen(word), Size);
		cout << word << endl;
		while (next_permutation(word, word + strlen(word), Size))
		{
			cout << word << endl;
		}
	}
	return 0;
}