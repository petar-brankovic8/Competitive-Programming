#include <bits/stdc++.h>

using namespace std;

void solve()
{
    // Input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Finding largest alternating array and filling result array
    vector<int> res(n);
    res[0] = a[0];
    res[n - 1] = a[n - 1];
    int maxSmoothing = 0;
    int alternatingSubarrayBegin = 1;
    int i = 1;
    while (i < n)
    {
        if (i == alternatingSubarrayBegin)
        {
            if (a[i] == a[i - 1])
            {
                res[i] = a[i];
                alternatingSubarrayBegin++;
            }
        }
        else if (a[i] == a[i - 1] || i == n-1)
        {
            int alternatingSubarraySize = i - 1 - alternatingSubarrayBegin;
            if (i == n-1 && a[i] != a[i-1]) alternatingSubarraySize++; 
            if (alternatingSubarraySize == 0)
            {
                res[i - 1] = a[i - 1];
                res[i] = a[i];
            }
            else if (alternatingSubarraySize % 2 == 1) {
                for (int j = alternatingSubarrayBegin; j <= i; j++) 
                    res[j] = a[i];
                maxSmoothing = max(maxSmoothing, (alternatingSubarraySize+1)/2);

            }
            else if (alternatingSubarraySize % 2 == 0) {
                for (int j = alternatingSubarrayBegin; j < alternatingSubarrayBegin + alternatingSubarraySize/2; j++)
                    res[j] = a[alternatingSubarrayBegin - 1];
                for (int j = alternatingSubarrayBegin + alternatingSubarraySize/2; j < alternatingSubarrayBegin + alternatingSubarraySize; j++)
                    res[j] = a[alternatingSubarrayBegin + alternatingSubarraySize];
                if (!(i == n-1 && a[i] != a[i-1])) res[i-1] = a[i-1];
                res[i] = a[i];
                maxSmoothing = max(maxSmoothing, alternatingSubarraySize/2);
            }
            alternatingSubarrayBegin = i+1;
        }
        i++;
    }
    
    //Output
    cout << maxSmoothing << '\n';
    for (int i = 0; i < n; i++)
         cout << res[i] << ' ';
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