#include <iostream>
#include <stack>
using namespace std;
/*
4
))(( 
((((
(((())
)(())((( ->  d?m xem trong chu?i c�n bao nhi�u ngo?c kh�ng d�ng r?i ch?nh ngo?c kh�ng d�ng d?y
=> )((( -> c� 4 ng?c k d�ng => c?n d?i th�nh ()() t?i c�c v? tr� 1 2 4 => 3 l?n 
tuong ?ng s? ng?c (/2 + )/2 + du c?a 2 ngo?c
2
2
1
3
*/
int main() {
    int t;
    cin >> t;
    // t = 1;
    while(t--) {
        string s;
        cin >> s;
        // s = "))((";
        stack <char> st;
        for (int i = 0; i< s.size(); i++) {
            if (s[i] == '(' || (s[i] == ')' && st.empty())) { // x�t tru?ng h?p stack r?ng
                st.push(s[i]);
            } else if (s[i] == ')') {
                if (st.top() == '(' && !st.empty()) {
                    st.pop(); // x�a c�c d?u ngo?c d�ng
                } else {
                    st.push(s[i]);
                }
            } 
        }
        int n1=0,n2=0;
        while(!st.empty()) {
            if (st.top() == '(') n1++;
            else n2++;
            st.pop();
        }
        cout << n1/2 + n2/2+ n1%2 + n2%2 << endl;
    }
    return 0;
}
