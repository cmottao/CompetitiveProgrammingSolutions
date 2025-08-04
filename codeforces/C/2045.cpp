// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

int oo = 1e9;

void solve() {
    string s, t; cin >> s >> t;
    vector<int> mp(26, -1);
    int mn = oo, ansIdx = -1;

    for(int i = 0; i < t.size() - 1; i++) {
        mp[t[i] - 'a'] = i;
    }
    
    for(int i = 1; i < s.size(); i++) {
        if(mp[s[i] - 'a'] != -1 && (int) t.size() + i - mp[s[i] - 'a'] < mn) {
            ansIdx = i;
            mn = t.size() + i - mp[s[i] - 'a'];
        }
    }

    if(ansIdx == -1) cout << -1;
    else cout << s.substr(0, ansIdx) << t.substr(mp[s[ansIdx] - 'a'], t.size() - mp[s[ansIdx] - 'a']);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}