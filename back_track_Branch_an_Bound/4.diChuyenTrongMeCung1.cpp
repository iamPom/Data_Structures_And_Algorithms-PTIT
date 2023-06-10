/*
            code: 		DSA02003	 	 
            title:      DI CHUYỂN TRONG MÊ CUNG 1
*/
#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector <string> res;
bool check;
void Try(int i,int j, string s){
    if(a[1][1]==0||a[n][n]==0){
        return;
    }
    if(i==n&&j==n){
        res.push_back(s);
        check = true;
        return;
    }
    if (a[i + 1][j]&&i<n){
        Try(i + 1, j, s + "D");
    }
    if (a[i][j+1]&&j<n){
        Try(i, j+1, s + "R");
    }
    // if ((i < n && j < n && !a[i + 1][j] && !a[i][j + 1]) || i > n|| j > n){
    //     return;
    // }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= n;j++){
                cin>>a[i][j];
            }
        }
        check = false;
        res.clear();
        Try(1, 1, "");
        if(!check){
            cout << -1 << endl;
        }
        else{
            sort(res.begin(), res.end());
            for (int i = 0;i<res.size();i++){
                cout << res[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}