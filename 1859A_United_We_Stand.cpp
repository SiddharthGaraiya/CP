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
    sort(arr,arr+n);
    if (arr[0]==arr[n-1]){ cout<<-1; NEW return ;}

    int i =1;int cnt =0;
    while (arr[i]==arr[i-1]){cnt++;i++;}
    cout<<cnt+1<<" "<<n-(cnt+1);NEW
    cout<<arr[0]<<" ";
    forw(j,1,cnt) cout<< arr[0]<< " " ;
    NEW
    for (int j=cnt+1;j<n;j++){
        cout << arr[j]<< " " ;
    }
    

    NEW     

}
int main() {

    fast;
    int t;
    cin>>t;
    while(t--)
    {
        // cout<<solve();NEW;
        solve();
        // if(solve()) yes; else no;
    }
}
