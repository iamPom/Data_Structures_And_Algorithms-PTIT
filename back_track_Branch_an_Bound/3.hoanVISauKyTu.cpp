/*
            code: 		DSA02005	 	 
            title:      HOÁN VỊ XÂU KÝ TỰ	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100],n;
bool chuaxet[100];

string s;

void sinhHoanVi(ll i){
    for(ll j=0;j<s.size();j++){
        if(!chuaxet[j]){
            a[i] = j;
            chuaxet[j] = true;
            if(i==s.size()){
                for(ll l=1;l<=s.size();l++){
                    cout << s[a[l]];
                }
                cout<<' ';
            }
            else
                sinhHoanVi(i + 1);
            chuaxet[j]=false;
        }
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        cin>>s;
        sort(s.begin(), s.end());
        sinhHoanVi(1);
        cout<<endl;
    }
    return 0;
}