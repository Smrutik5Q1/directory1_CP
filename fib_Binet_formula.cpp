#include <bits/stdc++.h>
using namespace std;

bool pers(int n) { 
    // Find the mid value 
    // from start and last
    long long lo=0,hi=n;
    while(lo<=hi) {
		long long mid = (lo+hi) / 2;
		if(mid*mid==n) return true;
		else if(mid*mid>n) hi=mid-1;
		else lo=mid+1;
    }
    return false;
} 


bool fib(int n) {
	//bool a= pers(5*n*n + 4);
	//bool b=pers(5*n*n - 4);
	//cout << a << ' ' << b << '\n';
	return(pers(5*n*n + 4)|| pers(5*n*n - 4));
} 

int main() {
	// your code goes here
	int n; cin >> n;
	if(fib(n)) cout << "YES" << '\n';
	else cout << "NO" << '\n';
	return 0;
}
