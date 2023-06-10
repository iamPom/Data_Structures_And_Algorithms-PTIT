/*
            code: 		DSA01018	
            title:      TẬP CON LIỀN KỀ PHÍA TRƯỚC
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[20],n,k;
void xuat(){
    for(ll i=1;i<=k;i++)
        cout<<a[i]<<' ';
}
void sinh(){
    ll i =k;
    while(a[i-1]==a[i]-1) i--;
    if(i>=1){
        a[i]--;
        for(ll j=i+1;j<=k;j++){
            a[j]=n-k+j;
        }
    }
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        bool check= false;
        for(ll i=1;i<=k;i++){
            cin>>a[i];
            if(a[i]!=i) check=true;
        } 
        
        if(check){
            sinh();
            xuat();
        }else 
            for(ll i=1;i<=k;i++){
                cout<<n-k+i<<' ';
            }
        cout<<endl;
            
    }
    return 0;
}