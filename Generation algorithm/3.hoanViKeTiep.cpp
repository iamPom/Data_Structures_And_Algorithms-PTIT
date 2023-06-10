/*
            code: 	DSA01003	 
            title:  HOÁN VỊ KẾ TIẾP	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1000],n;
void xuat(){
    for(ll i=1;i<=n;i++)
        cout<<a[i]<<" ";
}
void sinh(){
    ll i=n-1;
    while(a[i]>a[i+1]) i--;
    if(i>0){
        ll j=n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        ll c=i+1,d=n;
        while(c<d){
            swap(a[c],a[d]);
            c++;d--;
        }
    }
    else{
        for(ll i=1;i<=n;i++)
            a[i]=i;
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        sinh();
        xuat();
        cout<<endl;
            
    }
    return 0;
}