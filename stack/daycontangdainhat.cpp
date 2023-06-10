#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin >> t;
	ll p=0;
    while(t--) {
    	ll n;
    	cin>>n;
    	ll a[1005];
    	for(ll i=0;i<n;i++){
    		cin>>a[i];
		}
		ll res=0;
		ll s[1005]={0};
		for(ll i=1;i<n;i++){
			for(ll j=0;j<i;j++){
				if(a[i]>a[j]&&(s[j]+1>s[i])){
					s[i]=s[j]+1;
					res=max(res,s[i]);
				}
			}
		}
		p++;
		cout<<"Test "<<p<<": "<<++res<<endl;
    }
    return 0;
}
