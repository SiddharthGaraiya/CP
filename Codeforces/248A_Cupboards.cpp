#include <iostream>

int main(){

    int n;
    std::cin>>n;

    int l1count=0,l0count=0,r1count=0,r0count=0;
    int l,r;
    for (int i=0;i<n;i++){
        std::cin >>l>>r;
        if (l==0) l0count++;
        else l1count++;
        if (r==0) r0count++;
        else r1count++;
    }
    int ans=0;
    if (l0count>l1count){
        ans +=l1count;
    }else ans +=l0count;
    if (r0count>r1count){
        ans +=r1count;
    }else ans +=r0count;

    std::cout<<ans;
    return 0;
}