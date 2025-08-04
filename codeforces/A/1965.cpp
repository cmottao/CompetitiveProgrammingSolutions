// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    set<int> a;
    int cur = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.insert(ai);
    }

    for(int x : a) {
        if(x != cur + 1) break;
        cur++;
    }

    if(cur == a.size()) cur--;
    cout << ((cur % 2) ? "Bob" : "Alice") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}