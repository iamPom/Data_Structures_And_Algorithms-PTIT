/*
            code: 		DSA02001	 	 
            title:      DÃY SỐ 1		
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
        ll n;
        cin>>n;
        ll a[n+1][n+1];
        for(ll i=1;i<=n;i++) cin>>a[1][i];
        ll cot=n-1;
        for(ll i=2;i<=n;i++){
            for(ll j=1;j<=cot;j++){
                a[i][j]=a[i-1][j]+a[i-1][j+1];
            }
            cot--;
        }
        cot=n;
        for(ll i=1;i<=n;i++){
            cout<<"[";
            for(ll j=1;j<cot;j++){
                cout<<a[i][j]<<' ';
            }
            cout<<a[i][cot--]<<"]"<<endl;
            
        }
    }
    return 0;
}