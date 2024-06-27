// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

pair<int, int> moves[] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m;

int valid(int i, int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}

void solve() {
    cin >> n >> m;
    int a[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int mx = 0;

            for(auto m : moves) {
                int ni = i + m.first, nj = j + m.second;
                if(valid(ni, nj)) mx = max(mx, a[ni][nj]);
            }
            if(mx < a[i][j]) a[i][j] = mx; 
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}