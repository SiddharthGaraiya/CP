#include <iostream>
main()
{
    int64_t a, b;
    std::cin >> a;

    while (std::cin >> b)
        puts(b & b - 1 ? "YES" : "NO");
}