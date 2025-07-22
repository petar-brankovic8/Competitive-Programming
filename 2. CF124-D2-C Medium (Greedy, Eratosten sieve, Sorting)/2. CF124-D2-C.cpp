#include <bits/stdc++.h>

using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();

    //Eratosten sieve
    vector<int> prime;
    vector<bool> isPrime(n/2+1, true);
    for (int i = 2; i <= n/2; i++) {
        if (isPrime[i]) {
            prime.push_back(i);
            for (int j = i*i; j <= n/2; j += i)
                isPrime[j] = false;
        }
    }

    //Letter count
    vector<pair<int, char>> letterCnt(26);
    for (int i = 0; i < n; i++) {
        letterCnt[s[i]-'a'].first++;
        letterCnt[s[i]-'a'].second = s[i];
    }

    //Sort by num of letters
    sort(letterCnt.begin(), letterCnt.end(), greater<pair<int, char>>());

    //Fill res array in prime*i positions
    string res(n, 0);
    for (int i = 0; i < prime.size(); i++) {
        for (int j = prime[i]; j <= n; j += prime[i]) {
            if (res[j-1] == 0) {
                res[j-1] = letterCnt[0].second;
                letterCnt[0].first--;
                if (letterCnt[0].first < 0) {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }

    //Fill rest of res array
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (res[i] == 0) {
            if (letterCnt[j].first > 0) {
                res[i] = letterCnt[j].second;
                letterCnt[j].first--;
            }
            else {
                j++;
                res[i] = letterCnt[j].second;
                letterCnt[j].first--;
            }
        }
    }
    cout << "YES\n";
    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    int t = 1;
    //cin >> t;
    while (t--)
       solve();
    return 0;
}