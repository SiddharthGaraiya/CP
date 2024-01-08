# include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){
        long long int a,b,c,d;
        cin>>a>>b>>c>>d;
        long long int x=a*d;
        long long int y=b*c;
        if (x==y){
            cout<<0<<endl;
        }else if (x==0 ||y==0) cout<<1<<endl;
        else if (x%y==0||y%x==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
}