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

bool check(vector<int> &s ){
    set<int>occ;
    occ.insert(s[0]);
    for (int i=1;i<s.size();++i){
        int curr=s[i];
        if (occ.count(curr-1)==0 and occ.count(curr+1)==0)
            return false;
        occ.insert(curr);
    }
    return true;
}
void solve()
{
    int n;cin>>n;
    vector<int> s(n);
    for (int i =0;i<n;i++){
        cin>>s[i];
    }
    if (check(s))
    cout<<"YES\n";
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
