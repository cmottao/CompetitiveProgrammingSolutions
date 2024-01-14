// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int oo = 1e9;

void solve() {
    int n; cin >> n;
    vector<int> l, g;
    int ans = oo;

    for(int i = 0; i < n; i++) {
        char d; cin >> d;
        int ai; cin >> ai;
        ((d == 'G') ? g : l).push_back(ai);
    }
    sort(l.begin(), l.end());
    sort(g.begin(), g.end());

    for(int i = 0; i < l.size(); i++) {
        int x = lower_bound(l.begin(), l.end(), l[i]) - l.begin();
        int y = g.end() - upper_bound(g.begin(), g.end(), l[i]);
        ans = min(ans, x + y);
    }

    for(int i = 0; i < g.size(); i++) {
        int x = lower_bound(l.begin(), l.end(), g[i]) - l.begin();
        int y = g.end() - upper_bound(g.begin(), g.end(), g[i]);
        ans = min(ans, x + y);
    }
    cout << ans;
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}