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
    int prevonecount=-1;
    char c;
    for (int i =0;i<n;i++){
        int onecount=0;
        for (int j=0;j<n;j++){
            cin>>c;
            if (c=='1')
                onecount++;
        }

        if (onecount==prevonecount){
            cout<<"SQUARE\n";
            return ;
        }
        else if (onecount!=0){
            prevonecount=onecount;
        }
    }
    cout<<"TRIANGLE\n";

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
