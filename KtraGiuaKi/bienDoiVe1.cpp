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
		ll a;
		cin>>a;
		ll p=a, o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
		ll count=0;
		ll b=a;
		bool ok=true;
		while(b>1){
			if(b%2==1){
				ok = false;
				break;
			}
			b/=2;
			count++;
		}
		
		if(ok){
			cout<<count<<endl;
			continue;
		}
		b=a;
		ok=true;
		count=0;
		while(b>1){
			if(b%3!=0){
				ok = false;
				break;
			}
			b/=3;
			count++;
		}
		
		if(ok){
			cout<<count<<endl;
			continue;
		} count=0;
		while(a>1){
			if(a%3==0){
				a/=3;
				count++;
				continue;
			} 
			if(a%3==1){
				a--;
				count++;
				continue;
			}
			if(a%2==0){
				a/=2;
				count++;
				continue;
			}
			a--;
			count++;
			
		}
		cout<<count<<endl;
	}
	return 0;
}

