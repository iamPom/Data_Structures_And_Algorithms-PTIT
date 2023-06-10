#include <bits/stdc++.h>
using namespace std;
/*
2
a�(b+c) -> t? v? tr� m? ngo?c d?n d�ng ngo?c n?u tru?c n� l� d?u �m th� d?i d?u
=> d�ng stack d? luu v? tr� m? ngo?c v� d�ng ngo?c r?i d?i d?u
a-(b-c-(d+e))-f
a-b-c
a-b+c+d+e-f
*/

int main() {
    int t ;
    cin >> t;
    while(t--) {
        string s = "a�(b+c)";
        cin >> s;
        stack <int> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                st.push(i); // luu v? tr� m? ngo?c
            } else if (s[i] == ')'){ // g?p v? tr� d�ng ngo?c
                if (!st.empty()) {
                    int top = st.top();st.pop(); // l?y v? tr� m? ngo?c g?n nh?t
                    if (s[top-1] == '+') continue; // tru?c n� l� d?u + th� k d?i d?u
                    if (s[top-1] == '-') {
                        for (int j = top+1; j< i; j++) { // x�t t? d?u ngo?c d?n cu?i ngo?c
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
