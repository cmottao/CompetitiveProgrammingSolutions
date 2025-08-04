// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, z, k; cin >> x >> y >> z >> k;
    long long ans = 0;

    for(int a = 1; a <= x; a++) {
        for(int b = 1; b <= y; b++) {
            if(k % (a * b) == 0 && k / (a * b) <= z) ans = max(ans, (x - a + 1) * (y - b + 1) * (z - (k / (a * b)) + 1));
        }
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}