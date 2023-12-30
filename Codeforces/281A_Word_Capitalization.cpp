# include <iostream>
#include <string>

int  main(){

    std::string s;
    std::cin>>s;
    
    if (s[0]>'Z') s[0]=s[0]-32;
    std::cout<<s;
}