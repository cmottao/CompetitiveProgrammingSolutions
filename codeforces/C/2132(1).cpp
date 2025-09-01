// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

long long power(int b, int e) {
    long long s = 1;

    for(int i = 0; i < e; i++) {
        s *= b;
    }
    return s;
}

void solve() {
    int n; cin >> n;
    long long ans = 0;

    for(int x = 18; x >= 0; x--) {
        ans += (n / power(3, x)) * (power(3, x + 1) + x * power(3, x - 1));
        n %= power(3, x);
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}