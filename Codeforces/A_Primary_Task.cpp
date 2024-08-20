#include <bits/stdc++.h>
using namespace std;
void solve() {
 string s;
 cin >> s;
 int c = 0;
 if(s.size() <= 2) {
  cout << "NO\n";
  return;
 }
 if(s[0] != '1' or s[1] != '0') {
  cout << "NO\n";
  return;
 }
 int cur = 0;
 for(int i = 2;i<s.size();i++) {
  cur*=10;
  cur+=s[i]-'0';
 }
 if(s[2] == '0')cur=0;
 if(cur > 1) {
  cout << "YES\n";
 }
 else cout << "NO\n";
}
int main () {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 int t=1;
 cin >> t;
 while(t--) {
  solve();
 }
}