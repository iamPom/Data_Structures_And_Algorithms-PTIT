#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   	int n;
   	cin>>n;
   	int a[n];
   	for(int i=0;i<n;i++){
   		cin>>a[i];
	}
	sort(a,a+n);
   	ll res1= max(a[0]*a[1],a[n-1]*a[n-2]);
   	ll res2= max(a[0]*a[1]*a[n-1],a[n-1]*a[n-2]*a[n-3]);
   	cout<<max(res1,res2)<<endl;
    return 0;
}
