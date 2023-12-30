#include <bits/stdc++.h>

int main(){
    
    int n;
    std::string s;

    std::cin>>n;

    std::cin>>s;
    int count=0;
    for (int i=0;i<s.length()-1;i++){
        if (s[i]==s[i+1]) count++; 
    }
    std::cout<<count;
    return 0;
}