#include <iostream>
#include <stack>
using namespace std;
/*
3
((a+b)) ->  th�m v�o stack l?n lu?t, n?u g?p d?u ")" th� t�m d?u "(" g?n n� nh?t
pop ra
=> n?u trong () m� r?ng th� in ra YES else NO
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
            } else { // x? l� tru?ng h?p d�ng ngo?c
                char top = st.top();st.pop(); // l?y ph?n t? d?u stack
                check = false; // t?o bi?n ki?m tra xem trong () c� operator hay kh�ng
                while (top != '(') { // b? cho d?n khi d?u stack l� "("
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
