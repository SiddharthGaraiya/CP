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
 
    
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool flag= false;
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (__gcd(arr[i],arr[j])<=2){ flag=true;break;} 
        }
        if(flag) break;
    }
    if (flag) cout<<"Yes";else cout<<"No"; NEW
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
