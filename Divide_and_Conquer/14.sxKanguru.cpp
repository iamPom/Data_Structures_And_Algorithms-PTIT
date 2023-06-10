/*
        code: 			DSA04013	  	 	 	
        title:          SẮP XẾP KANGURU	
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int A[n+5];
        for (int i = 0; i < n; i++) {
            cin >> A[i];
        }
        sort(A,A+n);
        int res = n;
        int i = n/2-1, j = n-1;
        while(i >= 0 && j >= n/2) {
            if (A[j] >= 2*A[i]) {
                i--;
                j--;
                res--;
            } else {
                i--;
            }
        }
        cout << res << endl;
    }
    return 0;
}