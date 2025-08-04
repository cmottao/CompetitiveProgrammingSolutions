// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double

const int MAX = 1e6 + 10;
const int MIN = -MAX;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int pow_two(int n) {
    int pow = 1;

    for(int i = 0; i < n; i++) {
        pow *= 2;
    }
    return pow;
}

void solve() {
    string s, t; cin >> s >> t;
    sort(t.begin(), t.end());

    if(t == "a") {
        cout << 1 << endl;
    }
    else if(t[0] == 'a') {
        cout << -1 << endl;
    }
    else {
        cout << pow_two(s.size()) << endl; 
    }
}

int32_t main() {
    int tc = 1;
    cin >> tc;

    for(int t = 1; t <= tc; t++) {
        solve();
    }
    return 0;
}