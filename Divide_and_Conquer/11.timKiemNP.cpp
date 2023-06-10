/*
        code: 			DSA04020	 	 	 	
        title:          TÌM KIẾM NHỊ PHÂN	
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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=1; i<=n; i++){
            cin>>a[i];   
        }
        ll res = lower_bound(a + 1, a + n+1,k) - a;
        if(a[res]==k)
            cout << res;
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}