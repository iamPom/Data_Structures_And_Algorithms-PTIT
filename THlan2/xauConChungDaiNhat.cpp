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
		ll a[1010][1010] ={0};
		string s1,s2;
		cin>>s1>>s2;
		ll p=s1.length(), o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		bool check=false;
		s2="0"+s2;
		s1="0"+s1;
		ll index=0, l1=s1.length(),l2=s2.length();
		for(ll j=1;j<l1;j++){
			for(ll i=1;i<l2;i++){
				if(s1[j]==s2[i]){
					a[j][i]=a[j-1][i-1]+1;
				}else a[j][i]=max(a[j][i-1],a[j-1][i]);
				index= max(index,a[j][i]);
			}	
		}
		if(!check) cout<<index<<endl;
	}
	return 0;
}

