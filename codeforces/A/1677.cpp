// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n);
    vector<vector<long long>> pfx(n, vector<long long>(n));
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for(int i = 0; i < n; i++) {
        int s = 0;

        for(int j = i; j < n; j++) {
            if(p[i] > p[j]) s++;
        }

        for(int j = i; j < n; j++) {
            if(p[i] > p[j]) s--;
            pfx[i][j] = s;
        }
    }

    for(int j = 0; j < n; j++) {
        for(int i = 1; i < n; i++) {
            pfx[i][j] += pfx[i - 1][j];
        }
    }

    for(int a = 0; a < n - 3; a++) {
        for(int c = a + 2; c < n - 1; c++) {
            if(p[a] < p[c]) ans += pfx[c - 1][c] - pfx[a][c];
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}