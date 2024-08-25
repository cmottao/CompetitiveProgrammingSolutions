// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    long long s = 0;

    auto gauss = [](int n) -> long long {
        return ((long long) n * (n + 1)) / 2;
    };

    for(int i = 0; i < m; i++) {
        int x, d; cin >> x >> d;
        s += (long long) x * n;

        if(d > 0) s += gauss(n - 1) * d;
        else s += (gauss(n / 2) + gauss((n - 1) / 2)) * d;
    }
    cout << (double) s / n;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cout.precision(15);

    solve();
}