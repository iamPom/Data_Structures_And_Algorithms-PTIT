/*
            code: 	DSA06003	 
            title:  ĐỔI CHỖ ÍT NHẤT
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n],count=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]) {
                for(ll j=i+1;j<n;j++){
                    if(a[j]==b[i]){
                        swap(a[i],a[j]);
                        count++;
                        break;
                    }
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}