// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> a(m);
    set<int> st;

    for(int i = 0; i < m; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < k; i++) {
        int qi; cin >> qi;
        st.insert(qi);
    }

    for(int i = 0; i < m; i++) {
        cout << (k - st.count(a[i]) >= n - 1);
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}