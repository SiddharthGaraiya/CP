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
    int n;cin>>n;
    int q;cin>>q;
    

    vector<int> v;
    int ve;
    for (int i=0;i<n;i++){
        cin>>ve;
        v.push_back(ve);
    }

    ll sum[n+1];
    sum[0]=0;
    for (int i = 1 ; i< n+1; i++){
        sum[i]=sum[i-1]+v[i-1];
    }

    while (q--){
        int l,r,k;cin>>l>>r>>k;
        int lrsum=sum[r]-sum[l-1];
        if (l==1)  lrsum=sum[r];
        
        if ((sum[n]-lrsum+((r-l+1)*k))&1) cout<<"YES\n";
        else cout<<"NO\n";
    }

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
