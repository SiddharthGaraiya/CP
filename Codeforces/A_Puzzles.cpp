#include <bits/stdc++.h>
using namespace std;
char a[] = "aoyeui", c;
main()
{
    int x;cin>>x;
    int  n;cin>>n;
    vector <int> v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
    int min=INT_MAX;
    for (int i=0;i<=n-x;i++){
        if( v[i+(x-1)]-v[i]<min) min =v[i+(x-1)]-v[i];
    }
    cout<<min;
}