// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 10;

bool p[3][N];

void solve() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < N; j++) {
            p[i][j] = 0;
        }
    }
    vector<int> a[3];

    for(int i = 0; i < 3; i++) {
        int n; cin >> n;

        for(int j = 0; j < n; j++) {
            int x; cin >> x;
            p[i][x] = 1;
        }
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < N; j++) {
            if(p[i][j] && !p[(i + 1) % 3][j] && !p[(i + 2) % 3][j]) {
                a[i].push_back(j);
            }
        }
    }
    int mx = max(a[0].size(), max(a[1].size(), a[2].size()));

    for(int i = 0; i < 3; i++) {
        if(a[i].size() == mx) {
            cout << i + 1 << ' ' << mx;
            for(int u : a[i]) {
                cout << ' ' << u;
            }
            cout << '\n';
        }
    }
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    for(int i = 1; i <= t; i++) {
        cout << "Case #" << i << ':' << '\n';
        solve();
    }
}