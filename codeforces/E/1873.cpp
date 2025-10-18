// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const long long oo = 1e10;

void solve() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    long long l = 0, r = oo;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto f = [&](long long h) -> bool {
        long long s = 0;

        for(int i = 0; i < n; i++) {
            if(h > a[i]) s += h - a[i];
        }
        return s <= x;
    };

    while(r > l) {
        long long m = (r + l) / 2;
        f(m) ? l = m + 1 : r = m;
    }
    cout << l - 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}