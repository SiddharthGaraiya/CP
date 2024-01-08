# include <bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--){

        int a;cin>>a;
        if (a/2020 <1) {cout<<"NO\n"; continue;}
        else {
            int ans =a/2020;
            int r=a%2020;
            if (ans<r) {cout<<"NO\n"; continue;}
            else {cout<<"YES\n"; continue;}
        }
    }
}