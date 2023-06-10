#include<bits/stdc++.h>
#define ll long long
using namespace std;
void xuat(ll a[], ll n){
  for(ll i = 0; i<n; i++){
    printf("%c", a[i]+65);
  }
  cout<<" ";
}
void sinhXauAB(ll a[], ll n, ll i){
	ll p,o,m=1;
	for(o=0;o<m;o++)
    	p=o;
  	if(i==n) {
    	xuat(a, n);
    	return ;
 	}
  	a[i] = 0;
 	sinhXauAB(a, n, i+1);
 	a[i] = 1;
 	sinhXauAB(a, n, i+1);
}
int main(){
  ll t;
  cin>>t;
  ll u;
  swap(u,t);
  while(u--){
    ll n;
    cin>>n;
    ll a[n];
    if(n<0) break;
    sinhXauAB(a, n, 0);
    cout<<endl;
  }
}
