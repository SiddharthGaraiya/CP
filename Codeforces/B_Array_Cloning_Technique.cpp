#include <iostream>
#include <set>
#include <map>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;
const int VERYLONGINT = 1000000001;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];
        sort(a.begin(), a.end());
        int l = 0;
        int mx = 0;
        for (int i = 1; i < n; i++) {
            if (a[i] != a[l]) {
                mx = max(mx, i - l);
                l = i;
            }
        }
        mx = max(mx, n - l);
        int k = mx;
        int kl = 0;
        while (k < n) {
            k += k;
            kl++;
        }
        cout << kl + n - mx << "\n";
    }
    return 0;
}
