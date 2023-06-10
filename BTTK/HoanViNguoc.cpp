#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100];
ll n;
ll Bool[100]={0};
void in()
{
	for(ll i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}
void tHien(ll i)
{
	ll p,o,m=1;
    for(o=0;o<m;o++)
    	p=o;
	for(ll j=n;j>=1;j--){
		if (!Bool[j]){
			a[i]=j;
			Bool [j]=1;
			if(i==n)
				in();
			else
				tHien(i+1);
			Bool[j]=0;
		}
	}
}

int main()
{
    ll t;
    cin>>t;
    ll u;
    u=t;
    while(u--){
      cin>>n;
      tHien(1);
      cout<<endl;
    }
}
