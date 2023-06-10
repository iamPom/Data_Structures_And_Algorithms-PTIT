/*
            code: 		DSA03015	 	 
            title:      MUA LƯƠNG THỰC
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  t;
    cin >> t;
    while(t--){
        int n,s,m;
        cin >> n >> s >> m;
        int temp = s / 7;
        if(s*m>n*(s-temp)){
            cout << -1 << endl;
        }else{
            for (int i = 1;i<=s-temp;i++){
                if(i*n>=s*m){
                    cout << i<<endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}