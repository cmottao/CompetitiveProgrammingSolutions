// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<vector<bool>> c(2, vector<bool>(n + 1, 0));
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        int xi, yi; cin >> xi >> yi;
        c[yi][xi] = 1;

        if(c[0][xi] && c[1][xi]) ans += n - 2;
    }

    for(int i = 1; i < n; i++) {
        ans += (c[0][i] && c[1][i - 1] && c[1][i + 1]) + (c[1][i] && c[0][i - 1] && c[0][i + 1]);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}