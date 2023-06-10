#include <iostream>
#include <stack>
using namespace std;
int checkOperator(char c) {
    if (c == '^') 
        return 3; 
    else if (c == '*' || c == '/') 
        return 2; 
    else if (c == '+' || c == '-') 
        return 1; 
    else 
        return -1; 
}

int main() {
    int t;
    cin >> t;
    // t =1;
    while (t--) {
        string s ="((A+B)*C+D)";
        cin >> s;
        stack < char > st;
        string res= "";
        for (int i = 0; i < s.size(); i++) {
            char x = s[i]; 
            if ((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
                res = res + x; 
            else if (x == '(') 
                st.push(x); 
            else if (x == ')') { 
                while (!st.empty() && st.top() != '(') { //l?p l?i d�n khi g?p '('
                    res = res + st.top();
                    st.pop(); 
                }
                st.pop(); //loai '(' ra khoi stack
            } else { // n?u l� ph�p to�n -> x�t d? uu ti�n c?a ph�p to�n
                while (!st.empty() && checkOperator(x) <= checkOperator(st.top())) { // d? uu ti�n s[i]>st.top()
                    res = res + st.top(); 
                    st.pop(); 
                }
                st.push(x); //dua ph�p to�n v�o
            }
        }
        //dua c�c ph�p to�n c�n l?i v�o
        while (!st.empty()) {
            if (st.top() != '(') {
                res = res + st.top();
            }
            st.pop();
        }
        cout << res << endl;
        }
    return 0;
}
