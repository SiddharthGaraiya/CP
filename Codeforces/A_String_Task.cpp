#include <string.h>
#import <bits/stdc++.h>
char a[] = "aoyeui", c;
main()
{
    while (std::cin >> c)
        if (!strchr(a, c |= 32))
            std::cout << '.' << c;
}