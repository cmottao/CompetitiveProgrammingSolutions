// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    set<int> a, b; 

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a.insert(ai);
    }
    for(int i = 0; i < n; i++) {
        int bi; cin >> bi;
        b.insert(bi);
    }
    cout << ((b.size() > 2 || a.size() > 2 || (a.size() != 1 && b.size() != 1)) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}