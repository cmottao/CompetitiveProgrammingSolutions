// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    set<int> st;
    int l = 0, r = 0, c = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;

        if(ai == -1) l++;
        else if(ai == -2) r++;
        else st.insert(ai);
    }

    for(int x : st) {
        c++;
        ans = max(ans, (int) st.size() + min(l, x - c) + min(r, m - x - (int) st.size() + c));
    }

    if(l && !st.count(m)) ans = max(ans, min(m, l + (int) st.size()));
    if(r && !st.count(1)) ans = max(ans, min(m, r + (int) st.size()));

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}