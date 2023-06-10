/*
            code: 		DSA05009	 	 
            title:      TẬP CON BẰNG NHAU
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
        cin>>n;
        ll a[n+5]={0},sum=0;
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum%2==1){
            cout << "NO";
        }      
        else{
            ll res = sum / 2;
            ll dp[res + 1] = {0};
            dp[0] = 1; 
            for(ll i = 0; i < n; i++){
                for(ll j = res; j >=a[i]; j--){
                    if(dp[j-a[i]]==1) dp[j]=1;
                }
            }
            if(dp[res]==1)
                cout << "YES";
            else cout<<"NO";
        }
        cout << endl;
    }
    return 0;
}