// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> s(n), t(n);

    for(int i = 0; i < n; i++) {
        cin >> s[i];
        s[i] %= k;
        s[i] = min(s[i], abs(s[i] - k));
    }
    for(int i = 0; i < n; i++) {
        cin >> t[i];
        t[i] %= k;
        t[i] = min(t[i], abs(t[i] - k));
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << ((t == s) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}