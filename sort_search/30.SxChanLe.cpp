/*
            code: 	DSA06044	
            title: SẮP XẾP CHẴN LẺ
*/
#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	ll n;
	cin>>n;
	ll chan=n/2,le=n/2;
	if(n%2==1) le++;
	ll arr[n],a[chan],b[le];
	ll countc=0, countl=0;
	for(ll i=0;i<n;i++){
		cin>>arr[i];
		if(i%2==0){
			b[countl]=arr[i];
			countl++;
		}else{
			a[countc]=arr[i];
			countc++;
		}	
	}
	sort(b,b+countl);
	sort(a,a+countc,greater<ll>());
	for(ll i=0;i<n/2+1;i++){
		if(i<le) cout<<b[i]<<" ";
		if(i<chan) cout<<a[i]<<" ";
	} cout<<endl;
	return 0;
}