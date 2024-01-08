# include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while (t--){
        int n;cin>>n;
        long long sum=0;
        for (int i=0;i<n;i++){
            int a;cin>>a;
            sum+=a;
        }
        int prev;cin>>prev;
        for (int i=0;i<n-1;i++){
            int b;cin>>b;
            if (prev<b) {sum+=prev;prev =b;}
            else sum+=b;
        }   
        cout<<sum<<endl;
    }
}