/*
            code: 	DSA06014	
            title: TỔNG CẶP SỐ NGUYÊN TỐ
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool b[1000005]={false};
void sangNT(){
    b[0]=true;
    b[1]=true;
    for(ll i=2;i<1000000;i++){
        if(b[i]==false){
            for(ll j=i*2;j<1000000;j+=i){
                b[j]=true;
            }
        }
    }

}
int main(){
    int t;
    cin>>t;
    sangNT();
    while(t--){
        ll n;
        cin>>n;
        bool check=true;
        for(ll j=2;j<=n;j++){
            if(!b[j]&&!b[n-j]){
                cout<<j<<" "<<n-j;
                check=false;
                break;
            }
            
        }
        if(check) cout<<-1;
        cout<<endl;

    }
    return 0;
}