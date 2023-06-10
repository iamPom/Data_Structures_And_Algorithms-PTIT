/*
        code: 			DSA04016	 	 	 	
        title:          PHẦN TỬ THU K
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
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll> a(n+m);
        for (ll i = 0;i<n+m;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        cout << a[k-1] << endl;
    }
    return 0;
}