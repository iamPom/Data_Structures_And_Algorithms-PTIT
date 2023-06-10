#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	string s=" ";
	ll a[1001];
	for( ll j=0;j<n;j++){
		cin>>a[j];
	}
	ll p=s.length(), o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		bool check=false;
	ll b[1001]={0};
	ll res =0;
	for( ll j=0;j<n;j++){
		for( ll i=0;i<j;i++){
			if(a[j]>a[i]&&(b[i]+1)>b[j]){
				b[j]=b[i]+1;
				res=max(b[j],res);
			}
		}		
	} if(!check) res++;
	cout<<res<<endl;
	return 0;
}

