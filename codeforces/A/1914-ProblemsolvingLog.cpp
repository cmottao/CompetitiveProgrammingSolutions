// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> a(27, 0);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        a[s[i] - 64]++;
    }

    for(int i = 1; i < 27; i++) {
        ans += (a[i] >= i);
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