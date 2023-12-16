// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    multiset<int> h;

    for(int i = 0; i < n; i++) {
        int hi; cin >> hi;
        h.insert(hi);
    }

    for(int i = 0; i < m; i++) {
        int ti; cin >> ti;
        auto it = h.upper_bound(ti);

        if(it != h.begin()) {
            cout << *(--it) << '\n';
            h.erase(it);
        }
        else {
            cout << -1 << '\n';
        }
    }
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}