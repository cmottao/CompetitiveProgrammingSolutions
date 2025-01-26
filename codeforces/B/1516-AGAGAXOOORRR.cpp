// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> mp;
    vector<int> c;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        c.push_back(c.empty() ? ai : (ai ^ c.back()));

        if(!c.back()) {
            if(c.size() == 1) c.clear();

            while(c.size()) {
                mp[c.back()]++;
                c.pop_back();
            }
        }
    }
    cout << ((c.empty() || (mp[0] && (mp[c.back()] == mp[0]))) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}