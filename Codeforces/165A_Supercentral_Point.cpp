#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x[200], y[200], i, j, l, r, u, d, c = 0;

    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (i = 0; i < n; i++)
    {
        l = 0;
        r = 0;
        u = 0;
        d = 0;
        for (j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (x[i] < x[j] && y[i] == y[j])
                    l = 1;
                if (x[i] > x[j] && y[i] == y[j])
                    r = 1;
                if (y[i] < y[j] && x[i] == x[j])
                    u = 1;
                if (y[i] > y[j] && x[i] == x[j])
                    d = 1;
                if (l + r + u + d == 4)
                {
                    ++c;
                    break;
                }
            }
        }
    }
    cout << c << endl;
}