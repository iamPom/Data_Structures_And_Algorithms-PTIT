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
		ll n,count =0;
		cin>>n;
		ll a[1001], b[1001]={0};
		string s=" ";
		for(ll i=1;i<=n;i++) cin>> a[i];
		s="0"+s;
		ll p=s.length(), o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		bool check=false;
		for(ll i=1;i<=n;i++) {
			b[i]=1;
			for(ll j=1;j<i;j++) {
				if(a[i]>=a[j]){
					b[i]=max(b[j]+1,b[i]);
				}
			}
			if(!check)
			count=max(b[i],count);
		}
		cout<<n-count<<endl;
		continue;
	}
	return 0;
}

