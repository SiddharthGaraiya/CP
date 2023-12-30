#include<bits/stdc++.h>

int main(){

    int n;
    std::cin >> n;

    int maxvalue = INT_MIN;
    int maxindex = -1;
    int minvalue = INT_MAX;
    int minindex = -1;
    int a;
    for (int i=0;i<n;i++){
        std::cin>>a;
        if(a<=minvalue) {minindex =i; minvalue =a;}
        if(a>maxvalue) {maxindex=i; maxvalue =a;}
    }
    int count=0;
    if (minindex<maxindex) count=maxindex+(n - 1 - minindex - 1);
    else count =maxindex+(n - minindex - 1); 

    std::cout<<count;

    return 0;
}