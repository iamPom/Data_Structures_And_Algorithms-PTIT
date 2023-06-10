/*
        code: 			DSA01025	   	 	
        title:          ĐẶT TÊN	 
*/
#include<bits/stdc++.h>
using namespace std;
int n, k, a[50];
void print(){
    for (int i = 1; i <= k;i++){
        cout << char(a[i] + 'A' - 1);
    }
    cout << endl;
}

void Try(int i){
    for (int j = a[i-1] + 1; j <= n - k + i;j++){
        a[i] = j;
        if(i==k){
            print();
        }
        else{
            Try(i + 1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin >> n >> k;
        Try(1);
    }
    return 0;
}