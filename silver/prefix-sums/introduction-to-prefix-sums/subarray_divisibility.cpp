/*
Author: JNIDV
Date created:

Solution:
Similar to Subarray Sums II, but instead of storing counts of a sum, store the count of a sum mod n.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    vector<int> mod_cnt(n, 0);
    mod_cnt[0] = 1;
    int sum = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum = (sum + x) % n;
        if (sum < 0) {
            sum += n;
        }
        ans += mod_cnt[sum];
        mod_cnt[sum]++;
    }
    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
