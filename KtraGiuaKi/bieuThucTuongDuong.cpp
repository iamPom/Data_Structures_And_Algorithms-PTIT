#include <bits/stdc++.h>
using namespace std;
/*
2
a–(b+c) -> t? v? trí m? ngo?c d?n dóng ngo?c n?u tru?c nó là d?u âm thì d?i d?u
=> dùng stack d? luu v? trí m? ngo?c và dóng ngo?c r?i d?i d?u
a-(b-c-(d+e))-f
a-b-c
a-b+c+d+e-f
*/

int main() {
    int t ;
    cin >> t;
    while(t--) {
        string s = "a–(b+c)";
        cin >> s;
        stack <int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i); // luu v? trí m? ngo?c
            } else if (s[i] == ')'){ // g?p v? trí dóng ngo?c
                if (!st.empty()) {
                    int top = st.top();st.pop(); // l?y v? trí m? ngo?c g?n nh?t
                    if (s[top-1] == '+') continue; // tru?c nó là d?u + thì k d?i d?u
                    if (s[top-1] == '-') {
                        for (int j = top+1; j< i; j++) { // xét t? d?u ngo?c d?n cu?i ngo?c
                            if (s[j] == '-') {
                                s[j] = '+';
                            } else if (s[j] == '+') {
                                s[j] = '-';
                            }
                        }
                    }
                }
            }
        }
        // cout << s.length() << endl;
        for (int i = 0; i< s.length() ;i++) {
            if (s[i] != '(' && s[i] != ')') {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
