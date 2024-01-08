# include <bits/stdc++.h>

using namespace std;

int main(){

    int t;cin>>t;
    while (t--){

        int n;cin>>n;
        vector <int>v;
        int a;
        for (int i=0;i<n;i++){
            cin>>a;v.push_back(a);
        }
        // for (int i=0;i<n-1;i++){
        //     if (i==0){
        //         while (v[i+1]%v[i]==0){
        //             v[i+1]++;
        //         } 
        //         continue;
        //     }

        //     while (v[i+1]%v[i]==0||v[i]%v[i-1]==0){
        //         v[i]++;
        //     }
        // }

        for (int i=0;i<n-1;i++){
            if (v[i]==1) v[i]++;
        }
        
        for (int i=0;i<n-1;i++){
            if (v[i+1]%v[i]==0) v[i+1]++;
        }
        
        for(auto it:v){
            cout<<it<<" ";
        }cout<<"\n";
    }
}