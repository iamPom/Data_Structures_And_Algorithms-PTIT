/*
        code: 			DSA04004	 	 	 	
        title:          GẤP ĐÔI DÃY SỐ
*/
#include<bits/stdc++.h>
using namespace std;

long long Mul(int n){
    if(n==0) return 1;
    if(n==1) return 2;
    long long p = Mul(n / 2);
    if(n%2) return 2*p*p;
    return p * p;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        long long len = Mul(n) / 2;
        while(1){
            if(n==1){
                cout << 1;
                break;
            }
            if(len==k){
                cout << n;
                break;
            }
            if(k>len){
                k = len - (k - len);
            }
            n--;
            len /= 2;
        }
        cout << endl;
    }
    return 0;
}
