/*
        code: 			DSA04010	  	 	 	
        title:          DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT
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
        vector<ll> a(n);
        for (ll i = 0;i<n;i++){
            cin >> a[i];
        }
        int s = 0, Max = -1e9;
        for (int i = 0; i < n;i++){
            if(s+a[i]<0){
                s = 0;
            }else{
                s = s + a[i];
                Max = max(Max, s);
            }
        }
        cout << Max << endl;
    }
    return 0;
}