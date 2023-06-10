/*
        code: 	DSA01001
        title: XÂU NHỊ PHÂN KẾ TIẾP
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        ll n = a.length();
        ll i = n - 1;
        while (i >= 0 && a[i] == '1')
        {
            a[i] = '0';
            i--;
        }
        if (i >= 0)
            a[i] = '1';
        cout << a << endl;
    }
    return 0;
}