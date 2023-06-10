/*
            code: 		CTDL_004	 	 
            title:  DÃY CON TĂNG DẦN BẬC K
*/
#include<bits/stdc++.h>
using namespace std;

int n, k, s,a[100],b[100],dem=0;
int res;

bool check(){
    for(int i=1;i<k;i++){
        if(b[a[i]]>b[a[i+1]]) return false;
    }
    return true;
}
void Try(int i){
    for(int j=a[i-1]+1;j<=n;j++){
        a[i] = j;
        if(i==k){
            if(check()){
                dem++;
            }
        }
        else
            Try(i + 1);
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1;i<=n;i++) cin >> b[i];
    Try(1);
    cout << dem << endl;
    return 0;
}