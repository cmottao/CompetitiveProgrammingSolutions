// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, d; cin >> n >> m >> d;
    vector<int> a(n);
    long long ans = 0, s = 0;
    multiset<int> st;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] > 0) {
            st.insert(a[i]);
            s += a[i];

            if(st.size() > m) {
                auto ptr = st.begin();
                s -= *ptr;
                st.erase(ptr);
            }
        }
        ans = max(ans, s - 1ll * d * (i + 1));
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}