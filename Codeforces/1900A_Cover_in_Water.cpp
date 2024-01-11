# include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;

    while (t--){

        int n;cin>>n;
        string s;cin>>s;
        int count=0;
        int dotcount=0;
        int mxcount=0;
        for (int i=0;i<n;i++){
            if (s[i]=='#') continue;
            else {
                while (s[i]=='.'){
                count++;
                dotcount++;
                mxcount=max(count,mxcount);
                i++;
                }
                count=0;
            }
        }
        if (mxcount<=2) cout<<dotcount<<"\n";
        else cout<<2<<"\n";
    }
}