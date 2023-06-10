/*
            code: 		DSA01006	
            title:      HOÁN VỊ NGƯỢC
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100],n;
bool check;
void xuat(){
    for(ll i=1;i<=n;i++)
        cout<<a[i];
    cout<<" ";
}
void sinh(){
    ll i=n-1;
    while(a[i]<a[i+1]) i--;
    if(i>0){
        ll j=n;
        while(a[i]<a[j]) j--;
        swap(a[i],a[j]);
        ll c=i+1,d=n;
        while(c<d){
            swap(a[c],a[d]);
            c++;
            d--;
        }
    }
    else{
        check=false;
    }
}
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        for (int i = 1; i<= n; i++) {
            a[i] = n-i+1;
        }
        check = true;
        while(check) {
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}