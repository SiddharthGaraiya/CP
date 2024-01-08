# include <bits/stdc++.h>
using namespace std;

int main(){

    int t ,a,b;cin>>t;
    while(cin>>a>>b){
        cout<<((a+b)%2==0?"Bob\n":"Alice\n");
    }
}