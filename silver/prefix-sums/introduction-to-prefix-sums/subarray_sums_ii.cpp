/*
Author: JNIDV
Date created: 2024-04-26

Solution:
Use a map that stores the prefix pre that can be formed as we iterate from left to right.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n, x;
    cin >> n >> x;
    map<ll, int> pre = {{0, 1}};
    ll sum = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a;
        if (pre.find(sum - x) != pre.end()) {
            ans += pre[sum - x];
        }
        pre[sum]++;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
