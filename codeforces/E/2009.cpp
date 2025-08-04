// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k; cin >> n >> k;
    unsigned long long x = ((4 * (k * k)) - (4 * k) + 1 + (2 * (n * n)) - (2 * n) + (4 * k * n));
    long long r = floor((1 - (2 * k) + sqrt(x)) / 2);

    auto f = [&](long long x) -> long long {
        return abs((((2 * (x * x)) - (2 * x) - (n * n) + n) / 2) + (2 * k * x) - (k * n));
    };
    cout << min(f(r), f(r + 1)) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}