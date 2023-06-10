/*
        code: 			DSA04011	  	 	 	
        title:          TÍCH HAI SỐ NHỊ PHÂN		
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
        string s1, s2;
        cin >> s1 >> s2;
        long long a = 0, b = 0, c = 1;
        for (ll i = s1.size() - 1; i >= 0;i--){
            a += int(s1[i] - '0') * c;
            c *= 2;
        }
        c = 1;
        for (ll i = s2.size() - 1; i >= 0;i--){
            b += int(s2[i] - '0') * c;
            c *= 2;
        }
        cout << a *b << endl;
    }
    return 0;
}