#include <iostream>
using namespace std;
main()                             
    {                                   
        int tc;                          
        cin >> tc;                       
        while (tc--)                     
        {                               
            int f = 0;                  
            for (int i = 0; i < 8; i++) 
            {                           
                string s;               
                cin >> s;               
                if (s == "RRRRRRRR")    
                    f = 1;              
            }                           
            if (f == 1)                 
                cout << "R" << '\n';    
            else                        
                cout << "B" << '\n';    
        }                               
    }
