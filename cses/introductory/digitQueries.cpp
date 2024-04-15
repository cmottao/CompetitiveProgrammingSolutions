// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

long long power(long long b, long long e) {
    long long s = 1;

    while(e--) {
        s *= b;
    }
    return s;
}

void solve() {
    long long k; cin >> k;
    long long d = 1, b = 9, s = 0;

    while(s + (b * d) < k) {
        s += (b * d);
        b *= 10;
        d++;
    }

    long long p = power(10, d - 1);
    string n = to_string(p + ((k - s - 1) / d));

    cout << n[(k - s - 1) % d] << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}