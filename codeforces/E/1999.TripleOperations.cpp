// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

long long pfx[N];

long long log(int n) {
    long long s = 0;

    while(n) {
        n /= 3;
        s++;
    }
    return s;
}

void solve() {
    int l, r; cin >> l >> r;
    cout << (log(l) * 2) + (pfx[r] - pfx[l]) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    pfx[0] = 0;

    for(int i = 1; i < N; i++) {
        pfx[i] = log(i);
        pfx[i] += pfx[i - 1];
    }
    
    int t; cin >> t;
    while(t--) solve();
}