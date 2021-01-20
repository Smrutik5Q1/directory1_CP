#include <bits/stdc++.h>
using namespace std;

//Given a number, reverse the bits in the binary representation 
//(consider 32-bit unsigned data) of the number, and print the new number formed.
unsigned int func(unsigned int A) {
    unsigned int rev=0;
    for(int i=0;i<32;i++) {
        if(A&(1<<i)) {
            rev =rev | (1<<(31-i));
        }
    }
    return rev;
}

int main() {
    unsigned int x;
    cin >> x;
    unsigned int res = func(x);
    cout << res;
}
