// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        for(int k = 0; k < 2; k++) {
            for(int j = 0; j < n; j++) {
                cout << (((i + j) % 2) ? ".." : "##");
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
    while(t--) solve();
}