#include <bits/stdc++.h>

using namespace std;

void solve() {
    //Input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    //Bucketing
    unordered_map<int, int> bucketSize;
    for (int i = 0; i < n/2; i++) {
        if (a[i] - i > 0) bucketSize[a[i] - i]++;
        if (a[n-1-i] - i > 0) bucketSize[a[n-1-i] - i]++;
    }
    if (n % 2 == 1 && (a[n/2] - n/2 > 0)) bucketSize[a[n/2] - n/2]++; 

    //Finding max size bucket
    int maxBucketSize = -1;
    for (auto curSize : bucketSize) {
        maxBucketSize = max(maxBucketSize, curSize.second);
    }

    //Output
    cout << n - maxBucketSize << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t = 1;
    //cin >> t;
    while (t--)
       solve();
    return 0;
}