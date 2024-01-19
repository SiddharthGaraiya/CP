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
    int k;cin>>k;
    int x;cin>>x;
    
    if (x!=1){
        cout<<"YES";NEW
        cout<<n;NEW
        for (int i =0;i<n;i++) cout<<1<<" ";
        NEW;
        return;
    }else {
        if (k==1 || (k==2&& n%2!=0)) {cout<<"NO";NEW return;}
        if (k>=2 && n%2==0) {
            int a=n/2;
            cout<<"YES";NEW
            cout<<a;NEW
            for (int i=0;i<a;i++) cout<<2<<" ";
            NEW
            return;
        }
        if (n>=3){
            int b=(n/2)-1;
            cout<<"YES";NEW
            cout<<b+1;NEW
            cout<<3<<" ";
            for (int i=0;i<b;i++) cout<<2 <<" ";
            NEW
        }
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
