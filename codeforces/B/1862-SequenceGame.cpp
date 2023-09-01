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
    vector<int> b(n), a;

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    a.push_back(b[0]);

    for(int i = 1; i < n; i++) {
        if(b[i] < b[i - 1]) {
            a.push_back(b[i]);
        }
        a.push_back(b[i]);
    }

    cout << a.size() << '\n';
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
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