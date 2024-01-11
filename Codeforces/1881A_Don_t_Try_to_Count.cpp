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

void solve()
{
    int n;cin>>n;
    int x;cin>>x;
    string s1;cin>>s1;
    string s2;cin>>s2;
    string s3 =s1;
    while (s1.size()<s2.size()) s1=s1+s1;
    s1=s1+s1;
    
    if (s1.find(s2) == string::npos) {cout<<-1; NEW return;}
    else {
        int co =0;
        while (s3.size()<s2.size()){
            s3=s3+s3;
            co ++;
        }
        if (s3.find(s2) == string::npos) co++;
        cout<<co;NEW

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
