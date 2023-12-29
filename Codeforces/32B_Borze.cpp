    #include <iostream>
    #include <math.h>
    #include <map>
    #include <vector>
    #include <algorithm>
    #include <queue>
    #include <iterator>
    #include <utility>
    #include <string.h>
    using namespace std;
     
    int main()
    {
        string s,s1="";
        cin>>s;
        int l =s.length();
        if(l==1)
        {
            s1="0";
        }
        for(int i=0;i<l-1;i++)
        {
            if(s[i]=='-' && s[i+1] == '-')
            {
                if(i==(l-3) && s[l-1]=='.')
                {
                    i++;
                    s1= s1+"2";
                    s1= s1+"0";
                }
                else
                {
                    i++;
                    s1= s1+"2";
                }
            }
            else if(s[i]=='-' && s[i+1] == '.')
            {
                if(i==(l-3) && s[l-1]=='.')
                {
                    i++;
                    s1= s1+"1";
                    s1= s1+"0";
                }
                else
                {
                    i++;
                    s1= s1+"1";
                }
            }
            else
            {
                if(i==(l-2) && s[l-1]=='.')
                    s1=s1+"00";
                else
                    s1=s1+"0";
            }
        }
        cout<<s1;
    }