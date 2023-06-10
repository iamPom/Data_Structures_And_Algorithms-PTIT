/*
        code: 			DSA04015	  	 	 	
        title:          TÍNH FLOOR(X)	
*/
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
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n+1);
        ll vt = -1;
        for (ll i = 1;i<=n;i++){
            cin>>a[i];
            if(a[i]<=x){
                vt = i;
            }f
        }
        cout << vt << endl;

    }
    return 0;
}