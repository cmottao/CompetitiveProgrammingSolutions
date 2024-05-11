// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
const int oo = 1e9;

vector<int> memo(N, -1), c;

int f(int x) { 
    if(x == 0) {
        return 0;
    }
    else if(memo[x] != -1) {
        return memo[x];
    }
    else {
        memo[x] = oo;

        for(int ci : c) { 
            if(x >= ci) {
                memo[x] = min(memo[x], f(x - ci) + 1);
            } 
        }
        return memo[x];
    }
}

void solve() {
    int n, x; cin >> n >> x;

    for(int i = 0; i < n; i++) {
        int ci; cin >> ci;
        c.push_back(ci);
    }
    cout << ((f(x) == oo) ? -1 : f(x));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}