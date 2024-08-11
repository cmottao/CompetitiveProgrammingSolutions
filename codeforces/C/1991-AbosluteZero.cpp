// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), ans;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < 40 && a[n - 1] != 0; i++) {
        ans.push_back((a[0] + a[n - 1]) / 2);

        for(int j = 0; j < n; j++) {
            a[j] = abs(a[j] - ans.back());
        }
        sort(a.begin(), a.end());
    }

    if(a[n - 1] != 0) cout << -1 << '\n';
    else {
        cout << ans.size() << '\n';
        for(int x : ans) {
            cout << x << ' ';
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