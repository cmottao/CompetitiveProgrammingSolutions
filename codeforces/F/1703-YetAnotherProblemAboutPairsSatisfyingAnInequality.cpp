// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, int>> a;
    long long ans = 0;

    for(int i = 1; i <= n; i++) {
        int ai; cin >> ai;
        if(i > ai) a.push_back({ai, i});
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < a.size(); i++) {
        int l = i, r = a.size();

        while(r - l > 1) {
            int m = (l + r) / 2;
            (a[m].first > a[i].second) ? r = m : l = m;
        }
        ans += a.size() - r;
    }
    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}