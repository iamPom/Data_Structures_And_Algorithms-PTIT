#include <iostream>
#include <stack>
#include <string>
using namespace std;

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
        string s ="ABC++";
        cin >> s;
        stack <string> st;
        for (int i = 0; i < s.size(); i++) {
            if (checkOperator(s[i])) {
                string s1 = st.top();st.pop();
                string s2 = st.top();st.pop();
                string s3 = "(" + s2 + s[i] + s1 + ")";
                st.push(s3);
            } else {
                st.push(string(1,s[i]));
            }
        }
        cout << st.top() << endl;
    }
    return 0;
}
