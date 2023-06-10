/*
            code: 		DSA03018	 	 
            title:      SỐ MAY MẮN
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int  t;
    cin >> t;
    while(t--){
        int s;
        cin>>s;
        int d4 = 0, d7 = 0;
        int res4 = 1e6, res7 = 1e6;
        for(int i=s; i>=0; i--){
            if((s-(4*i))%7==0 && (s>=4*i)){
                d4 = i;
                d7 = (s - (4 * i)) / 7;
                if(res4+res7>d4+d7){
                    res4 = d4;
                    res7 = d7;
                }
            }
        }
        if(4*res4+7*res7==s){
            for (int i = 0; i<res4 ;i++)
                cout << "4";
            for (int i = 0; i<res7;i++)
                cout << "7";
        } else
            cout << "-1";
        cout << endl;
    }
    return 0;
}