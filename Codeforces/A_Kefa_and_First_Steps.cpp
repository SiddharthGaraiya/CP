#include <bits/stdc++.h>
using namespace std;
main()
{
    int  n;cin>>n;
    vector <int> v;
    int a;
    while(cin>>a){
        v.push_back(a);
    }
    // sort(v.begin(),v.end());
    
    int max=1;
    int count=1;
    for (int i=0;i<n-1;){
        while(v[i+1]>=v[i] && i<n-1) {count ++;i++;}
        if (count>max) max =count;
        count=1;
        i++;
    }
    cout<<max;
}