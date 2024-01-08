#include <ios>
main(int n)
{
    scanf("%d", &n);
    printf("%d", n > 0 ? n : n / 10 % 10 < n % 10 ? n / 100 * 10 + n % 10
                                                  : n / 10);
}