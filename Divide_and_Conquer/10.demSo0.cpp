/*
        code: 			DSA04018	 	 	 	
        title:          ĐẾM SỐ 0
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
        ll a[n],count=0;
        for(ll i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0){
                count++;
            }       
        }
        cout << count << endl;
    }
    return 0;
}