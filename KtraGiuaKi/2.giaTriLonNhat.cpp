#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	ll n;
   	cin>>n;
   	ll a[n];
   	for(ll i=0;i<n;i++) cin>>a[i];
   	ll sum=0;
   	ll max=abs(a[0])+a[0];
   	for(ll i=0;i<n;i++){
   		sum+=abs(a[i])+a[i];
   		if(sum>max) max=sum;
	} cout<<max<<endl;
    return 0;
}
