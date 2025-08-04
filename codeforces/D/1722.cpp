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
    vector<int> mx(n);
    int lines = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'L') {
            lines += i;
            mx[i] = abs(i - max(i, n - i - 1));
        }
        else {
            lines += (n - i - 1);
            mx[i] = abs((n - i - 1) - max(i, n - i - 1));
        }
    }
    sort(mx.rbegin(), mx.rend());
    
    for(int i = 0; i < n; i++) {
        lines += mx[i];
        cout << lines << ' ';
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