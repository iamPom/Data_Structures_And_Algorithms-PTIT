/*
            code: 		DSA03005	 	 
            title:      CHIA MẢNG THÀNH HAI MẢNG CON CÓ TỔNG LỚN NHẤT
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
        int n,k;
        cin >> n >> k;
        long long a[n],sum=0;
        for (long long i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int min;
        if (k <= n / 2)
            min = k;
        else
            min = n - k;
        for (long long i = 0; i < n; i++)
        {
            if(i<min)
                sum -= a[i];
            else
                sum += a[i];
        }
        cout << sum << endl;

    }
    return 0;
}