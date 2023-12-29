// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    int a[n], id[n], p[2][n];

    for(int i = 0; i < n; i++) {
        p[0][i] = p[1][i] = i;
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> id[i];
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < n; j++) {
            p[0][a[j] - 1] = p[1][j];
        }
        for(int j = 0; j < n; j++) {
            p[1][j] = p[0][j];
        }
    }

    for(int i = 0; i < n; i++) {
        p[1][p[0][i]] = i; 
    }
    for(int i = 0; i < n; i++) {
        cout << id[p[1][i]] << '\n';
    }
}

int main() {
    freopen("shuffle.out", "w", stdout);
    freopen("shuffle.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}