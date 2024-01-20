#include <iostream>
#include <algorithm>
using namespace std;

#define NEWLINE cout << "\n";

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n, greater<int>());

    if (arr[0] == arr[n - 1]) {
        cout << "NO\n";
        return;
    }

    int count = 0;
    while (count < n - 1 && arr[count] == arr[count + 1]) {
        count++;
    }

    cout << "YES\n";
    cout << arr[0] << " ";

    for (int i = count + 1; i < n; i++) {
        cout << arr[i] << " ";
    }

    while (count--) {
        cout << arr[0] << " ";
    }

    NEWLINE
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
