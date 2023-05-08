#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	int a[] = { 6 , 35 , 204 , 1189 , 6930 , 40391 , 235416 , 1372105 , 7997214 , 46611179 };
	int b[] = { 8 , 49 , 288 , 1681 , 9800 , 57121 , 332928  , 1940449 , 11309768 , 65918161 };
	int n = 10;


	for (size_t i = 0; i < n; i++)
	{
		cout << setw(10) << a[i] << setw(10) << b[i] << endl;
	}
		

		
		return 0;
}