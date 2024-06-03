// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), x;
    int xi = 0, di = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        if(b[i] != a[i]) x.push_back(b[i]);
    }
    sort(x.begin(), x.end());

    int m; cin >> m;
    vector<int> d(m);

    for(int i = 0; i < m; i++) {
        cin >> d[i];
    }
    auto fnd = find(b.begin(), b.end(), d[m - 1]);
    sort(d.begin(), d.end());

    while(xi < x.size() && di < m) {
        xi += (x[xi] == d[di]);
        di++;
    }
    cout << ((xi != x.size() || fnd == b.end()) ? "NO" : "YES") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}