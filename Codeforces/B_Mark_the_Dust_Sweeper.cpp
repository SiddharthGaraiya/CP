# include <bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;

    while(t--){
        int n;cin>>n;
        bool ss=false;
        int a;
        long long int ans=0;
        for  (int i=0;i<n;i++){
            
            cin>>a;
            if (i==n-1){break;}
            if (a>0) ss=true;
            if (ss){
                if (a==0) ans+=1;
                else ans+=a;
            }
        }
        std::cout<<ans<<"\n";
    
    }
}