// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

map<string, string> c = {{"BG", "RY"}, {"BR", "GY"}, {"BY", "GR"}, {"GR", "BY"}, {"GY", "BR"}, {"RY", "BG"}};

void solve() {
    int n, q; cin >> n >> q;
    vector<string> a(n + 1);
    map<string, vector<int>> mp;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }

    while(q--) {
        int x, y; cin >> x >> y;
        if(x > y) swap(x, y);

        if(c[a[x]] != a[y]) cout << y - x << '\n';
        else {
            int ans = oo;

            for(auto &[s, v] : mp) {
                if(s == a[x] || s == a[y]) continue;
                auto ptr = upper_bound(v.begin(), v.end(), x);
                
                if(ptr != v.end()) {
                    ans = min(ans, v[ptr - v.begin()] - x + abs(v[ptr - v.begin()] - y));
                    if(ptr != v.begin()) ans = min(ans, x - v[ptr - v.begin() - 1] + y - v[ptr - v.begin() - 1]);
                }                
                else ans = min(ans, x - v.back() + y - v.back()); 
            }
            cout << ((ans == oo) ? -1 : ans) << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}