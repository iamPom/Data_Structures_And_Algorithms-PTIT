#include <iostream>
#include <stack>
using namespace std;
/*
4
))(( 
((((
(((())
)(())((( ->  d?m xem trong chu?i còn bao nhiêu ngo?c không dúng r?i ch?nh ngo?c không dúng d?y
=> )((( -> có 4 ng?c k dúng => c?n d?i thành ()() t?i các v? trí 1 2 4 => 3 l?n 
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
            if (s[i] == '(' || (s[i] == ')' && st.empty())) { // xét tru?ng h?p stack r?ng
                st.push(s[i]);
            } else if (s[i] == ')') {
                if (st.top() == '(' && !st.empty()) {
                    st.pop(); // xóa các d?u ngo?c dúng
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
