#include<bits/stdc++.h>
#define ll long long

using namespace std;
ll giaiThua(ll a){
    ll sum=1;
    for(ll i=2;i<=a;i++){
        sum*=i;
    } return sum;
}
int main(){
    long long t,sum=1;
    cin>>t;
    for(ll i=2;i<=t;i++){
        sum+= giaiThua(i);
    } cout<<sum<<endl;
    return 0;
}