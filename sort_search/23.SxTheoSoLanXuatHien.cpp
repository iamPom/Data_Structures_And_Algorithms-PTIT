/*
        code: 		DSA06019	 	
        title:      SẮP XẾP THEO SỐ LẦN XUẤT HIỆN
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct dta{
    ll val,count;
};
bool cmp(dta a, dta b){
    if(a.count>b.count) return true;
    if(a.count== b.count&&a.val<b.val) return true;
    return false;
}
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll t;
	cin>>t;
	while(t--){
        ll n;
        cin>>n;
        ll d[100001]={0};
        dta a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i].val;
            d[a[i].val]++;
        }
        for(ll i=0;i<n;i++){
            a[i].count=d[a[i].val];
        }
        sort(a,a+n,cmp);
        for(ll i=0;i<n;i++){
            cout<<a[i].val<<" ";
        } cout<< endl;

	}
	return 0;
}

