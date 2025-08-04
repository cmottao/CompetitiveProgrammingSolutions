// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int a[n][m];
    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
        sort(a[i], a[i] + m);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 1; j < m; j++) {
            if(a[i][j] != a[i][j - 1] + n) {
                cout << -1 << '\n';
                return;
            }
        }
        ans[a[i][0]] = i + 1; 
    }

    for(int i = 0; i < n; i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}