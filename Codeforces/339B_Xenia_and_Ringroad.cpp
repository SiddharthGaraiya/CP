#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;

typedef long long LL;
const int N=100005;

int n, m;
LL A[N];

int main() {
	scanf("%d%d", &n, &m);
	for(int i=1; i<=m; i++) {
		scanf("%I64d", &A[i]);
		A[i]--;
	}
	LL last=0, ans=0;
	for(int i=1; i<=m; i++) {
		if(A[i]>=last) ans+=A[i]-last, last=A[i];
		else ans+=n-last+A[i], last=A[i];
	}
	printf("%I64d\n", ans);
	return 0;
}
