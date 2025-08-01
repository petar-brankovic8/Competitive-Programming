#include <bits/stdc++.h>

using namespace std;

void solve()
{
    //Input & Find minimum length range
    int n, m;
    cin >> n >> m;
    int minLenRange = INT_MAX;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        minLenRange = min(minLenRange, r - l + 1);
    }

    cout << minLenRange << '\n';
    //Output
    int curElem = 0;
    for (int i = 0; i < n; i++) {
        cout << curElem++ << ' ';
        if (curElem == minLenRange) curElem = 0;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}