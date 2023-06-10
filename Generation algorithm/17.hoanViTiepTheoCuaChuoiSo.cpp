/*
        code: 	DSA01011		 
        title:  HOÁN VỊ TIẾP THEO CỦA CHUỖI SỐ	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

string s;

void sinh(){
    ll i=s.length()-2;
    while(s[i]>=s[i+1]) i--;
    if(i>=0){
        ll j=s.length()-1;
        while(s[i]>=s[j]) j--;
        swap(s[i],s[j]);
        ll c=i+1,d=s.length()-1;
        while(c<d){
            swap(s[c],s[d]);
            c++;d--;
        }
    }
    else{
        s="BIGGEST";
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n>>s;
        sinh();
        cout<<n<<' '<<s<<endl;
            
    }
    return 0;
}