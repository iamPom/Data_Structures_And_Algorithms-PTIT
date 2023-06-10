/*
            code: 	DSA01005	 
            title:  SINH HOÁN VỊ	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100],n;
bool ok[100];
void xuat(){
    for(ll i=1;i<=n;i++)
        cout<<a[i];
    cout<<' ';
}
void sinhHoanVi(ll i){
    for(ll j=1;j<=n;j++){
        if(!ok[j]){
            a[i]=j;
            ok[j]=true;
            if(i==n)
                xuat();
            else sinhHoanVi(i+1);
            ok[j]=false;
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
        cin>>n;
        sinhHoanVi(1);
        cout<<endl;
            
    }
    return 0;
}