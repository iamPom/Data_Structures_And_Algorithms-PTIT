/*
            code: 		DSA03006	 	 
            title:      SẮP XẾP THAM LAM
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
            b[i] = a[i];
        }
        sort(b, b + n);
        bool check = true;
        for(ll i=0; i<n; i++){
            if(a[i] != b[i]&&a[i]!=b[n-i-1]){
                check = false;
                break;
            }
        }
        if(check)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}