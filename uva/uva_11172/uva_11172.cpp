// Author: Endy Santos
// URL: https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2113

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        if (x == y)
        {
            cout << "=" << endl;
        }
        else if (x < y)
        {
            cout << "<" << endl;
        } else {
            cout << ">" << endl;
        }

    }

    return 0;
}