/*
            code: 	DSA01004	SINH TỔ HỢP	
            title: SINH TỔ HỢP	
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[20], n, k;
bool check;
void xuat()
{
    for (ll i = 1; i <= k; i++)
        cout << a[i];
    cout << ' ';
}
void sinh()
{
    ll i = k;
    while (a[i] == n - k + i)
        i--;
    a[i]++;
    if (i > 0)
    {
        for (ll j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    else
        check = false;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (ll i = 1; i <= k; i++)
        {
            a[i] = i;
        }
        check = true;
        while (check)
        {
            xuat();
            sinh();
        }
        cout << endl;
    }
    return 0;
}