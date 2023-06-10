/*
            code: 		DSA02007	 	 
            title:      ĐỔI CHỖ CÁC CHỮ SỐ
*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        int k;
        cin >> k >> s;
        for(int i=0; i<s.size(); i++){
            char Max=s[s.size()-1];
            int vt= s.size()-1;
            if(k==0)
                break;
            for (int j = s.size() - 1; j >= i;j--){
                if(Max < s[j]){
                    Max=s[j];
                    vt = j;
                }
            }
            if(Max>s[i]){
                swap(s[i],s[vt]);
                k--;
            } 
        }
        cout<<s<<endl;
    }
    return 0;
}