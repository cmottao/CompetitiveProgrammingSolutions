// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<string> a(2 * n);
    int ans = 0;

    for(int i = 0; i < 2*n; i++) {
        cin >> a[i];
    }

    for(int j = 0; j < m; j++) {
        set<char> s, p;
        int r = 1;

        for(int i = 0; i < 2*n; i++) {
            ((i < n) ? s : p).insert(a[i][j]);
        }

        for(char ch : "ACGT") {
            r &= !(s.count(ch) && p.count(ch));
        }
        ans += r;
    }
    cout << ans;
}

int main() {
    freopen("cownomics.out", "w", stdout);
    freopen("cownomics.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}