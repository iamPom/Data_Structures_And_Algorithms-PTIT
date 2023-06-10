#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	ll t;
	cin>>t;
	ll a[]={1,2,5,10,20,50,100,200,500,1000};
	while(t--){
		ll n,index=0,i=9;
		cin>>n;
		ll p, o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		bool check=false;
		for(ll i=9;i>=0;i--){
			while(n/a[i]){
				index +=n/a[i];
				n=n%a[i];
			}
		}
		cout<<index;
		if(!check) cout<<endl;
	}
	return 0;
}

