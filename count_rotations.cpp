// Counting the number of rotations if the array is circularly sorted.
// Eg.: 8 10 16 18 2 4 5 7 is the array 
// then the function returns 4;
// Here the pivot element is 2; which has a special property that it is smaller than its previous and next element

int CountRotations(int *ar,int n) {
	int lo=0,hi=n-1;
	while(lo<=hi) {
		int mid=(lo+hi)/2;	
		int next=(mid+1)%n;	
		int prev=(mid-1+n)%n;
		if(ar[lo]<=ar[hi]) return lo;	//If the array is correctly sorted
		else if(ar[mid]<=ar[next] && ar[mid]<=ar[prev]) return mid;	//if mid is the pivot element
		else if(ar[mid]<=ar[hi]) hi=mid-1;	// If the search space is sorted then pivot element is not present there
		else lo=mid+1;	   // If the search space is sorted then pivot element is not present there
	}
	return -1;	// For all invalid cases 
}
