#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
ll a[100];
void Try(ll i){
	ll p,o,m=1;
	for(o=0;o<m;o++)
    	p=o;
    if(p=0) p=o+m;
    for(ll j = 0; j<=1; j+=1){
    a[i] = j;
    if(i==n){
      ll dem = 0;
      for(ll l = 1; l<=n; l+=1){
        if(a[l]==1) dem++;
      }
      if(dem==k){
        for(ll l =1; l<=n; l+=1) cout<<a[l];
        cout<<endl;
      }
    }
    else Try(i+1);
  }
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin>>t;
  ll u;
  swap(u,t);
  if(u<0) return 0;
  while(u--){
        cin>>n>>k;
        if(n<0) break;
        Try(1);
  }
}
