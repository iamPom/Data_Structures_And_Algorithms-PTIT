  
#include <iostream>
#include <string>
#include <stack>
using namespace std;
/*
3
((()
0123
)()())
012345
()(()))))
012345678
*/
int longest_string(string s) {
    int res = 0;
    int length_String = s.length();
    stack <int> st;
    st.push(-1);
    for (int i = 0; i < length_String; i++) {
        if (s[i] == '(') { // n?u l� ( th� th�m v? tr� d?y v�o
            st.push(i);
        } else {
            st.pop(); // x�a di d?u ( tru?c d�
            if (!st.empty()){ // ki?m tra n?u stack r?ng th� thi?t l?p l?i v? tr� ban d?u
                res = max(res, i - st.top()); // t�m max
            } else {
                st.push(i);
            }
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;   
        // s = ")()())";
        cout << longest_string(s) << endl;
    }
    return 0;
}
