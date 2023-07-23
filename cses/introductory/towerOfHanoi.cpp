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
    int n; cin >> n;
    pair<int, int> case1 = {1, 3};
    vector <pair<int, int>> movements;

    map <pair<int, int>, pair<int, int>> a = {{{1, 2}, {1, 3}}, {{2, 1}, {3, 1}}, {{1, 3}, {1, 2}}, {{3, 1}, {2, 1}}, {{2, 3}, {3, 2}}, {{3, 2}, {2, 3}}};
    map <pair<int, int>, pair<int, int>> b = {{{1, 2}, {2, 1}}, {{2, 1}, {1, 2}}, {{1, 3}, {2, 3}}, {{3, 1}, {3, 2}}, {{2, 3}, {1, 3}}, {{3, 2}, {3, 1}}};

    cout << pow(2, n) - 1 << endl;

    for(int i = 0; i < n; i++) {
        vector <pair<int, int>> movements1, movements2;

        for(pair x : movements) {
            movements1.push_back(a[x]);
            movements2.push_back(b[x]);
        }
        movements1.push_back(case1);
        movements1.insert(movements1.end(), movements2.begin(), movements2.end());
        movements = movements1;
    }

    for(pair x : movements) {
        cout << x.first << " " << x.second << endl;
    }
}

int32_t main() {
    int tc = 1;
    // cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}