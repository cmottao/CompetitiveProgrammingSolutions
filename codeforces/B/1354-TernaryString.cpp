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
    string s; cin >> s;
    vector<pair<char, int>> a;
    int c = 1, ans = oo;
    s += '0';

    for(int i = 0; i < s.size()-1; i++) {
        if(s[i] == s[i + 1]) {
            c++;
        }
        else {
            a.push_back({s[i], c});
            c = 1;
        }
    }

    for(int i = 1; i < a.size()-1; i++) {
        if(a[i].first != a[i - 1].first && a[i - 1].first != a[i + 1].first) {
            ans = min(ans, a[i].second + 2);
        } 
    }
    cout << ((ans != oo) ? ans : 0) << '\n';
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