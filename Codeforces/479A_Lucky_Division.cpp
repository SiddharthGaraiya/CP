# include <bits/stdc++.h>
using namespace std;

bool check(int n,int d){
    if (d>n) return false;
    if (d!=0&&n%d==0)
        return true;            
    else {
        return check (n,(d*10)+4) ||check (n,(d*10)+7);
    }
}

int main(){

    int n;cin>>n;
    bool ans =check(n,0);
    if (ans) cout<<"YES";
    else cout<<"NO";
    
}