#include <bits/stdc++.h>
using namespace std;

int nods(int *ar,int n,int k) {
    vector<int> cnt(k,0);
    for(int i=0;i<n;i++) {
        cnt[ar[i]%k]++;
    }
    //for(int i=0;i<k;i++) cout << cnt[i] << ' ';
    int count{};
    for(int i=0;i<=k/2;i++) {
        if(i==0 && cnt[i]>0) count+=1;
        else if(i==k-i && cnt[i]>0) count+=1;
        else {
            int m=max(cnt[i],cnt[k-i]);
            count+=m;
        }
    }
    return count;
}

int main() {
    int n; cin >> n;
    int k; cin >> k;
    int ar[n];
    for(int i=0;i<n;i++) cin >> ar[i];
    int ans=nods(ar,n,k);
    cout << ans << '\n';
}
