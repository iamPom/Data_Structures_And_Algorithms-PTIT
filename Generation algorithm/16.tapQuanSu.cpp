/*
        code: 		DSA01010	 	
        title:      TẬP QUÂN SỰ
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[k+5],b[45]={0};
        for(ll m=1;m<=k;m++){
            cin>>a[m];
            b[a[m]]=1;
        }
        ll i =k;
        while(i>0&&a[i]==n-k+i) i--;
        if(i>0) {
            a[i]++;
            for(ll j=i+1;j<=k;j++){
                a[j]=a[j-1]+1;
            }
            for(ll j=1;j<=k;j++){
                b[a[j]]=0;
            }
            ll res=0;
            for(ll j=1;j<=n;j++){
                if(b[j]) res++;
            }
            cout<<res<<endl;
        } else 
            cout<<k<<endl;
    }
    return 0;
}