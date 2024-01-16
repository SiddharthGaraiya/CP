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
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int x;
    cin >> x;

    vector<long long> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<long long> v(n);

    ll ve;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
            ve = v[i - 1];
        else
            ve = v[i - 1] + (arr[i - 1] - arr[i]);
        v[i] = ve;
    }

    vector<long long> v2(n);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= arr[i + 1])
            ve = v2[i + 1];
        else
            ve = v2[i + 1] + (arr[i + 1] - arr[i]);
        v2[i] = ve;
    }

    int a, b;
    while (x--)
    {
        cin >> a >> b;
        if (a < b)
            cout <<(long long) v[b - 1] -(long long) v[a - 1] << "\n";
        else
            cout << (long long)v2[b - 1] - (long long)v2[a - 1] << "\n";
    }
}

int main()
{

    fast;
    int t = 1;
    // cin>>t;
    while (t--)
    {
        // cout<<solve();NEW;
        solve();
        // if(solve()) yes; else no;
    }
    return 0;
}
