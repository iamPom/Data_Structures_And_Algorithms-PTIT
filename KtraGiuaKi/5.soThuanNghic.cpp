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
		ll n = s.length()-1;
		bool check=true;
		ll max=1,index=1;
		for(ll j=n;j>0;j--){
			for(ll k=0;k<j;k++){
				ll res=0;
				for(ll i=j;i>=k;i--){
					check=true;
					if(s[i]!=s[k+res]){
						check=false;
						break;	
					} res++;
				}
				if(check){
					index =j-k+1;
					if(index>max) max=index;
				} 
			}	
		} cout<<max<<endl;	
	}
    return 0;
}
