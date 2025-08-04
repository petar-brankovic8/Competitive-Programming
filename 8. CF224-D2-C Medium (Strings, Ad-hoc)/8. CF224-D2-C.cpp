#include <bits/stdc++.h>

using namespace std;

void solve()
{
    //Input
    string s;
    cin >> s;
    int n = s.size();

    //Add all "()" and "[]" in process queue and mark them as correct
    struct Substring {
        int left = -1;
        int right = -2;
        int squareBrackets = 0;
        Substring() : left(-1), right(-2), squareBrackets(0) {}
        Substring(int l, int r, int sqBr) : left(l), right(r), squareBrackets(sqBr) {}
    };
    Substring maxSqBrackets;
    vector<Substring> belongsTo(n);
    queue<Substring> processQueue;
    for (int i = 1; i < n; i++) {
        if (s[i-1] == '(' && s[i] == ')') {
            Substring substring(i-1, i, 0);
            belongsTo[i] = belongsTo[i-1] = substring;
            processQueue.push(substring);
        }
        else if (s[i-1] == '[' && s[i] == ']') {
            Substring substring(i-1, i, 1);
            belongsTo[i] = belongsTo[i-1] = substring;
            processQueue.push(substring);
            maxSqBrackets = substring;
        }
    }

    //Expand correct substrings
    while (!processQueue.empty()) {
        int left = processQueue.front().left, right = processQueue.front().right, sqBrackets = processQueue.front().squareBrackets;
        processQueue.pop();

        //cout << left << '-' << right << '/' << sqBrackets << ' ';

        if (belongsTo[left].right != right || belongsTo[right].left != left) continue;

        if (left - 1 >= 0 && belongsTo[left - 1].left != -1) {
            int adjacentLeft = belongsTo[left - 1].left;
            int totalSqBrackets = sqBrackets + belongsTo[adjacentLeft].squareBrackets;

            belongsTo[adjacentLeft].right = right;
            belongsTo[right].left = adjacentLeft;
            belongsTo[right].squareBrackets = belongsTo[adjacentLeft].squareBrackets = totalSqBrackets;

            Substring expandedCorrectSubstring(adjacentLeft, right, totalSqBrackets);
            processQueue.push(expandedCorrectSubstring);

            if (maxSqBrackets.squareBrackets < totalSqBrackets) 
                maxSqBrackets = expandedCorrectSubstring;
            
            continue;
        }

        if (right + 1 < n && belongsTo[right + 1].left != -1) {
            int adjacentRight = belongsTo[right + 1].right;
            int totalSqBrackets = sqBrackets + belongsTo[adjacentRight].squareBrackets;

            belongsTo[left].right = adjacentRight;
            belongsTo[adjacentRight].left = left;
            belongsTo[left].squareBrackets = belongsTo[adjacentRight].squareBrackets = totalSqBrackets;

            Substring expandedCorrectSubstring(left, adjacentRight, totalSqBrackets);
            processQueue.push(expandedCorrectSubstring);

            if (maxSqBrackets.squareBrackets < totalSqBrackets)
                maxSqBrackets = expandedCorrectSubstring;

            continue;
        }

        if (left - 1 >= 0 && right + 1 < n) {
            if (s[left - 1] == '(' && s[right + 1] == ')') {
                Substring expandedCorrectSubstring(left - 1, right + 1, sqBrackets);
                processQueue.push(expandedCorrectSubstring);
                belongsTo[left - 1] = expandedCorrectSubstring;
                belongsTo[right + 1] = expandedCorrectSubstring;
                continue;
            }
            if (s[left - 1] == '[' && s[right + 1] == ']') {
                Substring expandedCorrectSubstring(left - 1, right + 1, sqBrackets + 1);
                processQueue.push(expandedCorrectSubstring);
                belongsTo[left - 1] = expandedCorrectSubstring;
                belongsTo[right + 1] = expandedCorrectSubstring;

                if (maxSqBrackets.squareBrackets < expandedCorrectSubstring.squareBrackets)
                    maxSqBrackets = expandedCorrectSubstring;
                continue;
            }
        }
    }

    //Output
    cout << maxSqBrackets.squareBrackets << '\n';
    for (int i = maxSqBrackets.left; i <= maxSqBrackets.right; i++)
        cout << s[i];
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