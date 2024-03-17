// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> g(2);
    cin >> g[0] >> g[1];
    int i = 0, j = 0;

    while(true) {
        if(i == 1 && j == n - 1) {
            cout << "YES" << '\n';
            return;
        }

        if(g[i][j + 1] == '>') {
            j += 2;
        }
        else {
            if(g[i ^ 1][j] == '>') {
                i ^= 1; j++;
            }
            else {
                cout << "NO" << '\n';
                return;
            }
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
    while(t--) solve();
}