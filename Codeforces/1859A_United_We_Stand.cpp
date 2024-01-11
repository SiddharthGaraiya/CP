#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solveTestcase(int test_case);
void preProcess();

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    preProcess();

    int no_of_testcase = 1;
    cin >> no_of_testcase;

    for (int testcase = 1; testcase <= no_of_testcase; testcase++) {
        solveTestcase(testcase);
    }

    return 0;
}

void preProcess() {
    // Add any necessary preprocessing here
}

void solveTestcase(int test_case) {
    int n;
    cin >> n;
    
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    if (a[0] == a[n - 1]) {
        cout << -1 << endl;
        return;
    }

    int ele = a[0];
    int i = 0;

    while (i < n && a[i] == ele) {
        i++;
    }

    cout << i << ' ' << n - i << endl;

    for (int j = 0; j < i; j++) {
        cout << a[j] << ' ';
    }

    cout << '\n';

    for (int j = i; j < n; j++) {
        cout << a[j] << ' ';
    }

    cout << endl;
}
