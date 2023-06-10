/*
        code: 			DSA01019	   	 	
        title:          HAHAHA	 
*/
#include<bits/stdc++.h>
using namespace std;
int n, a[50];
void print(){
    for (int i = 1; i <=n;i++){
        if(a[i]==0){
            cout << "A";
        } else{
            cout << "H";
        }
    }
    cout << endl;
}
bool check(){
    if(a[1]==0||a[n]==1)
        return false;
    for (int i = 1; i <= n;i++){
        if(a[i]==1&&a[i+1]==1) return false;
    }
    return true;
}
void Try(int i){
    for (int j = 0; j <= 1;j++){
        a[i] = j;
        if(i==n){
            if(check()){
                print();   
            }
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
        cin >> n;
        Try(1);
    }
    return 0;
}