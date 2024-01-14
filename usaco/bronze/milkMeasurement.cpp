// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<pair<int, pair<string, int>>> a(n);
    map<char, int> mp = {{'B', 7}, {'E', 7}, {'M', 7}};
    set<char> ldr;
    int ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second.first >> a[i].second.second;
    }
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        mp[a[i].second.first[0]] += a[i].second.second;
        set<char> st;
        int mx = 0;

        for(auto p : mp) {
            mx = max(mx, p.second);
        }

        for(auto p : mp) {
            if(p.second == mx) {
                st.insert(p.first);
            }
        }
        ans += (ldr != st);
        ldr = st;
    }
    cout << ans;
}

int main() {
    freopen("measurement.out", "w", stdout);
    freopen("measurement.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}