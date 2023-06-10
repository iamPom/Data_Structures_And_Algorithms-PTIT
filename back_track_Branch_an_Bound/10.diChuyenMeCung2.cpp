/*
            code: 		DSA02004	 	 
            title:      DI CHUYỂN TRONG MÊ CUNG 2
*/
#include<bits/stdc++.h>
using namespace std;

int n, a[100][100];
vector <string> res;
bool ok[100][100];


void Try(int i,int j, string s){
    if(a[1][1]==0||a[n][n]==0){
        return;
    }
    if(i==n&&j==n){
        res.push_back(s);
        return;
    }
    if (a[i + 1][j]&&i!=n&&!ok[i+1][j]){
        ok[i][j] = true;
        Try(i + 1, j, s + "D");
        ok[i][j] = false;
    }
    if (a[i][j+1]&&j!=n&&!ok[i][j+1]){
        ok[i][j] = true;
        Try(i, j+1, s + "R");
        ok[i][j] = false;
    }
    if (a[i - 1][j]&&i!=1&&!ok[i-1][j]){
        ok[i][j] = true;
        Try(i - 1, j, s + "U");
        ok[i][j] = false;
    }
    if (a[i][j-1]&&j!=1&&!ok[i][j-1]){
        ok[i][j] = true;
        Try(i, j-1, s + "L");
        ok[i][j] = false;
    }
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
                ok[i][j] = false;
            }
        }
        res.clear();
        Try(1, 1, "");
        if(res.size()==0){
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