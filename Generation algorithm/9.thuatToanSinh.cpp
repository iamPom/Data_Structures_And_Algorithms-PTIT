/*
            code: 		CTDL_001	 
            title: THUẬT TOÁN SINH
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100],n;
bool check;
vector< vector<ll> > res;

void sinh(){
    ll i=n;
    while(a[i]==1) {
        a[i--]=0;
    }
    if(i>0) a[i]=1;
    else check=false;
}
bool checkDx(){
    ll i=1,j=n;
    while(a[i]==a[j]){
        i++;
        j--;
        if(i>=j) return true;
    } return false;
}
void xuat(){
    for(ll i=0;i<res.size();i++){
        for(ll j=0;j<res[i].size();j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(ll i=1;i<=n;i++){
        a[i]=0;
    }
    check=true;
    while(check){
        if(checkDx()){
            vector<ll> index;
            for(ll i=1;i<=n;i++){
                index.push_back(a[i]);
            }
            res.push_back(index);
        }
        sinh();
    }
    xuat();
    return 0;
}