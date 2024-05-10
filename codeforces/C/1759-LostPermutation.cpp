// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int m, s; cin >> m >> s;
    set<int> b;
    int c = 0;

    for(int i = 0; i < m; i++) {
        int bi; cin >> bi;
        b.insert(bi);
    }

    for(int i = 1; i < oo; i++) {
        if(!b.count(i)) {
            b.insert(i);
            c += i;

            if(c == s && b.size() == *b.rbegin()) {
                cout << "YES" << '\n';
                return;
            }
            else if(c > s) {
                cout << "NO" << '\n';
                return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}