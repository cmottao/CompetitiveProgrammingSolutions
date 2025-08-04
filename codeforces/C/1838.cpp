// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    int x = 1, y = m * ((n / 2)) + 1;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << ((i % 2) ? x++ : y++) << ' '; 
        }
        cout << '\n';
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