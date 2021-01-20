//  To search for an element in a circularly sorted array using a variant of Binary Search.
// This search doesnt work if the array contains duplicates


#include <bits/stdc++.h>
using namespace std;

int CircularArraySearch(int *ar,int n,int k) { 	// This function returns the index of k;
	int lo=0,hi=n-1;
	while(lo<=hi) {
		int mid=(lo+hi)/2;
		if(ar[mid]==k) return mid;	// case 1: Found k
		else if(ar[mid]<=ar[hi]) {	// case 2: Right half is sorted
			if(k>ar[mid] && k<=ar[hi]) lo=mid+1;	// k is in the present half, lets go search for k in this search space.
			else hi=mid-1;
		}
		else if(ar[lo]<=ar[mid]) {	// case 3: Left half is sorted
			if(k>=ar[lo] && k<ar[mid]) hi=mid-1;	// k is in the present half, lets search for k in this search space.
			else lo=mid+1;
		}
	}
	return -1;	// k is not found.
}

int main() {
	// your code goes here
	int n,k; cin >> n >> k;
	int ar[n];
	for(int i=0;i<n;i++) cin >> ar[i];
	int ans=CircularArraySearch(ar,n,k);
	cout << ans << '\n';
	return 0;
}
