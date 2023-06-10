/*
            code: 		DSA02004	 	 
            title:      DÃY CON T?NG B?NG K
*/
#include<bits/stdc++.h>
using namespace std;

int n, a[15],k,v[15];
vector <vector<int> >res;

void Try(int i){
    for (int j = 0; j <= 1;j++){
        a[i] = j;
        if(i==n){
            int sum = 0;
            for (int l = 1; l <= n;l++){
                if (a[l]) sum+=v[l];
            }
            if(sum==k){
                vector<int > x;
                for(int l = 1; l <= n; l++){
                    if(a[l]) x.push_back(v[l]);
                }
                res.push_back(x);
            }
        }else{
            Try(i+1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>> t;
    while(t--){
        cin >> n >> k;
        for (int i = 1; i <= n; i++){
            cin >> v[i];
        }
        res.clear();
        sort(v + 1, v + n + 1);
        Try(1);
        if(res.size()==0){
            cout << -1 << endl;
        } else{
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++){
                cout << "[";
                for (int j = 0;j<res[i].size()-1; j++){
                    cout << res[i][j] << " ";
                }
                cout << res[i][res[i].size() - 1] << "] ";
            }
            cout << endl;
        }
    }
    return 0;
}