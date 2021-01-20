#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;cin >>t;
	while(t--){
		int n; cin >> n;
		int ar[n];
		for(int i=0;i<n;i++) cin >> ar[i];
		sort(ar,ar+n);
		if(n==1) cout << ar[0] << '\n';
		if(n==2) cout << max(ar[0],ar[1]) << '\n';
		if(n==3) cout << max(ar[0]+ar[1],ar[2]) << '\n';
		if(n==4) cout << max(ar[0]+ar[3],ar[1]+ar[2]) << '\n';}
		return 0;
}

