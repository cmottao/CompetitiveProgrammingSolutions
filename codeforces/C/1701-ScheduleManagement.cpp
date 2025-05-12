// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> mp(n + 1);
    multiset<int> st;

    for(int i = 0; i < m; i++) {
        int ai; cin >> ai;
        mp[ai]++;
    }

    for(int i = 1; i <= n; i++) {
        st.insert(mp[i]);
    }

    while(*prev(st.end()) - *st.begin() > 2) {
        int mx = *prev(st.end());
        int mn = *st.begin();
    
        st.erase(st.find(mx)); 
        st.erase(st.find(mn)); 
    
        st.insert(mn + 2);
        st.insert(mx - 1);
    }
    cout << *st.rbegin() << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}