#include<bits/stdc++.h>
using namespace std;

int main() {
    cout << "Hello World!" << '\n';
    cout << "This is business" <<'\n';
    stack<int> st;
    int t; scanf("%d", &t);
    while(t--) {
        int x; cin>>x;
        st.push(x);
    }
    while(!st.empty()) {
        cout << st.top() << ' ';
        st.pop();
    }
    cout << '\n';
    return 0;
}