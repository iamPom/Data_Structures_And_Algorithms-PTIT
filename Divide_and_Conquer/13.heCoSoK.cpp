/*
        code: 			DSA04007	  	 	 	
        title:          HỆ CƠ SỐ K		
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string a, b;
        int k;
        cin>>k>>a>>b;
        while(a.size()<b.size()) a="0" +a;
        while(a.size()>b.size()) b="0" +b;
        string res = "";
        int len = a.size();
        int nho = 0;
        for (int i = len - 1; i >= 0;i--){
            int so= int(a[i]-'0') + int(b[i]-'0')+nho;
            res = char(so % k + '0') + res;
            nho = so / k;
        }
        if(nho>0)
            res = char(nho + '0') + res;
        cout <<res<< endl;
    }
    return 0;
}