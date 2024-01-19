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
    int a;cin>>a;
    int b;cin>>b;
    int c;cin>>c;
    
    if (c%2==0) {
        if (a>b){ cout<<"First";NEW return;}
        else{cout<<"Second";NEW return; }
    }else {
        a=a+(c/2)+1;
        b=b+(c/2);
        if (a>b){ cout<<"First";NEW return;}
        else{cout<<"Second";NEW return; }
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
