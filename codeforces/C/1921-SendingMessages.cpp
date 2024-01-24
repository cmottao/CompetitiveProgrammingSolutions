// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, f, a, b; cin >> n >> f >> a >> b;
    vector<long long> m(n + 1);
    long long s = 0;
    m[0] = 0;

    for(int i = 1; i <= n; i++) {
        cin >> m[i];
    }
    
    for(int i = 1; i <= n; i++) {
        s += min((m[i] - m[i - 1]) * a, b);
    }
    cout << ((s < f) ? "YES" : "NO") << '\n';
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