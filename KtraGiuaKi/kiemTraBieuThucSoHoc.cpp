#include <iostream>
#include <stack>
using namespace std;
/*
3
((a+b)) ->  thêm vào stack l?n lu?t, n?u g?p d?u ")" thì tìm d?u "(" g?n nó nh?t
pop ra
=> n?u trong () mà r?ng thì in ra YES else NO
(a + (b)/c)
(a + b*(c-d))
Yes
Yes
No
*/

bool checkOperator(char x) {
    switch (x){
    case '+':
        return true;
    case '-':
        return true;
    case '*':
        return true;
    case '/':
        return true;
    default:
        return false;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        getline(cin>>ws, s);
        stack <char> st;
        bool check;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] != ')') {
                st.push(s[i]);
            } else { // x? lý tru?ng h?p dóng ngo?c
                char top = st.top();st.pop(); // l?y ph?n t? d?u stack
                check = false; // t?o bi?n ki?m tra xem trong () có operator hay không
                while (top != '(') { // b? cho d?n khi d?u stack là "("
                    if (checkOperator(top)) {
                        check = true;
                    }
                    top = st.top();st.pop();
                }
                if (!check) break;
            }
        }
        if (!check) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    return 0;
}
