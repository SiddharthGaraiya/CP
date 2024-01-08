#include <bits/stdc++.h>
using namespace std;
char a[] = "aoyeui", c;
main()
{
    int  n;cin>>n;
    vector <int> v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for (int i:v)   {
        cout<<i<<" ";
    }
}