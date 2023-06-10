/*
        code: 			DSA04002	 	 	 	
        title:          LŨY THỪA ĐẢO
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll mod = 1e9 + 7;

ll Pow(ll n, ll r){
    if(r==1) return n% mod;
    ll tmp = Pow(n,r/2);
    if(r%2) return (tmp*tmp%mod)*n%mod;
    return (tmp * tmp % mod);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n, r=0, m;
        cin >> n;
        m = n;
        while(m>0){
            r = r * 10 + m % 10;
            m/=10;
        }
        cout << Pow(n, r) << endl;
    }
    return 0;
}