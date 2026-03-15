// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, s, x; cin >> n >> s >> x;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        sum += ai;
    }
    cout << ((s == sum || (sum < s && (s - sum) % x == 0)) ? "YES" : "NO") << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}