/*
            code: 	DSA06040	
            title: GIAO CỦA BA DÃY SỐ,Dãy con chung
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
        ll a, b, c;
        cin >> a >> b >> c;
        ll A[a], B[b], C[c];
        for (ll i = 0; i<a;i++) cin>>A[i];
        for (ll i = 0; i<b;i++) cin>>B[i];
        for (ll i = 0; i<c;i++) cin>>C[i];
        bool check = true;
        ll n=0, m=0, p=0;
        while (n < a&&m<b&&p<c){
            if(A[n]==B[m]&& B[m]==C[p]){
                cout << A[n] << " ";
                check = false;
                n++;    m++;    p++;
            } 
            else
            if(A[n]<B[m])
                n++;
            else if(B[m]<C[p])
                m++;
            else
                p++;
        }
        if (check)
            cout << "NO";
        cout << endl;
    }
	return 0;
}