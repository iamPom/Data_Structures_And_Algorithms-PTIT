/*
            code: 		DSA03001	 	 
            title:      ĐỔI TIỀN	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
        int count = 0;
        for (ll i = 9; i >= 0;i--){
            while(n/a[i]){
                count+=n/a[i];
                n=n%a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}