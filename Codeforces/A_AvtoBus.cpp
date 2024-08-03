#include<iostream>
using namespace std;
long long n,t;
int main(){
cin>>t;
while(t--){
cin>>n;

if(n%2==1 || n<4) cout<<-1<<"\n";
else cout<<(n+4)/6<<" "<<n/4<<"\n";
}
}