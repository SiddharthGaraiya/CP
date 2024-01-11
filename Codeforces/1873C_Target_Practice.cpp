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
    char c;
    int count=0;
    forw(i,1,10){
        forw(j,1,10){
            cin>>c;
            if (c=='.') continue;
            if (i<=5){
                if (j<=5) {
                    count +=min(i,j);
                }else count +=min(i,11-j);
            }else {
                if (j<=5) {
                    count +=min(11-i,j);
                }else count +=min(11-i,11-j);                
            }
        }
    }
    cout<<count;NEW
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
