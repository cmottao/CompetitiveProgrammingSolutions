// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

vector<int> a(N), p(N);

long long f(int sp, int k) {
    long long cp = sp, mx = 0, s = 0, ans = 0, c = 0;

    while(true) {
        s += a[cp - 1];
        mx = max(mx, (long long) a[cp - 1]);
        ans = max(ans, s + ((k - ++c) * mx));

        if(p[cp - 1] == sp) break;
        cp = p[cp - 1];
    }
    return ans;
}

void solve() {
    int n, k, b, s; cin >> n >> k >> b >> s;
    
    for(int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long pb = f(b, k), ps = f(s, k);
    cout << ((pb > ps) ? "Bodya" : ((ps > pb) ? "Sasha" : "Draw")) << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}