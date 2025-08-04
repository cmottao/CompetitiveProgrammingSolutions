// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    map<int, int> mp;

    for(int i = 0; i < n; i++) {
        int si; cin >> si;
        mp[si]++;
    }
    mp[1] = max(mp[1] - mp[3], 0);
    cout << mp[4] + mp[3] + ((mp[1] + mp[2] * 2 + 3) / 4);
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