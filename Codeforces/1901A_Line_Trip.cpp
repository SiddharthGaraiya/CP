# include <bits/stdc++.h>

using namespace std;

int main(){

    int t ;cin>>t;
    while (t--){

        int n,x;cin>>n>>x;
        int a;
        cin>>a;
        int mx=a;
        int prev=a;
        for (int i=1;i<n;i++){
            int b;cin>>b;
            if (b-prev>mx) mx =b-prev;
            prev =b;
        }
        mx =max(mx,2*(x-prev));
        cout<<mx<<"\n";
    }
}