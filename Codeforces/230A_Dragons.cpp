#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int s, n, a, b;
    cin >> s >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        v.push_back({ a, b });
    }

    sort(v.begin(), v.end());

    for (auto dragon : v) {
        if (s <= dragon.first) {
            cout << "NO";
            return 0;
        }
        s += dragon.second;
    }

    cout << "YES";
    return 0;
}
