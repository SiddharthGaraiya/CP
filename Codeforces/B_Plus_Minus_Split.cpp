# include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n;cin>>t;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        int pcount=0,mcount=0;
        for (int i=0;i<n;i++){
            if (s[i]=='+') pcount++;
            else mcount++;
        }
        int ans= abs(pcount-mcount);    
        cout<<ans<<"\n";    
    }
}