// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    long long ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    auto f = [&]() {
        vector<int> freq(n + 1, 0), b(n);
        int m = 0;

        for(int x : a) {
            freq[x]++;
        }

        while(m <= n && freq[m] > 0) m++;

        for(int i = 0; i < n; i++) {
            if(freq[a[i]] == 1 && a[i] < m) b[i] = a[i];
            else b[i] = m;
        }
        a = b;
    };

    if(k == 1) f();
    else if(k & 1) {
        f(); f(); f();
    }
    else {
        f(); f();
    }

    for(int i = 0; i < n; i++) {
        ans += a[i];
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}