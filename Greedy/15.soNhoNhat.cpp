/*
            code: 		DSA03016	 	 
            title:      SỐ NHỎ NHẤT
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
        ll s, d;
        cin>>s>>d;
        ll a[1001] = {0};
        ll n = d;
        if(9*d<s)
            cout << -1;
        else{
            a[0] = 1;
            s--;
            d--;
            while(s>=9){
                a[d] = 9;
                s -= 9;
                d--;
            }
            a[d] += s;
            for (int i = 0; i < n;i++){
                cout << a[i];
            }
        }
        cout << endl;

    }
    return 0;
}