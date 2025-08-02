#include <bits/stdc++.h>

using namespace std;

void solve()
{
    //Input
    int n;
    cin >> n;

    //Output first section
    if (n <= 5) cout << -1 << '\n';
    else {
        cout << "1 2\n";
        int firstNode = 1;
        for (int i = 3; i <= n; i++) {
            cout << firstNode++ << ' ' << i << '\n';
            if (firstNode > 2) firstNode = 1;
        }
    }
    
    //Output second section
    for (int i = 2; i <= n; i++)
        cout << "1 " << i << '\n';
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