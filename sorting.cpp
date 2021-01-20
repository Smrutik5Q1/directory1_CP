#include <bits/stdc++.h>
using namespace std;

// void bub(int*ar,int n) {		// sorting in ascending order using bubble sort 
// 	for(int i=0;i<n-1;i++) {
// 		for(int j=0;j<n-i-1;j++) {
// 			if(ar[j]>ar[j+1]) swap(ar[j],ar[j+1]);		// ar[j]<ar[j+1] for descending order
// 		}
// 	}
// }


// selection sort using 2 ways
void sele1(int *ar,int n) {		// finding min element and swap towards the beginning of the array 
	for(int i=0;i<n;i++) {
		int minId=i;
		for(int j=i;j<n;j++) {
			if(ar[minId]>ar[j]) minId=j;		// ar[minId]<ar[j] to swap max element to beginning of the array------basically the descending order
		}
		swap(ar[i],ar[minId]);
	}
}

void sele2(int *ar,int n) {		// finding max element and swap toward the end of the array
	for(int i=n-1;i>=0;i--) {
		int maxId=i;
		for(int j=i;j>=0;j--) {
			if(ar[j]>ar[maxId]) maxId=j;	// ar[j]<ar[maxId] to swap min element to the end of the array----basically the descending order
		}
		swap(ar[i],ar[maxId]);
	}
}


int main() {
	// your code goes here
	int n; cin>>n;
	int ar[n];
	for(int i=0;i<n;i++) cin >>ar[i];
	// bub(ar,n);
	// sele1(ar,n);
	sele2(ar,n);
	for(int i=0;i<n;i++) cout << ar[i] << ' ';
	return 0;
}
