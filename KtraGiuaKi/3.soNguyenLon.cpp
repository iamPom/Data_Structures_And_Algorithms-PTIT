#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
    	string s1,s2;
    	cin>>s1>>s2;
    	ll n1=s1.length(), n2=s2.length();
    	ll max=0,count=0,index;
    	for(ll i=0;i<n1;i++){
    		index=0;
    		count=0;
    		for(ll k=i;k<n1;k++){
    			for(ll j=index;j<n2;j++){
    				if(s1[k]==s2[j]){
    					index=j+1;
    					count++;
    					break;
					}
				}
			}
			if(count>max) max=count;
		}
		cout<<max<<endl;
	}
    return 0;
}
