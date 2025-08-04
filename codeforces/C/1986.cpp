// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    string s; cin >> s;
    set<int> ind;
    int j = 0;

    for(int i = 0; i < m; i++) {
        int indi; cin >> indi;
        ind.insert(indi);
    }
    string c; cin >> c;
    sort(c.begin(), c.end());

    for(int i : ind) {
        s[i - 1] = c[j++];
    }
    cout << s << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}