// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q; cin >> q;
    multiset<int> i, d;

    while(q--) {
        char t; cin >> t;
        int l, r; cin >> l >> r;

        if(t == '+') {
            i.insert(l);
            d.insert(r);
        }
        else {
            i.erase(i.find(l));
            d.erase(d.find(r));
        }

        cout << ((i.empty() || *i.rbegin() <= *d.begin()) ? "NO" : "YES") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}