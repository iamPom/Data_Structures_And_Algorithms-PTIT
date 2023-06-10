/*
            code: DSA06002
            title: SẮP XẾP THEO GIÁ TRỊ TUYỆT ĐỐI
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=1;i<n;i++){
            ll diff=abs(x-a[i]);
            ll j=i-1;
            if(abs(x-a[j])>diff){
                ll temp=a[i];
                while(abs(x-a[j])>diff&&j>=0){
                    a[j+1]=a[j];
                    j--;
                }
                a[j+1]=temp;
            }
        }
        for(ll i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}