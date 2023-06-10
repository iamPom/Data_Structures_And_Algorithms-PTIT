/*
            code: 		DSA02017	 	 
            title:      SẮP XẾP QUÂN HẬU 12
*/
#include <bits/stdc++.h>
using namespace std;

int n,res,val[9][9],ok[9];
bool h[9], c[9], nguoc[18], xuoi[18];

void Try(int i){
    for (int j = 1; j <= n;j++){
        if(!h[j]&&!c[j]&&!nguoc[i+j-1]&&!xuoi[i-j+n]){
            ok[i] = j;
            h[j] = c[j] = nguoc[i + j - 1] = xuoi[i - j + n] = true;
            if(i==n){
                int sum = 0;
                for (int l = 1; l <= 8;l++){
                    sum += val[l][ok[l]];
                }
                res = max(res, sum);
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
        n = 8;
        for (int i = 1; i <= 8;i++){
            for (int j = 1; j <= 8;j++){
                cin >> val[i][j];
            }
        }
            Try(1);
        cout << res << endl;
    }
    return 0;
}