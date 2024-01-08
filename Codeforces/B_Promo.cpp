#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<int> v;

    // Input the elements into the vector
    int a;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        v.push_back(a);
    }

    // Sort the vector in descending order
    sort(v.begin(), v.end(), greater<int>());

    int c, d;
    while (q--) {
        cin >> c >> d;
        int sum = 0;
        
        // Sum the largest elements based on the query
        int it = c - 1; // Start index for iteration
        sum += v[it--]; // Add the initial largest element
        d--;

        // Traverse through the rest of the largest elements
        while (d-- && it >= 0) {
            // Skip duplicates
            while (it > 0 && v[it] == v[it - 1]) {
                it--;
            }
            if (it >= 0) {
                sum += v[it--];
            }
        }

        cout << sum << endl;
    }

    return 0;
}
