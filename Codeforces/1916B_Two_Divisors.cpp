#include <iostream>
using namespace std;
#include <algorithm>

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int gcd =std::__gcd(a,b);
        cout<<((long long)a)*b/gcd<<endl;
        
    }

    return 0;
}
