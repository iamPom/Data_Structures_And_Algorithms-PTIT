/*
            code: 	DSA01007	
            title: XÂU AB CÓ ĐỘ DÀI N
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;
bool check;
void sinh(){
    ll k = s.length()-1;
    while(s[k]=='B'){
        s[k--]='A';
    }
    if(k>=0) s[k]='B';
    else check = false;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        s="";
        for(ll i=0;i<n;i++){
            s+="A";
        } 
        check= true;
        while(check){
            cout<<s<<" ";
            sinh();
        }
        cout<<endl;
            
    }
    return 0;
}