/*
        code: 			DSA04017	 	 	 	
        title:          PHẦN TỬ KHÁC NHAU
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
        ll n;
        cin>>n;
        ll a[n],b[n-1];
        for(ll i=0; i<n; i++){
            cin>>a[i];      
        }
        for(ll i=0; i<n-1; i++){
            cin>>b[i];     
        }
        ll k = 0;
        while(a[k]==b[k]) k++;
        cout << k + 1 << endl;
    }
    return 0;
}