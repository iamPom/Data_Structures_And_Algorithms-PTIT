/*
        code: 			DSA01013	  	 	
        title:          MÃ GRAY 2	 
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin>>t;
    while(t--){
        string g,b ;
        cin>>g;
        b+=g[0];
        for(ll i=1;i<g.length();i++){
            if(g[i]!=b[i-1]) b+="1";
            else b+="0";
        } cout<<b<<endl;
    }
    return 0;
}