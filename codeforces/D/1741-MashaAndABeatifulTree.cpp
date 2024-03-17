// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }

    for(int i = 2; i <= n; i *= 2) {
        for(int j = 0; j < n; j += i) {
            if(p[j] - p[j + (i / 2)] == i / 2) {
                swap(p[j], p[j + (i / 2)]);
                ans++;
            }
            else if(p[j] - p[j + (i / 2)] != -(i / 2)) {
                cout << -1 << '\n';
                return;
            }
        }
    }
    cout << ans << '\n';
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