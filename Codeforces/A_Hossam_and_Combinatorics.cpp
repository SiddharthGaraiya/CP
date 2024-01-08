#include <iostream>
using namespace std;
int main()
{
    int a, b;
    unsigned long long c, d, e, f, g;
    cin >> b;
    for (int t = 0; t < b; t++)
    {
        e = 1;
        d = 1;
        cin >> c;
        cin >> a;
        f = a;
        g = a;
        for (int i = 1; i < c; i++)
        {
            cin >> a;
            if (a == f)
                d++;
            if (a < f)
            {
                f = a;
                d = 1;
            }
            if (a == g)
                e++;
            if (a > g)
            {
                g = a;
                e = 1;
            }
        }
        if (g == f)
            cout << c * c - c << endl;
        else
        {
            cout << 2 * d * e << endl;
        }
    }
}
