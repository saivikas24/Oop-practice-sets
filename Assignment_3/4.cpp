// Problem: For each element, find the next greater element on the right.

#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> a = {4, 5, 2, 25};
    int n = a.size();

    vector<int> ans(n, -1);
    stack<int> st;

    for(int i = n - 1; i >= 0; i--) {

        while(!st.empty() && st.top() <= a[i])
            st.pop();

        if(!st.empty())
            ans[i] = st.top();

        st.push(a[i]);
    }

    for(int x : ans)
        cout << x << " ";

    return 0;
}

