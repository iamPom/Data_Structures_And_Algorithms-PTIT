/*
            code: 	DSA01015	 
            title:  TÌM BỘI SỐ	
*/
#include<bits/stdc++.h>
using namespace std;

int m, n, a[20];
long long res;
bool ok;

void Try(int i){
    for(int j=0;j<=1;j++){
        a[i] = j;
        if(i==m){
            long long s = 0;
            for (int l = 1; l <= m;l++){
                s = 10 * s + a[l];
            }
            s *= 9;
            if(s%n==0&&s>=n){
                res = min(res, s);
                ok = true;
            }
        }else
            Try(i + 1);
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        m = 1;
        ok = false;
        res = 1e18;
        cin>>n;
        while(m<=17&& !ok){
            Try(1);
            m++;
        }
        cout<<res<<endl;
            
    }
    return 0;
}