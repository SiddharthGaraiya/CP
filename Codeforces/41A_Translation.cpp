# include <bits/stdc++.h>
using namespace std;

int main(){

    string n,m;cin>>n>>m;
    if (m.size()!=n.size()){ cout<<"NO"; return 0;}
    int ni=n.size()-1;
    for (int i=0;i<m.size();i++){
        if (m[i]!=n[ni]){ cout<<"NO" ;return 0;}
        ni--;
    }
    cout<<"YES";
}