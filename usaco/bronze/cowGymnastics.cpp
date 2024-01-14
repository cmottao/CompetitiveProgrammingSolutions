// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k, n; cin >> k >> n;
    vector<set<int>> a(n + 1);
    int ans = 0;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            a[i].insert(j);
        }
    }

    for(int i = 0; i < k; i++) {
        vector<int> b;

        for(int j = 0; j < n; j++) {
            int ai; cin >> ai;
            b.push_back(ai);

            for(auto x : b) {
                a[ai].erase(x);
            }
        }            
    }

    for(int i = 1; i <= n; i++) {
        ans += a[i].size();
    }
    cout << ans;
}

int main() {
    freopen("gymnastics.out", "w", stdout);
    freopen("gymnastics.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}