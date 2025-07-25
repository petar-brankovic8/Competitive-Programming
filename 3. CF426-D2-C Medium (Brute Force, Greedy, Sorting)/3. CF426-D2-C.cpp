#include <bits/stdc++.h>

using namespace std;

int optimise_interval(int n, int k, int l, int r, vector<int> &a) {
    priority_queue<int> nonIntervalPQ;
    priority_queue<int, vector<int>, greater<int>> intervalPQ;
    
    //Finding min and max elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i >= l && i <= r) {
            intervalPQ.push(a[i]);
            sum += a[i];
        }
        else nonIntervalPQ.push(a[i]);
    }
    
    //Swaps
    while (k && !nonIntervalPQ.empty()) {
        int a = intervalPQ.top();
        int b = nonIntervalPQ.top();
        intervalPQ.pop();
        nonIntervalPQ.pop();

        if (b > a) {
            sum = sum - a + b;
            intervalPQ.push(b);
        }
        else return sum;

        k--;
    }
    return sum;
}

void solve() {
    //Input
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxm = INT_MIN;
    //Going trough all intervals
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            maxm = max(maxm, optimise_interval(n, k, i, j, a));
        }
    }

    cout << maxm;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t = 1;
    //cin >> t;
    while (t--)
       solve();
    return 0;
}