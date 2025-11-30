// Program to check whether a string of brackets is valid or not

#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "{[()]}";
    stack<char> st;

    // scannig each character
    for(char c : s) {

        // if it is an opening bracket, push it
        if(c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {

            // if closing bracket comes but stack is empty -> invalid
            if(st.empty()) {
                cout << "Not Valid";
                return 0;
            }

            char top = st.top();
            st.pop();

            // checkingg matching bracket
            if((c == ')' && top != '(') ||
               (c == '}' && top != '{') ||
               (c == ']' && top != '[')) {

                cout << "Not Valid";
                return 0;
            }
        }
    }

    // if stack empty -> all brackets properly closed
    if(st.empty())
        cout << "Valid";
    else
        cout << "Not Valid";

    return 0;
}
