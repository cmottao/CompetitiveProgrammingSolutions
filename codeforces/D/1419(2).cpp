// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9 + 10;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n);
    int ans = 0, cur = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 1; i < n; i += 2) {
        b[i] = a[cur++];
    }
    for(int i = 0; i < n; i += 2) {
        b[i] = a[cur++];
    }

    for(int i = 1; i < n - 1; i++) {
        ans += (b[i] < b[i - 1] && b[i] < b[i + 1]);
    }

    cout << ans << '\n';
    for(int i = 0; i < n; i++) {
        cout << b[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}