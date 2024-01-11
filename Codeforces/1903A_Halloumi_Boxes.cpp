# include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while (t--){

        int n,k;cin>>n>>k;

        int a[n];
        bool ok=1;
        for  (int i=0;i<n;i++){
            cin>>a[i];
        }
        for  (int i=0;i<n-1;i++){
            if (a[i]>a[i+1]) ok =0;
        }
        if (ok||k>1) cout<<"YES\n";
        else cout<<"NO\n";
        
    }
}