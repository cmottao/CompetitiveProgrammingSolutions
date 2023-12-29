// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

map<char, pair<int, int>> mvs = {{'N', {0, 1}}, {'S', {0, -1}}, {'E', {1, 0}}, {'W', {-1, 0}}};

void solve() {
    int n; cin >> n;
    map<pair<int, int>, int> mp;
    pair<int, int> cur = {0, 0};
    int t = 1, ans = oo;

    mp[cur] = t;

    for(int i = 0; i < n; i++) {
        char d; cin >> d;
        int s; cin >> s;

        for(int j = 0; j < s; j++) {
            cur.first += mvs[d].first;
            cur.second += mvs[d].second;
            t++;

            if(mp.find(cur) != mp.end()) {
                ans = min(ans, t - mp[cur]);
            }
            mp[cur] = t;
        }
    }
    cout << ((ans == oo) ? -1 : ans) << '\n';
}

int main() {
    freopen("mowing.out", "w", stdout);
    freopen("mowing.in", "r", stdin);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}