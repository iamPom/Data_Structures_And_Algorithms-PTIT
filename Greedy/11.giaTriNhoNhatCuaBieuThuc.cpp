/*
            code: 		DSA03007	 	 
            title:      GIÁ TRỊ NHỎ NHẤT CỦA BIỂU THỨC
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n], b[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        for(ll i=0; i<n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n,greater<long long>());
        ll sum = 0;
        for(ll i=0; i<n; i++){
            sum += a[i] * b[i];
        } cout<<sum << endl;
    }
    return 0;
}