// Given a number A, count all setbits of all numbers from 0 to A;
// Example: if A=3 : setbits in 1:1   setbits in 2:1    setbits in 3:2  ; TOTAL: 4

//basic solution   complexity: O(32*N) 

int Solution::solve(int A) {
    int cnt{};
    while(A) {
        for(int i=0;i<32;i++) {
            if(A&(1<<i)) (cnt=cnt+1)%1000000007;
        }
        A--;
    }
    return cnt;
}


//Optimal Solution   complexity: O(N)
// Using recursion

int Soultion::solve(int A) {
    if(A==0) return 0;
    
    long long x{};
    while((1<<x)<=A) {   // this loop finds the largest power of 2 in range of A 
    	x++;
    }
    x--;
    long long ans{};
    ans+=((x*(1<<(x-1)))+(A-(1<<x)+1)+solve(A-(1<<x)));  // If not clear Refer YT video
    ans%=1000000007;
    return ans;
}
