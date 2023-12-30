# include <iostream>
#include <string>

int main(){

    std::string s;
    std::cin>>s;
    float l=0;

    for (char c :s){
        if (c>'Z'){
            l++;
        }
    }

    if (l>=(float(s.length())/2)){
        for (int i=0;i<s.length();i++){
            if (s[i]<='Z'){
                s[i]=s[i]+=32;
            }
        }    
    }
    else {
        for (int i=0;i<s.length();i++){
            if (s[i]>'Z'){
            s[i]=s[i]-=32;
            }
        }
    }

    std::cout<<s;
    return 0;
}