#include <bits/stdc++.h>

using namespace std;

void solve() {
    //Input
    int n;
    cin >> n;

    vector<long long> a(n), prefixSum(n);
    unordered_map<long long, vector<int>> mm;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0) prefixSum[i] = prefixSum[i-1] + a[i];
        else prefixSum[i] = a[i];
        mm[prefixSum[i]].push_back(i);
    }

    //Finding all sums
    long long nSums = 0;
    for (int j = n-2; j > 0; j--) {
        long long sum = prefixSum[n-1] - prefixSum[j];
        vector<int>& currSums = mm[sum];
        if (mm[sum].size() > 0 && currSums[0] < j && prefixSum[j] - prefixSum[currSums[0]] == sum) {
            int i = upper_bound(currSums.begin(), currSums.end(), j-1) - currSums.begin() - 1;
            nSums += (i >= 0) ? (i + 1) : 0;
        }
    }
    cout << nSums << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}