// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 10;
const int MOD = 1e9 + 7;

vector<int> memo(MAX, -1), c;

int dp(int x) {
    memo[0] = 1;
    
    if(memo[x] != -1) {
        return memo[x];
    }
    else {
        memo[x] = 0;

        for(int i : c) {
            if(x - i >= 0) {
                memo[x] += dp(x - i) % MOD;
            }
        }
        return memo[x] % MOD;
    }
}

void solve() {
    int n, x; cin >> n >> x;

    for(int i = 0; i < n; i++) {
        int ci; cin >> ci;
        c.push_back(ci);
    }
    cout << dp(x);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    solve();
}