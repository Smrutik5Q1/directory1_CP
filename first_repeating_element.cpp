int Solution::solve(vector<int> &ar) {
    int n=ar.size();
    set<int> s;
    int ans=-1;
    for(int i=n-1;i>=0;i--) {
        if(s.find(ar[i])!=s.end()) ans=ar[i];
        else s.insert(ar[i]);
    }
    //for(auto x:s) cout << x << ' ';
    return ans;
}

