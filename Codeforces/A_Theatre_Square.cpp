#include<iostream>

using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    
    int x= n/a + (n%a == 0? 0:1);
    int y= m/a + (m%a == 0? 0:1);

    cout<<(long long)x*y;
}