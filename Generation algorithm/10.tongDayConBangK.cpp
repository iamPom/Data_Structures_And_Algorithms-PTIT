/*
            code: 		CTDL_002	 
            title: Tổng dãy con = K
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100],b[100],n,k;
bool check;

void sinh(){
    ll i=n;
    while(a[i]==1) {
        a[i--]=0;
    }
    if(i>0) a[i]=1;
    else check=false;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(ll i=1;i<=n;i++){
        cin>>b[i];
        a[i]=0;
    }
    check=true;
    ll count=0;
    while(check){
        ll sum=0;
        for(ll i=1;i<=n;i++){
            if(a[i]) sum+=b[i];
        }
        if(sum==k){
            count++;
            for(ll i=1;i<=n;i++){
                if(a[i]) cout<<b[i]<<" ";
            }
            cout<<endl;
        }
        sinh();
    }
    cout<<count;
    return 0;
}