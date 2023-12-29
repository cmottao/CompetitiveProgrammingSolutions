// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> ans(26, 0);

    for(int i = 0; i < n; i++) {
        string a, b; cin >> a >> b;
        vector<int> x(26, 0), y(26, 0);

        for(char ch : a) {
            x[ch - 97]++;
        }
        for(char ch : b) {
            y[ch - 97]++;
        }

        for(int i = 0; i < 26; i++) {
            ans[i] += max(x[i], y[i]);
        }
    }

    for(int i = 0; i < 26; i++) {
        cout << ans[i] << '\n';
    }
}

int main() {
    freopen("blocks.out", "w", stdout);
    freopen("blocks.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}