#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + m);

    int i = 0, j = 0;
    int acount = 0, bcount = 0;

    for (int l = 1; l <= k; l++) {
        if (i < n && a[i] == l) {
            i++;
            acount++;
        } else if (j < m && b[j] == l) {
            j++;
            bcount++;
        } else {
            cout << "NO\n";
            return;
        }
    }

    if (acount >= k / 2 && bcount >= k / 2)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
