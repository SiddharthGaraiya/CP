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
    int n ;cin>>n;    
    vector<long long > a(n);
    for (int i =0;i<n;i++) cin>>a[i];

    ll lO = 0;
    ll lE = 0;

    for (int i =0;i<n;i++){
        if (a[i]%2== 0)
        {
            if(a[i]>lE)lE =a[i];
        }
        else{
            if (a[i]>lO) lO =a[i];
        }
    }

    int c =0;
    bool allSameParity =true;
    for (int i =0;i<n;i++){
        if (a[i]%2 != a[0]%2){
            allSameParity= false;
            break;
        }
    }

    if (allSameParity)
    {
        cout<<0<<"\n";
        return;
    }

    sort(a.begin(),a.end());
    for (int i =0;i<n;i++){
        if (a[i]%2 ==0 && a[i]<lO){
            c++;
            a[i] = a[i] +lO;
            lO = max(lO,a[i]);
        }
    }

    allSameParity=true;
    for (int i =0;i<n;i++){
        if (a[i]%2 != a[0]%2){
            allSameParity=false;
            break;
        }
    }

    if (allSameParity){
        cout<<c<<"\n";
        return;
    }

    ll idx = 0;
    for (int i =0;i<n;i++){
        if (a[i]%2 ==1 && a[i] == lO)
        {
            idx = i;
            break;
        }
    }

    a[idx] =lO+lE;
    c++;

    for (int i =0;i<n;i++){
        if (a[i]%2==0)
        c++;
    }
    cout<<c<<"\n";
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
