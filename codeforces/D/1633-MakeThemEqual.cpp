// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

vector<int> v(1e3 + 10, oo);

void solve() {
    int n, k; cin >> n >> k;
    vector<int> b(n), c(n);
    k = min(k, 12 * n);
    vector<int> f(k + 1, 0);

    for(int i = 0; i < n; i++) {
        cin >> b[i];
        b[i] = v[b[i]];
    }
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = k; j >= b[i]; j--) {
            f[j] = max(f[j], f[j - b[i]] + c[i]);
        }
    }
    cout << f[k] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    v[1] = 0;

    for(int i = 1; i <= 1e3; i++) {
        for(int j = 1; j <= i; j++) {
            if(i + (i / j) <= 1e3) v[i + (i / j)] = min(v[i + (i / j)], v[i] + 1);
        }
    }

    int t; cin >> t;
    while(t--) solve();
}