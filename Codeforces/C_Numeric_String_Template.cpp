#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> track(n);
    for (int i = 0; i < n; i++)
    {
        cin >> track[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        if (s.size() != n)
        {
            cout << "NO\n";
            continue;
        }
        map<int, char> mp;
        mp.clear();
        for (int i = 0; i < n; i++)
        {
            mp[track[i]] = s[i];
        }
        string s2 = "";
        for (int i = 0; i < n; i++)
            s2.push_back(mp[track[i]]);
        vector<set<int>> v(26);
        for (auto i : mp)
        {
            v[i.second - 'a'].insert(i.first);
        }
        bool check = 1;
        for (char i : s)
        {
            if (v[i - 'a'].size() != 1)
                check = false;
        }
        cout << ((check and s2 == s) ? "YES" : "NO") << "\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}