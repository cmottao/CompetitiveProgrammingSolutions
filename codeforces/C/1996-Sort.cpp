// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    string a, b; cin >> a >> b;
    vector<vector<int>> pfxA(n + 1, vector<int>(26, 0)), pfxB(n + 1, vector<int>(26, 0));

    for(int i = 1; i <= n; i++) {
        pfxA[i][a[i - 1] - 'a']++;
        pfxB[i][b[i - 1] - 'a']++;

        for(int j = 0; j < 26; j++) {
            pfxA[i][j] += pfxA[i - 1][j];
            pfxB[i][j] += pfxB[i - 1][j];
        }
    }
    
    while(q--) {
        int l, r; cin >> l >> r;
        int difA = 0, difB = 0;

        for(int j = 0; j < 26; j++) {
            difA += max(0, (pfxA[r][j] - pfxA[l - 1][j]) - (pfxB[r][j] - pfxB[l - 1][j]));
            difB += max(0, (pfxB[r][j] - pfxB[l - 1][j]) - (pfxA[r][j] - pfxA[l - 1][j]));
        }
        cout << max(difA, difB) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}