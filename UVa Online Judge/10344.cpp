#include <bits/stdc++.h>

using namespace std;


bool found;


void bac(vector<int> a, int i, int s) 

{

    if (found == false)
 
   {

        if (i == 4 && s == 23)
 
       {

            found = true;

            return;

        }

        if (i == 4 || (s > 23 && i==4))

            return;

        bac(a, i + 1, s + a[i + 1]);

        bac(a, i + 1, s - a[i + 1]);

        bac(a, i + 1, s * a[i + 1]);

    }

}

int main() 
{

    ios::sync_with_stdio(false);

    vector<int> a(5);

    while (cin >> a[0])

    {

        bool notzero = a[0];

        for (int i = 1; i < 5; i++)

        {

            cin >> a[i];

            notzero = notzero || a[i];

        }


        found = false;

        if (!notzero)

            continue;

        sort(a.begin(),a.end());

        do

        {

            bac(a, 0, a[0]);

        } while (!found && next_permutation(a.begin(), a.end()));
        
        cout << (found ? "Possible" : "Impossible") << endl;

    }

    return 0;

}