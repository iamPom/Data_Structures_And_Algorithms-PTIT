/*
            code: 		DSA02008	 
            title:      CHỌN SỐ TỪ MA TRẬN VUÔNG CẤP N		
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll x[30],a[30][30],n,k,res;
bool ok[30];
vector<ll> Res;

void Try(long long i){
    for(ll j=1;j<=n;j++){
        if(!ok[j]){
            x[i]=j;
            ok[j]=true;
            if(i==n){
                res=0;
                for(ll l=1;l<=n;l++){
                    res+=a[l][x[l]];
                }
                if(res==k){
                    for(ll l=1;l<=n;l++){
                        Res.push_back(x[l]);
                    }
                }
            }
            else Try(i+1);
            ok[j]=false;
        }
        
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
        cin>>n>>k;
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=n;j++)
                cin>>a[i][j];
        }
        Try(1); 
        cout<<Res.size()/n;
        for(ll i=0;i<Res.size();i++){
            if(i%n==0) cout<<endl;
            cout<<Res[i]<<" ";
        }
    return 0;
}