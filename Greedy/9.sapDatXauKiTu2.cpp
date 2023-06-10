/*
            code: 		DSA03013	 	 
            title:      SẮP ÐẶT XÂU KÝ TỰ 2
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  t;
    cin >> t;
    while(t--){
        string s;
        ll n;
        cin>>n>>s;
        ll a[200] = {0};
        ll max = 0;
        for (ll i = 0;i<s.size();i++){
            a[s[i]]++;
            if(a[s[i]]>max) max=a[s[i]];
        }
        if(s.size()%n==0){
            if(max<=s.size()/n)
                cout << 1;
            else
                cout << -1;
        }else{
            if(max<=(s.size()/n)+1)
                cout << 1;
            else
                cout << -1;
        }
        cout << endl;
    }
    return 0;
}