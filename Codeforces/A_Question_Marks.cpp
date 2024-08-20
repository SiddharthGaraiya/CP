#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long
#define pb push_back
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define NEW cout << "\n";
#define forw(i, a, b) for (int i = (a); i <= (b); ++i)
#define forq(i, b, a) for (int i = (a); i >= (b); --i)
#define whm(n) while (n--)
#define forr(i, b) forw(i, 0, b - 1)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long marks = 0;
    int a = 0, b = 0, c = 0, d = 0;
    for (char &ch : s)
    {
        if (ch == 'A')
        {
            if (a < n)
            {
                marks++;
                a++;
            }
        }
        if (ch == 'B')
        {
            if (b< n)
            {
                marks++;
                b++;
            }
        }
        if (ch == 'C')
        {
            if (c < n)
            {
                marks++;
                c++;
            }
        }
        if (ch == 'D')
        {
            if (d < n)
            {
                marks++;
                d++;
            }
        }
    }
    cout<<marks<<"\n";
}
int main()
{

    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        // cout<<solve();NEW;
        solve();
        // if(solve()) yes; else no;
    }
}
