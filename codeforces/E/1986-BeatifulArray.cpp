// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    vector<pair<int, int>> a(n + 1);
    int ans = 0, j = 0, flg = 0;
    a[n] = {-1, 0};

    for(int i = 0; i < n; i++) {
        int ai; cin >> ai;
        a[i] = {ai % k, ai};
    }
    sort(a.begin(), a.end() - 1);

    for(int i = 1; i <= n; i++) {
        if(a[i].first == a[i - 1].first) continue;

        if((i - j) % 2) {
            if(n % 2 == 0 || flg) {
                cout << -1 << '\n';
                return;
            }
            int mn, s = 0;

            for(int l = j + 1; l < i; l += 2) {
                s += (a[l + 1].second - a[l].second);
            }
            mn = s;

            for(int l = j + 1; l < i; l += 2) {
                s -= (a[l + 1].second - a[l].second);
                s += (a[l].second - a[l - 1].second);
                mn = min(mn, s);
            }
            ans += (mn / k);
            flg = 1;
        }
        else {
            for(int l = j; l < i; l += 2) {
                ans += (a[l + 1].second - a[l].second) / k;
            }
        }
        j = i;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}