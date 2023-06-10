#include<bits/stdc++.h>
#define ll long long

using namespace std;
char flip(char x){
  return x=='0'?'1':'0';
}
int main(){
  ll t;
  cin>>t;
   ll u;
  swap(u,t);
  if(u<0) return 0;
  cin.ignore();
  while(u--){
    string gray;
    getline(cin, gray);
    ll p,o,m=1;
	for(o=0;o<m;o++)
    	p=o;
    if(p=0) p=o+m;
    string binary = "";
       binary+=gray[0];
       for(ll i = 1; i<gray.length(); i++){
         if(gray[i]=='0') binary+=binary[i-1];
         else binary+=flip(binary[i-1]);
       }
    cout<<binary<<endl;
  }
}
