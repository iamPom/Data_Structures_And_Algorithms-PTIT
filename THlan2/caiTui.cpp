#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct wrap{
	ll gt;
	ll tl;	
};
int main(){
	ll t;
	cin>>t;
	while(t--){
		string s;
		s=' ';
		ll n,v;
		cin>>n>>v;
		wrap A[n+5];
		for(ll i=1;i<=n;i++){
			cin>>A[i].tl;
		}
		for(ll i=1;i<=n;i++){
			cin>>A[i].gt;
		}
		
		ll p=s.length(),o=2,m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		bool check=false;
		
		ll B[1005][1005] ={0};
		for(ll i=1; i<=n;i++){
			for(ll j=1; j<=v;j++){
				if(j<A[i].tl) B[i][j]=B[i-1][j];
				else B[i][j]= max(B[i-1][j],B[i-1][j-A[i].tl]+A[i].gt);
			}
		}
		if(!check) cout<<B[n][v]<<endl;
	}
	return 0;
}

