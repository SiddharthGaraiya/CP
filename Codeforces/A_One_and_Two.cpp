#include <bits/stdc++.h>
using namespace std;

#define ld long double
#define ll long long
#define pb push_back
#define yes cout << "YES\n"
#define no  cout << "NO\n"
#define NEW cout<<"\n";
#define forw(i , a , b) for (int i = (a); i <= (b); ++i)
#define forq(i , b , a) for (int i = (a); i >= (b); --i)
#define whm(n) while (n--)
#define forr(i , b) forw( i , 0 , b - 1 )
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    int n;
    cin >> n;
    int a[n];
    int t = 0;
    for(int i= 0;i<=n-1;i++){
        cin >> a[i];
        if(a[i] == 2)
            t++;
    }
    if(t&1){
        cout << "-1\n";
        return;
    }
    int chk = 0;
    for(int i=0;i<=n-1;i++){
        if(a[i] == 2)
            chk++;
        if(chk == t/2){
            cout << i+1 << "\n";
            return;
        }
    }
}

int main() {
    fast;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
