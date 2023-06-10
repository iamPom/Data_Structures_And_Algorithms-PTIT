#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,sum=0;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n%2==0){
            sum=(n+1)*(n/2);
        } else{
            sum=(n+1)*(n/2)+(n/2+1);
        } cout<<sum<<endl;
        
    }
    return 0;
}