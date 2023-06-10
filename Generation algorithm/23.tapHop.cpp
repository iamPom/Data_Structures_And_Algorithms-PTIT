/*
            code: 	DSA01014	 
            title:  TẬP HỢP
*/
#include<bits/stdc++.h>
using namespace std;

int n, k, s,a[100];
int res;

void Try(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        a[i] = j;
        if(i==k){
            int sum = 0;
            for (int l = 1; l <= k;l++){
                sum += a[l];
            }
            if(sum==s) res++;
        }else
            Try(i + 1);
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while(1){
        cin >> n >> k >> s;
        if(n==0&&s==0&&k==0) break;
        res = 0;
        for (int i = 0; i < 11;i++){
            a[i] = 0;
        }
        Try(1);
        cout<<res<<endl;
            
    }
    return 0;
}