#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n; cin >> n;
	int ar[n];
	for(int i=0;i<n;i++) {cin >> ar[i];}
	// for(int i=0;i<n;i++) cout << ar[i]<<' ';
	int sum{},best{};
	for(int i=0;i<n;i++) {
		sum=max(ar[i],sum+ar[i]);
		best=max(sum,best);
	}
	cout << best << '\n';
	return 0;
}
