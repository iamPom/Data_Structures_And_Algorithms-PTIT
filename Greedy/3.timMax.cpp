/*
            code: 		DSA03003	 	 
            title:      TÌM MAX
*/
#include<bits/stdc++.h>
#define modulo 1000000007
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long a[n],sum=0;
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        for (long long i = 0; i < n; i++){
            sum += (a[i] * i);
            sum %= modulo;
        }
        cout << sum << endl;

    }
    return 0;
}