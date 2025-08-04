// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> p(n), mn(n), mx(n), a;
    set<int> st, st1;

    for(int i = 1; i <= n; i++) {
        st.insert(i);
        st1.insert(i);
    }

    for(int i = 0; i < n; i++) {
        cin >> p[i];
        st.erase(p[i]);
        st1.erase(p[i]);
    }

    for(int i = 0; i < n; i++) {
        if(!i || p[i] != p[i - 1]) mn[i] = mx[i] = p[i];
        else {
            mn[i] = *st.begin();
            st.erase(st.begin());

            auto ptr = prev(st1.lower_bound(p[i]));
            mx[i] = *ptr;
            st1.erase(ptr);
        }
    }

    for(int i = 0; i < n; i++) {
        cout << mn[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < n; i++) {
        cout << mx[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}