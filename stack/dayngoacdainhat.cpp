#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        ll res=0, n = s.size();
        stack<ll> stk;
        stk.push(-1);
    	for(ll i=0;i<n;i++){
    		if(s[i]=='(')
    			stk.push(i);
    		else{
    			stk.pop();
    			if(stk.size()>0)
    				res= max(res,i-stk.top());
    			if(stk.size()==0) stk.push(i);
			}
		} cout<<res<<endl;
    }
    return 0;
}
