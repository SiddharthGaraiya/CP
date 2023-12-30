#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,m,a;
        int p=1;
        bool bad=false;
        cin>>n>>m;
        for (int i=0;i<n;i++){
            cin>>a;
            p*=a;
            if (2023%p!=0){
                bad=true;
                
            }
        }
        if (bad){
            cout<<"NO\n";
            continue;
        }
        cout <<"YES \n";


        // for (int i=0;i<2023/p;i++){
        //     for (int i=0;i<2023/p;i++){
        //         for (int i=0;i<2023/p;i++){
                    
        //         }
        //     }          
        // }

        cout<<2023/p;
        for (int i=0;i<m-1;i++){
            cout <<" "<<1;
        }cout<<"\n";

    }

    return 0;
}