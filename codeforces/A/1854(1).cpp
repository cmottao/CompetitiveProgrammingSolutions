// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<long long> a(n);
    vector<pair<int, int>> ans;
    int flg = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > 0) flg = 1;
    }

    if(flg) {
        int p = 0;
        while(a[p] <= 0) p++;

        for(int i = 0; i < 6; i++) {
            ans.push_back({p, p});
            a[p] += a[p];
        }
        
        ans.push_back({0, p});
        a[0] += a[p];

        for(int i = 1; i < n; i++) {
            while(a[i] < a[i - 1]) {
                ans.push_back({i, i - 1});
                a[i] += a[i - 1];
            }
        }
    }
    else {
        for(int i = 0; i < 6; i++) {
            ans.push_back({n - 1, n - 1});
            a[n - 1] += a[n - 1];
        }

        for(int i = n - 2; i >= 0; i--) {
            while(a[i] > a[i + 1]) {
                ans.push_back({i, i + 1});
                a[i] += a[i + 1];
            }
        }
    }

    cout << ans.size() << '\n';
    for(auto [i, j] : ans) {
        cout << i + 1 << ' ' << j + 1 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}