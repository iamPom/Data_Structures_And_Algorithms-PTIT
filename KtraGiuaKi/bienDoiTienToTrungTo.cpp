#include <iostream>
#include <stack>
#include <string>
using namespace std;
/*
2
*+AB-CD
*-A/BC-/AKL
((A+B)*(C-D))
((A-(B/C))*((A/K)-L)
=> duy?t t? ph?i qua tr�i, g?p operator th� l?y ra 2 ph?n t? d?u stack 
g?i l� s1 v� s2
khi d?y res = (+s1+operator+s2+) -> push v�o stack ti?p
*/

bool checkOperator(char x) {
    switch(x) {
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
    // t = 1;
    while(t--) {
        string s ="*+AB-CD";
        cin >> s;
        stack <string> st;
        for (int i = s.size()-1; i>= 0; i--) {
            if (checkOperator(s[i])) {
                string s1 = st.top();st.pop();
                string s2 = st.top();st.pop();
                string s3 = "(" + s1 + s[i] + s2 + ")";
                st.push(s3);
            } else {
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
