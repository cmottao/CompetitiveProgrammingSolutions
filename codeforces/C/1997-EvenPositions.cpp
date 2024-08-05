// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    vector<int> st;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == '_') {
            if(st.empty()) st.push_back(i);
            else {
                ans += (i - st.back());
                st.pop_back();
            }
        }
        else if(s[i] == '(') st.push_back(i);
        else {
            ans += (i - st.back());
            st.pop_back();
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}