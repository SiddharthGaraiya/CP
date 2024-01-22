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
using namespace std;


void solve()
{
    ll n;cin>>n;
    ll k;cin>>k;
    ll x;cin>>x;

    ll min_sum=(k*(k+1))/2;
    ll total_sum=(n*(n+1))/2;
    ll a=n-k;

    ll max_sum= total_sum-(a*(a+1))/2;
    
    if (min_sum<=x &&x<=max_sum) cout<<"YES\n";
    else cout<<"NO\n";

}
int main() {

    fast;
    int t=1;
    cin>>t;
    while(t--)
    {
        // cout<<solve();NEW;
        solve();
        // if(solve()) yes; else no;
    }
}
