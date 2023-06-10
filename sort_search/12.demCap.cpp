/*
            code: 	DSA06008	 
            title:  ĐẾM CẶP
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll count(ll b[],ll m,ll d[],ll x){
    if(x==0) return 0;
    if(x==1) return d[0];
    ll tmp = upper_bound(b,b+m,x)-b;
    ll ans = m-tmp;
    ans += d[0] +d[1];
    if(x==2) ans-= (d[3]+d[4]);
    if(x==3) ans +=d[2];
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll a[n],b[m];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        } 
        ll d[10]={0};
        for(ll i=0;i<m;i++){
            cin>>b[i];
            if(b[i]<5) d[b[i]]++;
        } 
        sort(b,b+m);
        ll res=0;
        for(ll i=0;i<n;i++){
            res+=count(b,m,d,a[i]);
        } cout<<res<<endl;
    }
    return 0;
}