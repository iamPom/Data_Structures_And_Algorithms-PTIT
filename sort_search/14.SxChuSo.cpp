/*
            code: DSA06010
            title: SẮP XẾP CHỮ SỐ
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
        ll a[n];
        bool check[9];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            while(a[i]>10){
                check[a[i]%10]=true;
                a[i]/=10;
            }
        } 
        for(ll i=0;i<=9;i++){
            if(check[i]==true) cout<<i<<" ";
        } cout<<endl;
    }
    return 0;
}