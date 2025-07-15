#include <bits/stdc++.h>

using namespace std;

struct voucher {
    int l;
    int r;
    long long cost;
};

long long find_minCost(vector<voucher> &v1, vector<voucher> &v2) {
    sort(v1.begin(), v1.end(), [](voucher a, voucher b) {return a.r < b.r;});
    sort(v2.begin(), v2.end(), [](voucher a, voucher b) {return a.l < b.l;});

    long long minCost = 2e9 + 10, minV2 = 2e9 + 10;

    int v1_it = v1.size()-1, v2_it = v2.size()-1;
    while (v1_it >= 0) {
        if (v2_it >= 0 && v1[v1_it].r < v2[v2_it].l) {
            minV2 = min(minV2, v2[v2_it].cost);
            v2_it--;
        }
        else {
            minCost = min(minCost, v1[v1_it].cost + minV2);
            v1_it--;
        }
    }

    return minCost;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    
    const int maxDays = 2*1e5 + 10;
    vector<vector<voucher>> vouchersByDays(maxDays);
    unordered_set<int> existingDays;

    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        voucher v;
        cin >> v.l >> v.r >> v.cost;
        int days = v.r - v.l + 1;
        if (days >= x)
            continue;
        vouchersByDays[days].push_back(v);
        existingDays.insert(days);
    }

    long long min_cost = 2e9 + 10;
    
    unordered_set<int>::iterator days_it = existingDays.begin();
    while(!existingDays.empty()) {
        if (x-*days_it == *days_it) {
            vector<voucher> temp = vouchersByDays[*days_it];
            min_cost = min(min_cost, find_minCost(temp, vouchersByDays[*days_it]));
            days_it = existingDays.erase(days_it);
            continue;
        }

        min_cost = min(min_cost, find_minCost(vouchersByDays[*days_it], vouchersByDays[x-*days_it]));
        min_cost = min(min_cost, find_minCost(vouchersByDays[x-*days_it], vouchersByDays[*days_it]));
        
        existingDays.erase(x-*days_it);
        existingDays.erase(days_it);
        days_it = existingDays.begin();
    }

    if (min_cost > 2e9) cout << -1 << '\n';
    else                cout << min_cost << '\n';
    return 0;
}