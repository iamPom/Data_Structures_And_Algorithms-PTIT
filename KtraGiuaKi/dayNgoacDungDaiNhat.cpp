  
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
        if (s[i] == '(') { // n?u là ( thì thêm v? trí d?y vào
            st.push(i);
        } else {
            st.pop(); // xóa di d?u ( tru?c dó
            if (!st.empty()){ // ki?m tra n?u stack r?ng thì thi?t l?p l?i v? trí ban d?u
                res = max(res, i - st.top()); // tìm max
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
