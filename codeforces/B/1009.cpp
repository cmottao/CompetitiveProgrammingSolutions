// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    string ans = "", o = "";

    for(int i = 0; i < s.size(); i++) {
        ((s[i] == 1) ? o : ans) += s[i];
    }

    for(int i = 0; i < ans.size(); i++) {
        if(ans[i] == '2') {
            ans.insert(i, o);
            o = "";
            break;
        }
    }
    cout << ans << o;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}