#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++) cin>>a[i];
		for(ll i=0;i<n;i++){
			bool check=false;
			for(ll j=i+1;j<n;j++){
				if(a[j]>a[i]){
					cout<<a[j]<<' ';
					check=true;
					break;
				}
			}
			if(!check) cout<<-1<<' ';
		}
		cout<<endl; 
	}
	return 0;
}

