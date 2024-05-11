// Made by Cristian Motta (cmottao)
#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
const int N = 1e6 + 10;

vector<long long> memo(N, -1);

long long f(int n) {
    if(n == 0) {
        return 1;
    }
    else if(memo[n] != -1) {
        return memo[n];
    }
    else {
        memo[n] = 0;

        for(int i = 1; i <= 6; i++) {
            if(n >= i) {
                memo[n] += f(n - i) % mod;
            } 
        }
        return memo[n] % mod;
    }
}

void solve() {
    int n; cin >> n;
    cout << f(n);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();
}