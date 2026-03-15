// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    set<int> a;
    vector<int> dp(n + 1, oo);

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.insert(ai);
    }

    for(int i = 1; i <= n; i++) {
        if(a.count(i)) dp[i] = 1;
        else {
            for(int j = 2; j * j <= i; j++) {
                if(i % j == 0) {
                    dp[i] = min(dp[i], dp[j] + dp[i / j]);
                }
            }
        }
        cout << ((dp[i] == oo) ? -1 : dp[i]) << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}