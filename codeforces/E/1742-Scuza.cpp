// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q; cin >> n >> q;
    vector<long long> pfx(n + 1);
    vector<int> a(n + 1);
    pfx[0] = a[0] = 0;

    for(int i = 1; i <= n; i++) {
        int ai; cin >> ai;
        
        a[i] = max(a[i - 1], ai);
        pfx[i] = pfx[i - 1] + ai;
    }

    for(int i = 0; i < q; i++) {
        int ki; cin >> ki;
        cout << pfx[upper_bound(a.begin() + 1, a.end(), ki) - a.begin() - 1] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1; cin >> t;
    while(t--) solve();
}