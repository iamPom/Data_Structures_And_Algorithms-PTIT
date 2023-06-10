/*
        code: 			DSA04005	 	 	 	
        title:          DÃY XÂU FIBONACI
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
        ll n, i;
        cin >> n >> i;
        ll f[93];
        f[1] = f[2] = 1;
        for (ll j = 3; j < 93;j++){
            f[j] = f[j - 1] + f[j - 2];
        }
        while(n>2){
            if(i<=f[n-2]) n-=2;
            else{
                i-=f[n-2];
                n--;
            }
        }
        if(n==1)
            cout << "A";
        else
            cout << "B";
        cout << endl;
    }
    return 0;
}