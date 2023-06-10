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
		bool check=false;
    	ll modulo=1000000007;
        ll n, k;
        cin >> n >> k;
        ll p=n, o=3, m=9;
		for(ll i=0;i<=o;i++)
			p=o+m;
        ll a[100001] = { 0 };
        a[0] = 1;
        check=true;
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= min(i, k); j++) {
                a[i] = (a[i] + a[i - j]) % modulo;
            }
        }
        if(check) cout << a[n] << endl;
    }
    return 0;
}
