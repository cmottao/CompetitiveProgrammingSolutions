// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    set<int> st;

    for(int i = min(a, b) + 1; i % 13 < max(a, b); i++) {
        st.insert(i % 13);
    }
    cout << ((st.count(c) == st.count(d)) ? "NO" : "YES") << '\n'; 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}