/*
            code: 			DSA01016		 
            title:      	PHÂN TÍCH SỐ
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll a[100],n,k;
bool check;
void xuat(){
    for(ll i =1;i<=k;i++){
        if(i==1) cout<<"(";
        cout<<a[i];
        if(i<k) cout<<" ";
        else cout<<") ";
    }
}

void sinh(){
    ll i=k;
    while(i>=1 && a[i]==1) i--;
    if(i>=1){
        a[i]--;
        ll d=k-i+1;
        for(ll j=i+1;j<=i+d/a[i];j++){
            a[j]=a[i];
        }
        k=i;
        k+=d/a[i];
        if(d%a[i]){
            k++;
            a[k]=d%a[i];
        }
    } else check=false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        check = true;
        k=1;
        a[k]=n;
        while(check){
            xuat();
            sinh();
        }
        cout<<endl;
    }
    return 0;
}