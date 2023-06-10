#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		ll n =s1.length, m=s2.length();
		ll dp =[n+2][m+2];
		string s=" ";
		for(ll i=1;i<=n;i++) cin>> a[i];
		s="0"+s;
		ll p=s.length(), o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		bool check=false;
		for(ll i=0;i<=n;i++) {
			b[i]=1;
			for(ll j=0;j<=m;j++) {
				if(i==0||j==0)
					dp[i][j] =i+j;
				else if(s1[i-1]==s2[j-1])
						dp[i][j]=dp[i-1][j-1];
					else dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
			}
		}
		if(!check)
		cout<<dp[n][m]<<endl;
		continue;
	}
	return 0;
}

