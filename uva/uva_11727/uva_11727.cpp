// Author: Endy Melo
// URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2827

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        vector <int> v(3);
        
        for (int i = 0; i < 3; i++)
        {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        printf("Case %d: %d\n", i, v[1]);
    }

    return 0;
}