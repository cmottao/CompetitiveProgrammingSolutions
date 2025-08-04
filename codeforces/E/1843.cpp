// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<int, int>> s(m);

    for(int i = 0; i < m; i++) {
        cin >> s[i].first >> s[i].second;
    } 

    int q; cin >> q;
    vector<int> x(q + 1);
    int l = 1, r = q + 1;

    for(int i = 1; i <= q; i++) {
        cin >> x[i];
    }

    while(r > l) {
        int mid = (l + r) / 2;
        vector<int> pfx(n + 1);
        set<int> st;
        int ans = pfx[0] = 0;

        for(int i = 1; i <= mid; i++) {
            st.insert(x[i]);
        }

        for(int i = 1; i <= n; i++) {
            pfx[i] = pfx[i - 1] + st.count(i);
        }

        for(auto [i, d] : s) {
            if(pfx[d] - pfx[i - 1] >= (d - i + 3) / 2) ans = 1;
        }     
        ans ? r = mid : l = mid + 1;
    }
    cout << ((r == q + 1) ? -1 : r) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}