#include <bits/stdc++.h>

using namespace std;

void solve() {
    //Input
    int n, p;
    string s;
    cin >> n >> p >> s;

    //Finding first next
    int i = n-1;
    bool found = false;
    string res;
    while (i >= 0) {
        char prev = (i - 1 >= 0) ? s[i-1] : 0;
        char prevprev = (i - 2 >= 0) ? s[i-2] : 0;
        char next = s[i] + 1;

        if (next == prev || next == prevprev) next++;
        if (next == prev || next == prevprev) next++; 
        if (next >= 'a' + p) i--;
        else {
            found = true;
            res = s;
            res[i] = next;

            for (int j = i+1; j < n; j++) {
                char prev = (j - 1 >= 0) ? res[j-1] : 'A';
                char prevprev = (j - 2 >= 0) ? res[j-2] : 'A';

                char next = 'a';
                if (next == prev || next == prevprev) next++;
                if (next == prev || next == prevprev) next++; 

                res[j] = next;
            }
            break;
        }
    }
    if (found) cout << res << '\n';
    else cout << "NO\n";
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