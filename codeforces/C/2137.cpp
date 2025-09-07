// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

int f(long long x) {
    int e = 0;

    while(x % 2 == 0) {
        x /= 2;
        e++;
    }
    return e;
}

void solve() {
    long long a, b; cin >> a >> b;

    if(a % 2 == 1 && b % 2 == 1) cout << a * b + 1 << '\n';
    else {
        long long e = f(b);

        if(e == 0 || (a % 2 == 1 && e == 1)) cout << -1 << '\n';
        else cout << a * (b / 2) + 2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}