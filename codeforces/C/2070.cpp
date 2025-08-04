// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> a(n), b(n + 1);
    int l = 0, r = n;
    b[0] = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i + 1] = a[i];
    }
    sort(b.begin(), b.end());

    auto f = [&](int x) -> int {
        int flg = 0, ans = 0;

        for(int i = 0; i < n; i++) {
            if(a[i] > x) {
                if(s[i] == 'B') {
                    if(!flg) ans++;
                    flg = 1;
                }
                else flg = 0;
            }
        }
        return ans <= k;
    };

    while(r > l) {
        int m = (l + r) >> 1;
        f(b[m]) ? r = m : l = m + 1;
    }
    cout << b[r] << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}