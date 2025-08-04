// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int q; cin >> q;
    long long ls = 1, lt = 1, flgs = 0, flgt = 0;

    while(q--) {
        int d, k; cin >> d >> k;
        string x; cin >> x;
        ((d == 1) ? ls : lt) += x.size() * k;

        for(char ch : x) {
            if(ch == 'a') continue;
            ((d == 1) ? flgs : flgt) = 1;
        }
        cout << ((flgt || (!flgt && !flgs && ls < lt)) ? "YES" : "NO") << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}