/*
            code: 		DSA03019    	 	 
            title:      PHÂN SỐ ĐƠN VỊ
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll  t;
    cin >> t;
    while(t--){
        ll tu, mau;
        cin >> tu >> mau;
        while(1){
            if(mau%tu==0){
                cout << "1/" << mau / tu << endl;
                break;
            }
            ll res = mau / tu + 1;
            cout << "1/" << res << " + ";
            tu = tu * res - mau;
            mau = mau * res;
        }
    }
    return 0;
}