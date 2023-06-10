/*
            code: 		DSA030012	 	 
            title:      SẮP ĐẶT XÂU KÝ TỰ 1
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
        cin >> s;
        ll a[200] = {0};
        ll max = 0;
        for (ll i = 0;i<s.size();i++){
            a[s[i]]++;
            if(a[s[i]]>max) max=a[s[i]];
        }
        if(s.size()%2==0){
            if(max<=s.size()/2)
                cout << 1;
            else
                cout << -1;
        }else{
            if(max<=(s.size()/2)+1)
                cout << 1;
            else
                cout << -1;
        }
        cout << endl;
    }
    return 0;
}