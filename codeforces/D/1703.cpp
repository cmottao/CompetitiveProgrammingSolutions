// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> s(n);
    set<string> st;
    
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        st.insert(s[i]);
    }

    for(int i = 0; i < n; i++) {
        int ans = 0;

        for(int j = 0; j < s[i].size()-1; j++) {
            ans |= st.count(s[i].substr(0, j + 1)) && st.count(s[i].substr(j + 1, s.size() - j));
        }
        cout << ans;
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}