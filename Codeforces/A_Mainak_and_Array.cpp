#include<iostream>
using namespace std;
int main(){
	int t,a[2005];
	cin>>t;
	while(t--){
		int n,mx,mi,md=0;
		cin>>n>>a[1];
		mx=a[1],mi=a[1];
		for(int i=2;i<=n;++i){
			cin>>a[i];
			if(a[i]>mx) mx=a[i];
			if(a[i]<mi) mi=a[i];
			if(a[i-1]-a[i]>md) md=a[i-1]-a[i];
		}
		cout<<max(max(mx-a[1],a[n]-mi),md)<<"\n";
	}
}
