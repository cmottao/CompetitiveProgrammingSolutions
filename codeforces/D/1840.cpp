// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    int l = 0, r = 1e9 + 10;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    auto f = [&](int x) -> bool {
        int i = 0, s = 0;

        while(i < n) {
            int cur = a[i] + 2 * x;
            s++; i++;
            while(i < n && a[i] <= cur) i++;
        }
        return s < 4;
    };

    while(r > l) {
        int m = (l + r) / 2;
        f(m) ? r = m : l = m + 1; 
    }
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}