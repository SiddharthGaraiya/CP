# include <bits/stdc++.h>

int main(){

    int n,m;std::cin>>n>>m;
    int index=-1;
    int a;
    int reapet;
    int maxReapet =0;
    for (int i =1;i<=n;i++){       
        std::cin>>a;
        reapet= a/m;
        if (reapet>0&& a%m==0){
            reapet--;
        }
        if (reapet >=maxReapet) {maxReapet =reapet; index=i;}
    }
    std::cout<<index;
    return 0;
}