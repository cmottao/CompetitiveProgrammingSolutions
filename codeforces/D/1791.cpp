// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int MOD = 1e9 + 7;
const int oo = 1e9;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    map<char, int> a, b;

    for(int i = 0; i < n; i++) {
        b[s[i]]++;
    }

    for(int i = 0; i < n-1; i++) {
        a[s[i]]++; b[s[i]]--;

        if(b[s[i]] == 0) {
            b.erase(s[i]);
        }
        int ab = a.size() + b.size();
        ans = max(ans, ab);
    }
    cout << ans << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}