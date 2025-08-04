// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    set<char> st;
    int ans = 1;

    for(char ch : s) {
        if(!st.count(ch) && st.size() == 3) {
            st.clear();
            ans++;
        }
        st.insert(ch);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}