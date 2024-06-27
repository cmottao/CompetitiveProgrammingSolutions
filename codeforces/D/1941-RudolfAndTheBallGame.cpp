// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;

bool p[N][N];

void solve() {
    int n, m, x; cin >> n >> m >> x;
    vector<int> ans;
    p[0][x - 1] = 1;

    for(int i = 0; i < m; i++) {
        int ri; cin >> ri;
        char ci; cin >> ci;

        for(int j = 0; j < n; j++) {
            if(!p[i][j]) continue;

            if(ci == '0') p[i + 1][(j + ri) % n] = 1;
            else {
                p[i + 1][(n + j - ri) % n] = 1;
                if(ci == '?') p[i + 1][(j + ri) % n] = 1;
            }
        }
    }

    for(int j = 0; j < n; j++) {
        if(p[m][j]) ans.push_back(j);

        for(int i = 0; i <= m; i++) {
            p[i][j] = 0;
        }
    }

    cout << ans.size() << '\n';
    for(int x : ans) {
        cout << x + 1 << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}