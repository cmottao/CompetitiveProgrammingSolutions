// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<pair<int, int>> a(4);
    int l, w;

    for(int i = 0; i < 4; i++) {
        cin >> a[i].first >> a[i].second;
    }

    for(int i = 1; i < 4; i++) {
        if(a[0].first == a[i].first) {
            l = abs(a[0].second - a[i].second);
        }
        if(a[0].second == a[i].second) {
            w = abs(a[0].first - a[i].first);
        }
    }
    cout << l * w << '\n';
}

int main() {
    #if LOCAL
        freopen("output.txt", "w", stdout);
        freopen("input.txt", "r", stdin);
    #endif

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t; cin >> t;
    while(t--) solve();
}