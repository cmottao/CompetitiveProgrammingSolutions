// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> m[k], dp(n + 1, oo);
    dp[n] = 0;

    for(int i = 0; i < n; i++) {
        m[s[i] - 'a'].push_back(i);
    }

    for(int i = 0; i < k; i++) {
        m[i].push_back(n);
    }

    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < k; j++) {
            dp[i] = min(dp[i], dp[*upper_bound(m[j].begin(), m[j].end(), i)] + 1);
        }
    }
    
    int q; cin >> q;
    while(q--) {
        string ti; cin >> ti;
        int i = -1, j = 0;

        while(i < n && j < ti.size()) {
            i = *upper_bound(m[ti[j] - 'a'].begin(), m[ti[j] - 'a'].end(), i);
            if(i < n) j++;
        }
        cout << dp[i] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}