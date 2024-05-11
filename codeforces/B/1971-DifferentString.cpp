// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s; cin >> s;
    string r = s;
    sort(r.begin(), r.end());

    if(r.back() == r[0]) {
        cout << "NO" << '\n';
    }
    else {
        if(r == s) swap(r[0], r.back());
        cout << "YES" << '\n';
        cout << r << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}