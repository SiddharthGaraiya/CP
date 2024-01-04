#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;cin>>n>>m;
    int ans=0;
    multiset <int> s;
    for (int i=0;i<n;i++){
        int a;
        cin>>a;s.insert(a);
    }
    for (int i=0;i<m;i++){
        if (*s.begin()<0){ ans+=-(*s.begin());s.erase(s.begin());}
    }
    
    cout<<ans;
}