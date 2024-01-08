# include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n,h,m;
    cin>>t;
    while(t--){
        cin>>n>>h>>m;
        int tm=(h*60)+m;
        int mi =1500;
        while (n--){
            int a,b;
            cin>>a>>b;
            int nt=(a*60)+b;
            if (nt<tm) nt+=(24*60);
            mi=min(mi,nt-tm);
        }
        cout<<mi/60<<" "<<mi%60<<"\n";
    }
}