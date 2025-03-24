// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    long long s = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        s += ai;
    }
    cout << s - (n - 1) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}