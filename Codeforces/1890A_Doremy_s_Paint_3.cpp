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
#define forr(i , b) forw( i , 0 , b - 1 )
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool solve()
{
    int n;cin>>n;
    int a[n];
    forr(i,n) cin>>a[i];
    set<int> s;
    forr(i,n) s.insert(a[i]);
    if(s.size()>2) return false;
    if(s.size()==1) return true;
    int x=-1,y;
    forr(i,n)
    {
        if(x==-1)
        {
            x=a[i];
        }
        else if(x!=a[i])
        {
            y=a[i];
        }
    }
    int cnt1=0,cnt2=0;
    forr(i,n) {
    if(a[i]==x) cnt1++;
    else cnt2++;
    }
    if(abs(cnt1-cnt2)<=1) return true;
    return false;

}
int main() {

    fast;
    int t=1;
    cin>>t;
    while(t--)
    {
        // cout<<solve();NEW;
        // solve();
        if(solve()) yes; else no;
    }
}
