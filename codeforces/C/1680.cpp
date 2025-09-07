// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    vector<int> z;

    while(s.size() && s.back() == '0') s.pop_back();
    reverse(s.begin(), s.end());

    while(s.size() && s.back() == '0') s.pop_back();

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0') z.push_back(i);
    }

    if(z.empty()) {
        cout << 0 << '\n';
        return;
    }
    int l = 1, r = z.size();

    auto f = [&](int x) -> bool {
        for(int i = 0; i + x - 1 < z.size(); i++) {
            int l = 0, r = 0;

            if(i) l += z[i - 1] - i + 1;
            if(i + x < z.size()) r += s.size() - z[i + x] - z.size() + i + x;

            if(l + r <= x) return 1;
        }
        return 0;
    };

    while(r > l) {
        int m = (l + r) / 2;
        f(m) ? r = m : l = m + 1;
    }
    cout << r << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}