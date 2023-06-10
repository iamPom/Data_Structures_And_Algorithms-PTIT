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
		string s;
		cin>>s;
		ll p=s.length(), o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		string temp =s,s1=s;
		bool check=false;
		reverse(s.begin(),s.end());
		s="0"+s;
		temp="0"+temp;
		ll a[100][100]={0};
		ll res=0;
		ll n1=s.length();
		ll n2=temp.length();
		for(ll i=1;i<n1;i++){
			for(ll j=1;j<n2;j++){
				if(s[i]==temp[j]){
					a[i][j]=a[i-1][j-1]+1;
				}	else{
					a[i][j]=max(a[i][j-1],a[i-1][j]);
				}
				res=max(res,a[i][j]);
			}
		}
		ll req=s1.length()-res;
		if(!check)
		cout<<req<<endl;
		continue;
	}
	return 0;
}

