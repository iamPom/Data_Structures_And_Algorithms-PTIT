/*
        code: 			DSA04001	 	 	 	
        title:          LŨY THỪA
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
    ll mod = 1e9 + 7;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll res = 1;
        while(k){
            if(k%2==1){
                res = (res * n) % mod;
            }
            k /= 2;
            n = (n * n) % mod;
        }
        cout<<res << endl;
    }
    return 0;
}