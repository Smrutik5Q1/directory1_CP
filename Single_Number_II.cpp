// finding a number that occurs only once.
// Using bit manipulation
// Eg.: in an array {2,2,2,4} 4 occurs only once.

#include<bits/stdc++.h>
using namespace std;
int singleNumber(const vector<int> &A) {
	int n=A.size();
	// once=keeps track of numbers occuring once
	//twice= keeps track of numbers occuring twice
	// SO, FOR AN ELEMENT OCCURING THRICE, BOTH ONCE AND TWICE BECOME 0
	int once=0,twice=0; 
	for(int i=0;i<n;i++) {
		once = (once^A[i])&(~twice);
		twice = (twice^A[i])&(~once);
	}
	return once;
}

int main() {
	vector<int> A= {2,2,2,4};
	int ans = singleNumber(A);
	cout << ans << '\n';
}
