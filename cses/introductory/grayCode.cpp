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
    vector <string> strs = {"0", "1"};

    for(int i = 0; i < n-1; i++) {
        for(int j = strs.size()-1; j >= 0; j--) {
            strs.push_back("1" + strs[j]);
            strs[j] = "0" + strs[j];
        }
    }
    
    for(string x : strs) {
        cout << x << endl;
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