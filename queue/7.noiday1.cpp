/*
            code: 	DSA03010	 
            title:  NỐI DÂY 1
*/
#include<bits/stdc++.h>
#define ll long long
const long long mod = 1e9 + 7;
using namespace std;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,val;
        cin >> n;
        priority_queue<long long, vector<long long>, greater <long long> > a;
        for (ll i = 0; i < n;i++){
            cin >> val;
            a.push(val);
        }
        long long res = 0;
        while(a.size()>1){
            ll x = a.top();
            a.pop();
            ll y = a.top();
            a.pop();
            ll tmp = (x + y) % mod;
            res += tmp;
            a.push(tmp);
            res = res % mod;
        }
        cout << res << endl;
    }
    return 0;
}