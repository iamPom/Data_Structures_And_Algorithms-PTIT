/*
            code: 		DSA01008	 	
            title:      XÂU NHỊ PHÂN CÓ K BIT 1
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100],n,k;
bool check;
void xuat(){
    for(ll i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
}
void sinh(){
    ll i=n;
    while(a[i]==1) {
        a[i--]=0;
    }   
    if(i>0){
        a[i]=1;
    }
    else{
        check=false;
    }
}
bool checkBit(){
    ll b[3]={0};
    for(ll i=1;i<=n;i++){
        b[a[i]]++;
    }
    return (b[1]==k);
}
    
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n>>k;
        check = true;
        while(check) {
            if(checkBit()) xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}