// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

void solve() {
    int n, m; cin >> n >> m;
    string gift[n];
    string vika = "vika";
    int cur = 0;

    for(int i = 0; i < n; i++) {
        cin >> gift[i];
    }

    for(int j = 0; j < m; j++) {
        for(int i = 0; i < n; i++) {
            if(gift[i][j] == vika[cur]) {
                cur++;
                break;
            }
        }
    }
    cout << ((cur >= 4) ? "YES" : "NO") << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}