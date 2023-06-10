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
		ll a,b,c;
		cin>>a>>b>>c;
		ll A[a],B[b],C[c],D[a+b+c];
		for(ll i=0;i<a;i++){
			cin>>A[i];
			D[i]=A[i];
		}
		for(ll i=0;i<b;i++){
			cin>>B[i];
			D[a+i]=B[i];
		}
		for(ll i=0;i<c;i++){
			cin>>C[i];
			D[a+b+i]=C[i];
		}
		sort(D,D+a+b+c);
		for(ll i=0;i<a+b+c;i++){
			if(D[i]==D[i+1]&&D[i]==D[i+2]){
				cout<<D[i]<<" ";
			}
		}
		cout<<endl; 
	}
	return 0;
}

