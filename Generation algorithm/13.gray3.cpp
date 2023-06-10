/*
        code: 			DSA01017	  	 	
        title:          MÃ GRAY 3	 
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
        string s;
        cin>>s;
        cout<<s[0];
        for(ll i=1;i<s.length();i++){
            if(s[i]!=s[i-1]) cout<<1;
            else cout<<0;
        } cout<<endl;
    }
    return 0;
}