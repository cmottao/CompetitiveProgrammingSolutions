// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

void solve() {
    int n; cin >> n;
    vector<long long> a(n), b(n);
    long long cur = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());

    for(int i = 0; i < (n + 1) / 2; i++) {
        cur += (n - (i * 2));
        a[i] *= cur;
        if(i != n - 1 - i) a[n - 1 - i] *= cur;
    }
    sort(a.rbegin(), a.rend());

    for(int i = 0; i < n; i++) {
        ans = (ans + (((a[i] % mod) * b[i]) % mod)) % mod;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}