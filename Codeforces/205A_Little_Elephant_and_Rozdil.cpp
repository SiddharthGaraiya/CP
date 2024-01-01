#include <bits/stdc++.h>

int main(){

    int n;std::cin>>n;
    int md=INT_MAX;
    int index=-1;
    int c;
    int sr;
    for (int i=1;i<=n;i++){
        std::cin>>c;
        if (c<md){ md=c; index=i;}
        else if (c==md) sr=md;
    }
    if (sr==md) std::cout<<"Still Rozdil";
    else std::cout<<index;

}