/*
            code: 		DSA02016	 	 
            title:      SẮP XẾP QUÂN HẬU 1
*/
#include <bits/stdc++.h>
using namespace std;

int n,res;
bool h[11], c[11], nguoc[22], xuoi[22];

void Try(int i){
    for (int j = 1; j <= n;j++){
        if(!h[j]&&!c[j]&&!nguoc[i+j-1]&&!xuoi[i-j+n]){
            h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = true;
            if(i==n){
                res++;
            } else
                Try(i + 1);
            h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = false;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        res = 0;
        cin >> n ;
        Try(1);
        cout << res << endl;
    }
    return 0;
}