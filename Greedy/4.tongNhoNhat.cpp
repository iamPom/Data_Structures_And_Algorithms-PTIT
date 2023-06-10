/*
            code: 		DSA03004	 	 
            title:      TỔNG NHỎ NHẤT
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
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        ll sum1 = 0, sum2 = 0;
        ll i = 0;
        while(i<n){
            sum1 = sum1 * 10 + a[i++];
            if(i==n)
                break;
            sum2 = sum2 * 10 + a[i++];
        }
        cout<<sum1+sum2<<endl;
    }
    return 0;
}