/*
            code: 		DSA03002	 	 
            title:      NHẦM CHỮ SỐ	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll sumMin(string s1, string s2){
    ll n1=0, n2=0;
    ll max = s1.size();
    if(s2.size()>s1.size()) max = s2.size();
    for(int i=0; i<max;i++){
        if(s1[i]=='6')
            s1[i] = '5';
        if(i<s1.size())
            n1 = n1 * 10 + int(s1[i] - '0');
        if(s2[i]=='6')
            s2[i] = '5';
        if(i<s2.size())
            n2 = n2 * 10 + int(s2[i] - '0');    
    }
    return n1 + n2;
}
ll sumMax(string s1, string s2){
    ll n1=0, n2=0;
    ll max = s1.size();
    if(s2.size()>s1.size()) max = s2.size();
    for(int i=0; i<max;i++){
        if(s1[i]=='5')
            s1[i] = '6';
        if(i<s1.size())
            n1 = n1 * 10 + int(s1[i] - '0');
        if(s2[i]=='5')
            s2[i] = '6';
        if(i<s2.size())
            n2 = n2 * 10 + int(s2[i] - '0');    
    }
    return n1 + n2;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s1, s2;
    cin>>s1>>s2;
    cout << sumMin(s1, s2) << " " << sumMax(s1, s2) << endl;
    return 0;
}