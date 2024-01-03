#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;cin>>n;
    string s= to_string(n);
    for (int i=0;i<s.size();i++){
        if (s[i]!='1') {cout<<"NO"; return 0;}
        else if (i<=s.size()-3 &&s[i+1]=='4' &&s[i+2]=='4') i+=2;
        else if (i<=s.size()-2 &&s[i+1]=='4') i++;
    }
    cout<<"YES";

}