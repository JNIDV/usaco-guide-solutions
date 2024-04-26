/*
Author: JNIDV
Date created: 2024-04-26

Solution:
Use prefix sums.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    int N, Q;
    cin >> N >> Q;
    vector<ll> pre(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        int a;
        cin >> a;
        pre[i] = pre[i - 1] + a;
    }
    while (Q--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
