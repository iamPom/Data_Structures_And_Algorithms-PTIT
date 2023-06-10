#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, temp;
        cin >> n;
        int A[n+5];
        int B[n+5]={1};
        stack <int> st;
        for (int i = 1; i <= n; i++) {
            cin >> A[i];
        }
        st.push(A[1]);
        for (int i = 2; i <= n; i++) {
            if(A[i]>=A[i-1]){

            }
        }
        for (int i = 1; i <= n; i++) {
            cout << B[i] << " ";
        }
        cout << endl;
    }
    return 0;
}