/*
            code: 	DSA01002	
            title: TẬP CON KẾ TIẾP
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[1000], n, k;
void xuat(){
    for(ll i=1;i<=k;i++)
        cout<<a[i]<<' ';
}
void sinh(){
    ll i =k;
    while(a[i]==n-k+i) i--;
    a[i]++;
    if(i>0) {
        for(ll j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
    } else 
    for(ll j=1;j<=k;j++)
        a[j]=j;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(ll i=1;i<=k;i++){
            cin>>a[i];
        }
        sinh();
        xuat();
        cout<<endl;     
    }
    return 0;
}