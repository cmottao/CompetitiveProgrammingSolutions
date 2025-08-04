// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int ans = 0;
    map<char, pair<int, int>> reps;

    for(char ch : s) {
        if(isupper(ch)) {
            reps[tolower(ch)].first++;
        }
        else {
            reps[ch].second++;
        }
    }

    for(auto x : reps) {
        int diff = abs(x.second.first - x.second.second);
        ans += min(x.second.first, x.second.second) + min(k, diff / 2);
        k -= min(k, diff / 2);
    }
    cout << ans << endl;
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}