/*
        code: 		DSA01009	 	
        title:      XÂU AB ĐẶC BIỆT	 
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,k;
vector<string> a;
string s;
bool check=true;

void sinh(){
    ll i=n-1;
    while(s[i]=='B') s[i--]='A';
    if(i>=0) s[i]='B';
    else check = false;
}
bool checkA(){
    ll b[200]={0};
    ll Max=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='A') b['A']++;
        else b['A']=0;
        Max=max(Max,b['A']);
        if(Max>k) return false;
    }
    return Max==k;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        s+="A";
    }
    while(check){
        if(checkA()) a.push_back(s);
        sinh();
    }
    cout<<a.size()<<endl;
    for(ll i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    return 0;
}