# include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long int n,m;cin>>n>>m;
    long long int bp;
    if(n%2!=0) bp=n/2+1;
    else bp=n/2;
    if(m<=bp)
        cout<< 1+(m-1)*2;
    else 
        cout<< (m-bp)*2;
}