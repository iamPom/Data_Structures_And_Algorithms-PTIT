/*
        code: 			DSA01012	 	 	
        title:          MÃ GRAY 1 
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
        ll n,k=1;
        cin>>n;
        for(ll i=1;i<=n;i++) k*=2;
        string s[k+5];
        s[1]="0";
        s[2]="1";
        if(n>1){
            ll t=2;
            for(ll i=2;i<=n;i++){
                ll l=1;
                for(ll j=1;j<=i;j++) l*=2;
                for(ll j=1;j<=t;j++){
                    s[l-j+1]="1"+s[j];
                    s[j] = "0"+s[j];
                }
                t=l;
            }
        }
        for(ll i=1;i<=k;i++) cout<<s[i]<<' ';
        cout<<endl;
    }
    return 0;
}